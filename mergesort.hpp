#pragma once
#include <vector>

namespace dsa {

template<typename T>
void merge(std::vector<T>& a, int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    std::vector<T> L(n1), R(n2);
    for (int i = 0; i < n1; ++i) L[i] = a[l + i];
    for (int j = 0; j < n2; ++j) R[j] = a[m + 1 + j];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) a[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    while (i < n1) a[k++] = L[i++];
    while (j < n2) a[k++] = R[j++];
}

template<typename T>
void mergesort(std::vector<T>& a, int l, int r) {
    if (l >= r) return;
    int m = l + (r - l)/2;
    mergesort(a, l, m);
    mergesort(a, m + 1, r);
    merge(a, l, m, r);
}

template<typename T>
void mergesort(std::vector<T>& a) {
    if (!a.empty()) mergesort(a, 0, static_cast<int>(a.size()) - 1);
}

} // namespace dsa