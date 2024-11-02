#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

struct Node {
    int vertex;
    string color;
};

bool is_bipartite(vector<vector<int>> edges) {
    unordered_map<int, string> color_map;
    for (vector<int> edge : edges)
    {
        int vertex_first = edge[0];
        int vertex_second = edge[1];
        // If both vertices aren't colored, color them
        if (color_map.find(vertex_first) == color_map.end() && color_map.find(vertex_second) == color_map.end())
        {
            color_map[vertex_first] = "red";
            color_map[vertex_second] = "blue";
        }
        // Else color the first vertex if it's not been colored already
        else if (color_map.find(vertex_first) == color_map.end())
            color_map[vertex_first] = (color_map[vertex_second] == "red") ? "blue" : "red";
        // Else color the second vertex if it's not been colored already
        else if (color_map.find(vertex_second) == color_map.end())
            color_map[vertex_second] = (color_map[vertex_first] == "red") ? "blue" : "red";
        // MAIN CONDITION : Else if two vertices have same color (not adjacent)
        else if (color_map[vertex_first] == color_map[vertex_second])
            return false;
    }
    return true;
}

int main() {
    // Sample unordered edges
    vector<vector<int>> edges = {
        {1, 2}, {2, 3}, {3, 1}
    };

    if (is_bipartite(edges))
        cout << "Graph is bipartite.";
    else
        cout << "Graph is not bipartite!";

    return 0;
}