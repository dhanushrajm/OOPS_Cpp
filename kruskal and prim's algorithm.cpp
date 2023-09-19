#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Kruskal's algorithm
vector<pair<int, pair<int, int>>> edges; // edges sorted by weight
vector<int> parent(V);

int find(int x) {
    if (parent[x] != x)
        parent[x] = find(parent[x]);
    return parent[x];
}

void kruskal() {
    sort(edges.begin(), edges.end());
    for (int i = 0; i < V; i++)
        parent[i] = i;
    int cnt = 0, cost = 0;
    for (int i = 0; i < E; i++) {
        int u = edges[i].second.first, v = edges[i].second.second, w = edges[i].first;
        int pu = find(u), pv = find(v);
        if (pu != pv) {
            parent[pu] = pv;
            cnt++;
            cost += w;
            if (cnt == V - 1)
                break;
        }
    }
    cout << "Minimum spanning tree cost: " << cost << endl;
}

// Prim's algorithm
vector<vector<pair<int, int>>> adjList; // adjacency list
vector<bool> visited(V);

void prim() {
    vector<int> dist(V, INT_MAX);
    dist[0] = 0;
    int cost = 0;
    for (int i = 0; i < V; i++) {
        int u = -1, minDist = INT_MAX;
        for (int j = 0; j < V; j++) {
            if (!visited[j] && dist[j] < minDist) {
                minDist = dist[j];
                u = j;
            }
        }
        visited[u] = true;
        cost += minDist;
        for (int j = 0; j < adjList[u].size(); j++) {
            int v = adjList[u][j].first, w = adjList[u][j].second;
            if (!visited[v] && w < dist[v])
                dist[v] = w;
        }
    }
    cout << "Minimum spanning tree cost: " << cost << endl;
}

int main() {
    // Input and initialization of edges and adjacency list

    // Kruskal's algorithm
    kruskal();

    // Prim's algorithm
    prim();

    return 0;
}
