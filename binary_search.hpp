#pragma once
#include <vector>

namespace dsa {

// returns index or -1 if not found
template<typename T>
int binary_search(const std::vector<T>& a, const T& key) {
    int l = 0, r = static_cast<int>(a.size()) - 1;
    while (l <= r) {
        int m = l + (r - l)/2;
        if (a[m] == key) return m;
        if (a[m] < key) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

} // namespace dsa