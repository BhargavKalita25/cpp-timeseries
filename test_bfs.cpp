#include "dsa/graphs/bfs_dfs.hpp"
#include <cassert>

int main(){
    dsa::Graph g(5);
    g[0] = {1,2};
    g[1] = {0,3};
    g[2] = {0,3,4};
    g[3] = {1,2};
    g[4] = {2};

    auto dist = dsa::bfs(g, 0);
    assert(dist[0] == 0);
    assert(dist[3] == 2);
    auto order = dsa::dfs(g, 0);
    assert(!order.empty());
    return 0;
}