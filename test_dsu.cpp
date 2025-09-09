#include "dsa/data_structures/dsu.hpp"
#include <cassert>

int main(){
    dsa::DSU d(6);
    d.unite(0,1);
    d.unite(2,3);
    d.unite(1,2);
    assert(d.same(0,3));
    assert(!d.same(0,5));
    assert(d.size(0) == 4);
    return 0;
}