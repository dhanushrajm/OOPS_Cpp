#include <stdio.h>
#include <limits.h>
#include <iostream>
 
using namespace std;
 
// Number of vertices of the graph=5
#define V 5

int minKey(int key[], bool mstSet[])
{
    // Initialize min value
    int min = INT_MAX, min_index;
 
    for (int v = 0; v < V; v++)
    if (mstSet[v] == false && key[v] < min)
    min = key[v], min_index = v;
 
    return min_index;
}
 

int printMST(int parent[], int n, int graph[V][V])
{
    cout<<"Edge   Weight\n";
    for (int i = 1; i < V; i++)
        printf("%d - %d    %d \n", parent[i], i, graph[i][parent[i]]);
}
 

void primMST(int graph[V][V])
{
    int parent[V]; 
    int key[V]; 
    bool mstSet[V]; 
 
    
    for (int i = 0; i < V; i++)
        key[i] = INT_MAX, mstSet[i] = false;
 
    
    key[0] = 0; 
    parent[0] = -1; 
 
    // The MST will have V vertices
    for (int count = 0; count < V - 1; count++)
    {
        
        int u = minKey(key, mstSet);
 
        
        mstSet[u] = true;
 
        
        for (int v = 0; v < V; v++)
 
        
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
                parent[v] = u, key[v] = graph[u][v];
    }
 
    // print the constructed MST
    printMST(parent, V, graph);
}
 
// driver program
int main()
{
   
    int graph[V][V] = { { 0, 2, 4, 5, 0 }, { 2, 0, 0, 3, 2 },
            { 4, 0, 0, 4, 0 }, { 5, 3, 4, 0, 3 }, { 0, 2, 0, 3, 0 }, };
 
    // Print the solution
    primMST(graph);
 
    return 0;
}
