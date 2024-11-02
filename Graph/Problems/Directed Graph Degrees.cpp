#include<iostream>
#include<vector>
using namespace std;

int element_index_in_list(vector<int> list, int element) {
    for (int i = 0; i < list.size(); i++) {
        if (element == list[i]) {
            return i;
        }
    }
    return -1; // In case not found
}

struct Node {
    int vertex;
    int in_degree;
    int out_degree;
};

vector<Node> calculate_degrees_of_nodes(vector<vector<int>> edges) {
    vector<int> nodes;
    for (vector<int> edge : edges) {
        int first_node = edge[0], second_node = edge[1];
        nodes.push_back(first_node);
        nodes.push_back(second_node);
    }

    vector<int> vertices, in_degrees, out_degrees;
    for (int i = 0; i < nodes.size(); i += 2) {
        int source_node = nodes[i];
        int destination_node = nodes[i + 1];

        // In-degree calculation
        int in_index = element_index_in_list(vertices, destination_node);
        if (in_index == -1) {
            vertices.push_back(destination_node);
            in_degrees.push_back(1);
            out_degrees.push_back(0);
        } else {
            in_degrees[in_index]++;
        }

        // Out-degree calculation
        int out_index = element_index_in_list(vertices, source_node);
        if (out_index == -1) {
            vertices.push_back(source_node);
            in_degrees.push_back(0);
            out_degrees.push_back(1);
        } else {
            out_degrees[out_index]++;
        }
    }

    vector<Node> nodes_with_degrees;
    for (int i = 0; i < vertices.size(); i++) {
        Node node_with_degree;
        node_with_degree.vertex = vertices[i];
        node_with_degree.in_degree = in_degrees[i];
        node_with_degree.out_degree = out_degrees[i];
        nodes_with_degrees.push_back(node_with_degree);
    }

    return nodes_with_degrees;
}

main() {
    // Sample ordered edges
    vector<vector<int>> edges = {
        {1, 2}, {2, 3}, {3, 1}
    };

    vector<Node> nodes_with_degrees = calculate_degrees_of_nodes(edges);
    for (Node node : nodes_with_degrees) {
        cout << "Vertex " << node.vertex << " has In-Degree: " << node.in_degree << " and Out-Degree " << node.out_degree << endl;
    }
}
