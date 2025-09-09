#pragma once
#include <vector>
#include <utility>

namespace dsa {

template<typename T>
int partition(std::vector<T>& a, int l, int r) {
    T pivot = a[r];
    int i = l - 1;
    for (int j = l; j < r; ++j) {
        if (a[j] <= pivot) {
            ++i; std::swap(a[i], a[j]);
        }
    }
    std::swap(a[i+1], a[r]);
    return i + 1;
}

template<typename T>
void quicksort(std::vector<T>& a, int l, int r) {
    if (l < r) {
        int p = partition(a, l, r);
        quicksort(a, l, p - 1);
        quicksort(a, p + 1, r);
    }
}

template<typename T>
void quicksort(std::vector<T>& a) {
    if (!a.empty()) quicksort(a, 0, static_cast<int>(a.size()) - 1);
}

} // namespace dsa