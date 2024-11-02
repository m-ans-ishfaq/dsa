#include <iostream>
#include <vector>
#include<algorithm>
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

bool loop_in_edges(vector<vector<int>> edges, vector<int> pair)
{
    for (int i = 0; i < edges.size(); i++)
    {
        // Works only for directed graph
        if (pair[0] == edges[i][0] && pair[1] == edges[i][1])
            true;
    }
    return false;
}

int pairs_count_in_edges(vector<vector<int>> edges, vector<int> pair)
{
    int count = 0;
    for (int i = 0; i < edges.size(); i++)
    {
        // Works only for directed graph
        if (pair[0] == edges[i][0] && pair[1] == edges[i][1])
            count++;
    }
    return count;
}

vector<vector<int>> get_adjacency_matrix(vector<vector<int>> edges)
{
    // First we get all unique nodes
    vector<int> unique_nodes;
    for (vector<int> edge: edges)
    {
        int vertex_first = edge[0], vertex_second = edge[1];
        if (element_index_in_list(unique_nodes, vertex_first) == -1)
            unique_nodes.push_back(vertex_first);
        if (element_index_in_list(unique_nodes, vertex_second) == -1)
            unique_nodes.push_back(vertex_second);
    }
    sort(unique_nodes.begin(), unique_nodes.end());
    // Now we construct our adjacent matrix
    vector<vector<int>> adjacent_matrix;
    for (int i = 0; i < unique_nodes.size(); i++)
    {
        vector<int> row;
        for (int j = 0; j < unique_nodes.size(); j++)
        {
            vector<int> pair = {unique_nodes[i], unique_nodes[j]};
            int edges_count = pairs_count_in_edges(edges, pair);
            if (edges_count && pair[0] == pair[1] /* Loop */)
                row.push_back(1);
            else if (edges_count)
                row.push_back(edges_count);
            else
                row.push_back(0);
        }
        adjacent_matrix.push_back(row);
    }
    return adjacent_matrix;
}

main() {
    // Sample ordered edges
    vector<vector<int>> edges = {
        {1,2}, {2,3}, {3,4}, {4,1}, {4,1}, {4,1}, {3,2}, {3,3}
    };
    cout << "Adjacency matrix:\n";
    vector<vector<int>> adjacent_matrix = get_adjacency_matrix(edges);
    for (int i = 0; i < adjacent_matrix.size(); i++)
    {
        for (int j = 0; j < adjacent_matrix.size(); j++)
        {
            cout << adjacent_matrix[i][j] << " ";
        }
        cout << endl;
    }
}
