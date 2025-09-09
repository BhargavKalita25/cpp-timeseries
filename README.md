# C++ DSA Starter (Bhargav)

A clean, **header‑only** C++17 starter for Data Structures & Algorithms practice.  
Includes: sorting, DSU (Union‑Find), Fenwick Tree, Binary Search, and BFS/DFS — with tiny tests.

## Build
```bash
mkdir build && cd build
cmake ..
cmake --build .
ctest    # run tests
```
## Run demo
```bash
./dsa_demo
```

## Layout
```
include/dsa/
  algorithms/ (binary_search, quicksort, mergesort)
  data_structures/ (dsu, fenwick)
  graphs/ (bfs_dfs)
tests/ (minimal asserts via ctest)
problems/ (put your own problem solutions here)
src/main.cpp (demo)
```

## Notes
- Built by **Bhargav** for practice.  
- Feel free to add files in `problems/` with your own solutions and commit regularly.

## License
MIT