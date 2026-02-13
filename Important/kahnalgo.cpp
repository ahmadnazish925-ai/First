#include<bits/stdc++.h>
using namespace std;


int main(){
vector<int> topologicalSort(int V, vector<vector<int>>& adj) {
vector<int> inDegree(V, 0), topoOrder;
queue<int> q;

// Compute in-degree of each node
for (int u = 0; u < V; u++)
for (int v : adj[u])
inDegree[v]++;

// Push nodes with in-degree 0
for (int i = 0; i < V; i++)
if (inDegree[i] == 0) q.push(i);

// Process nodes
while (!q.empty()) {
int u = q.front(); q.pop();
topoOrder.push_back(u);

for (int v : adj[u]) {
if (--inDegree[v] == 0) q.push(v);
}
}

return topoOrder;
}
}