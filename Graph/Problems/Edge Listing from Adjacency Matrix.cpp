#include<iostream>
#include<vector>
using namespace std;

// Assuming the graph is undirected since frequency is asked
struct Edge {
    int first_node;
    int second_node;
    int frequency;
};

int pair_index_in_edges(vector<Edge> edges_list, vector<int> pair)
{
    for (int i = 0; i < edges_list.size(); i++)
    {
        // Works only for undirected graph
        if ((pair[0] == edges_list[i].first_node && pair[1] == edges_list[i].second_node) || (pair[0] == edges_list[i].second_node && pair[1] == edges_list[i].first_node))
            return i;
    }
    return -1; // Incase not found
}

vector<Edge> get_edges_from_adjacent_matrix(vector<vector<int>> adjacent_matrix)
{
    vector<Edge> edges_list;
    int size = adjacent_matrix.size();
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            vector<int> pair = {i,j};
            if (adjacent_matrix[i-1][j-1])
            {
                int pair_index = pair_index_in_edges(edges_list, pair);
                if (pair_index == -1) // If edge doesn't exist, create one
                {
                    Edge edge;
                    edge.first_node = i;
                    edge.second_node = j;
                    edge.frequency = 1;
                    edges_list.push_back(edge);
                }
                else // Otherwise increase frequency
                {
                    edges_list[pair_index].frequency++;
                }
            }
            
        }
    }
    return edges_list;
}

main()
{
    // Sample adjacent matrix
    vector<vector<int>> adjacent_matrix = {
        {0,1,1},
        {1,0,1},
        {1,1,0}
    };
    vector<Edge> edges_list = get_edges_from_adjacent_matrix(adjacent_matrix);
    for (Edge edge: edges_list)
        cout << "Edge (" << edge.first_node << ", " << edge.second_node << ") appeared " << edge.frequency << " times\n";
}