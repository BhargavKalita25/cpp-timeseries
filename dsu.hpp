#pragma once
#include <vector>
#include <numeric>

namespace dsa {

struct DSU {
    std::vector<int> p, sz;
    explicit DSU(int n): p(n), sz(n,1) { std::iota(p.begin(), p.end(), 0); }
    int find(int x){ return p[x]==x? x : p[x]=find(p[x]); }
    bool unite(int a, int b){
        a = find(a); b = find(b);
        if (a == b) return false;
        if (sz[a] < sz[b]) std::swap(a,b);
        p[b] = a; sz[a] += sz[b];
        return true;
    }
    bool same(int a, int b){ return find(a) == find(b); }
    int size(int a){ return sz[find(a)]; }
};

} // namespace dsa