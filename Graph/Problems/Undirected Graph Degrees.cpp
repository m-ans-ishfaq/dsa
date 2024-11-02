#include<iostream>
#include<vector>
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

struct Node {
    int vertex;
    int degree;
};

vector<Node> calculate_degrees_of_nodes(vector<vector<int>> edges)
{
    // First we flatten our input into one dimension
    vector<int> nodes;
    for (vector<int> edge: edges)
    {
        int first_node = edge[0], second_node = edge[1];
        nodes.push_back(first_node);
        nodes.push_back(second_node);
    }
    // Then we calculate it's frequency distribution (both vectors below are mapped)
    vector<int> vertices, degrees;
    for (int node: nodes)
    {
        int index = element_index_in_list(vertices, node);
        if (index == -1) // If a unique node is encountered, create it
        {
            vertices.push_back(node);
            degrees.push_back(1);
        }
        else // Otherwise, increase it's degree
        {
            degrees[index]++;
        }
    }
    // Now we map vertices to degrees into our Node structure
    vector<Node> nodes_with_degrees;
    for (int i = 0; i < vertices.size(); i++)
    {
        Node node_with_degree;
        node_with_degree.vertex = vertices[i];
        node_with_degree.degree = degrees[i];
        nodes_with_degrees.push_back(node_with_degree);
    }
    return nodes_with_degrees;
}

main()
{
    // Sample unordered edges
    vector<vector<int>> edges = {
        {1,2},{2,3},{3,1}
    };
    vector<Node> nodes_with_degrees = calculate_degrees_of_nodes(edges);
    for (Node node: nodes_with_degrees)
        cout << "Degree of Vertex " << node.vertex << " is " << node.degree << endl;
}