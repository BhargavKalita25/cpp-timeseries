#pragma once
#include <vector>

namespace dsa {

struct Fenwick {
    int n; std::vector<long long> bit;
    explicit Fenwick(int n): n(n), bit(n+1, 0) {}
    void add(int idx, long long delta){
        for (++idx; idx <= n; idx += idx & -idx) bit[idx] += delta;
    }
    long long sum_prefix(int idx) const {
        long long res = 0;
        for (++idx; idx > 0; idx -= idx & -idx) res += bit[idx];
        return res;
    }
    long long sum_range(int l, int r) const {
        return sum_prefix(r) - (l? sum_prefix(l-1) : 0);
    }
};

} // namespace dsa