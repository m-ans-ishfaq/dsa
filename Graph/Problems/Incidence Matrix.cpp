#include <iostream>
#include <vector>
using namespace std;

int element_index_in_list(vector<int> list, int element)
{
    for (int i = 0; i < list.size(); i++)
    {
        if (element == list[i])
            return i;
    }
    return -1; // Incase not found
}

vector<vector<int>> get_indicidence_matrix(vector<vector<int>> edges_list_with_frequencies)
{
    // First extracting frequencies and unique nodes
    vector<int> unique_nodes;
    vector<vector<int>> edges_list;
    for (vector<int> edge : edges_list_with_frequencies)
    {
        int vertex_first = edge[0], vertex_second = edge[1];
        for (int j = 0; j < edge[2]; j++) // Loop runs frequency times
            edges_list.push_back({vertex_first, vertex_second});
        if (element_index_in_list(unique_nodes, vertex_first) == -1)
            unique_nodes.push_back(vertex_first);
        if (element_index_in_list(unique_nodes, vertex_second) == -1)
            unique_nodes.push_back(vertex_second);
    }
    // Now constructing incidence matrix
    vector<vector<int>> incidence_matrix;
    for (int i = 1; i <= unique_nodes.size(); i++)
    {
        vector<int> row;
        for (int j = 1; j <= edges_list.size(); j++)
        {
            int node = unique_nodes[i - 1];
            vector<int> edge = edges_list[j - 1];
            if (edge[0] == node || edge[1] == node)
                row.push_back(1);
            else
                row.push_back(0);
        }
        incidence_matrix.push_back(row);
    }
    return incidence_matrix;
}

main()
{
    // Samples edges with frequency (node1, node2, frequency)
    vector<vector<int>> edges_list_with_frequencies = {
        {1, 2, 1},
        {2, 3, 1},
        {3, 1, 3},
    };
    vector<vector<int>> incident_matrix = get_indicidence_matrix(edges_list_with_frequencies);
    for (vector<int> row : incident_matrix)
    {
        for (int cell : row)
            cout << cell << " ";
        cout << endl;
    }
}