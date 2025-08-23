# DSA in C++ – Solutions

A clean, well‑organized repository where I solve Data Structures & Algorithms (DSA) problems in **C++** and document approaches, code, and complexity. Perfect for interview prep and revision.

---

## 🔥 Goals

* Practice DSA daily and track progress.
* Keep solutions readable, tested, and categorized.
* Learn clean C++ (C++17/C++20), STL, and problem‑solving patterns.

---

## 📂 Repository Structure

```
.
├── src/
│   ├── arrays/
│   ├── strings/
│   ├── linked_list/
│   ├── stack_queue/
│   ├── trees/
│   ├── graphs/
│   ├── greedy/
│   ├── dp/                # Dynamic Programming
│   ├── math/
│   └── misc/
├── include/               # Reusable headers (fast IO, helpers)
│   └── fast_io.hpp
├── templates/
│   └── solution_template.cpp
├── tests/                 # Sample inputs/outputs, edge cases
│   └── sample_input_output.md
├── CMakeLists.txt         # Optional: build with CMake
├── .gitignore
├── LICENSE (MIT)
└── README.md
```

> Each problem gets its own `.cpp` file inside the correct topic folder. If needed, create a subfolder with a short `README.md` explaining the approach.

---

## 🧰 Tech & Requirements

* **Language:** C++17 or C++20
* **Compiler:** `g++` (MinGW/Clang/MSVC also fine)
* **Build tools (optional):** CMake 3.16+

---

## 🚀 Getting Started

### 1) Build & Run with g++

```bash
# Compile a single file
g++ -std=c++17 -O2 -Wall -Wextra -pedantic src/arrays/two_sum.cpp -o two_sum

# Run
./two_sum < input.txt
```

### 2) Build & Run with CMake (optional)

```bash
# Configure
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release

# Build all targets
cmake --build build --config Release

# Run a target (example)
./build/bin/two_sum
```

> Add new executable targets in `CMakeLists.txt` as you add files.

---

## 📝 Solution Template (use this for every problem)

**File:** `templates/solution_template.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

// Problem: <Platform/ID/Link>
// Approach:
// 1) ...
// 2) ...
// Complexity: Time O(...), Space O(...)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // read input
    // solve
    // print output

    return 0;
}
```

**How to use:**

1. Copy this into the right topic folder, e.g. `src/trees/bst_inorder.cpp`.
2. Replace the header comment with details.
3. Keep I/O clean and predictable.

---

## 📌 Naming & Conventions

* **Files:** `snake_case.cpp` (e.g., `next_permutation.cpp`)
* **Functions:** `camelCase` for helpers, `solve()` for main logic (optional)
* **Headers:** put common helpers in `include/`
* **Commits:** short and clear: `feat(dp): add LIS (n log n)` or `fix(graph): handle 0-indexed`.

---

## ✅ Example Solution (Two Sum – indices)

`src/arrays/two_sum.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

// Problem: Return indices of two numbers that add up to target.
// Approach: Hash map (value -> index). For each a[i], check if target-a[i] seen.
// Complexity: Time O(n), Space O(n)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, target;
    if(!(cin >> n >> target)) return 0;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    unordered_map<int,int> pos; // value -> index
    for(int i=0;i<n;i++){
        int need = target - a[i];
        if(pos.count(need)){
            cout << pos[need] << " " << i << "\n";
            return 0;
        }
        pos[a[i]] = i;
    }
    cout << -1 << "\n"; // not found
    return 0;
}
```

### Sample

```
Input
5 9
2 7 11 15 4

Output
0 1
```

---

## 🧪 Testing Tips

* Create small input files in `tests/` and run with input redirection.
* Check boundaries: empty, single element, duplicates, negative values.
* Cross‑verify with brute‑force for correctness on small `n`.

---

## 🧠 Topic Checklist (to cover)

* Arrays & Prefix/Suffix
* Strings & Hashing
* Linked List (SLL/DLL)
* Stack & Queue, Deque, Monotonic Stack
* Trees (BST/BT/Trie), Traversals
* Heaps & Priority Queue
* Graphs (BFS/DFS/Topo/Shortest Path/DSU)
* Greedy Patterns
* Binary Search on Answer
* Sliding Window & Two Pointers
* Dynamic Programming (1D/2D/Knapsack/Tree DP/Bitmask)
* Math (GCD, Sieve, Mod, Combinatorics)

---

## 🤝 Contributing (future‑proof)

1. Fork the repo & create a feature branch.
2. Add your solution inside the correct folder.
3. Include a short top‑comment with problem link, approach, and complexity.
4. Add a minimal test or example I/O in `tests/`.
5. Open a PR with a clear title.

---

## 🧾 .gitignore (suggested)

```
# build outputs
build/
*.o
*.out
*.exe

# IDE
.vscode/
.idea/

# OS
.DS_Store
Thumbs.db
```

---

## 📜 License

This project is licensed under the **MIT License**. See `LICENSE` for details.

---

## 🌟 Roadmap

* [ ] Add base CMake targets per topic
* [ ] Add unit tests for key patterns
* [ ] Add CI (GitHub Actions) to build on push
* [ ] Add README badges and progress tracker

---

## 🧭 Quick Start (copy‑paste)

```bash
# 1) Make folders
mkdir -p src/{arrays,strings,linked_list,stack_queue,trees,graphs,greedy,dp,math,misc} include templates tests

# 2) Create your first solution from the template
cp templates/solution_template.cpp src/arrays/two_sum.cpp

# 3) Build & run
g++ -std=c++17 -O2 src/arrays/two_sum.cpp -o two_sum && ./two_sum
```

Happy coding! 🚀
