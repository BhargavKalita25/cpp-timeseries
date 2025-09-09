#include <iostream>
#include "dsa/algorithms/binary_search.hpp"
#include "dsa/data_structures/dsu.hpp"

int main() {
    std::vector<int> a{1,3,5,7,9};
    int idx = dsa::binary_search(a, 7);
    std::cout << "binary_search(7) -> " << idx << "\n";

    dsa::DSU d(5);
    d.unite(0,1); d.unite(3,4);
    std::cout << "DSU same(0,1): " << d.same(0,1) << "\n";
    std::cout << "DSU same(1,2): " << d.same(1,2) << "\n";
    return 0;
}