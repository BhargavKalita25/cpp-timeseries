#include "dsa/algorithms/quicksort.hpp"
#include "dsa/algorithms/mergesort.hpp"
#include <vector>
#include <cassert>

int main(){
    std::vector<int> a{5,1,4,2,8,0,2};
    auto b = a, c = a;
    dsa::quicksort(a);
    dsa::mergesort(b);
    std::sort(c.begin(), c.end());
    assert(a == c);
    assert(b == c);
    return 0;
}