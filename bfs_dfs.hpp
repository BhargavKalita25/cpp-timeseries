#pragma once
#include <vector>
#include <queue>

namespace dsa {

using Graph = std::vector<std::vector<int>>;

inline std::vector<int> bfs(const Graph& g, int s){
    int n = (int)g.size();
    std::vector<int> dist(n, -1);
    std::queue<int> q;
    dist[s] = 0; q.push(s);
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(int v: g[u]) if(dist[v] == -1){
            dist[v] = dist[u] + 1;
            q.push(v);
        }
    }
    return dist;
}

inline void dfs_util(const Graph& g, int u, std::vector<int>& vis, std::vector<int>& order){
    vis[u] = 1; order.push_back(u);
    for(int v: g[u]) if(!vis[v]) dfs_util(g, v, vis, order);
}

inline std::vector<int> dfs(const Graph& g, int s){
    std::vector<int> vis(g.size(), 0), order;
    dfs_util(g, s, vis, order);
    return order;
}

} // namespace dsa