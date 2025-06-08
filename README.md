# Leetocode-513.-Find-Bottom-Left-Tree-Value
# 🌳 Find Bottom Left Tree Value

This project finds the **leftmost value in the last row** of a binary tree.  
It does so using a **depth-first search (DFS)** traversal.

---

## 🧠 Approach

We perform a **pre-order DFS traversal**, prioritizing the left child before the right.  
While traversing, we maintain two variables:
- `ans`: holds the leftmost value of the deepest level visited so far
- `prelevel`: tracks the deepest level visited

Whenever we reach a node at a deeper level than previously seen, we update `ans`.

---

### ✅ Why DFS?

DFS allows us to **capture the leftmost value first** when moving down to a deeper level before any right siblings are explored.

---

## ⏱ Time and Space Complexity

| Metric              | Value               |
|---------------------|---------------------|
| 🕒 Time Complexity   | O(N) (visit each node once) |
| 💾 Space Complexity  | O(H) (where H = height of tree, due to recursion stack) |

---

## ✍️ Author

**Ridham Garg**  
👨‍💻 Passionate Computer Engineer | Problem Solver | C++ Enthusiast  
🎓 Thapar University, Patiala  
📧 Let’s learn, build, and optimize together!

---

💡 Tip: This DFS-based approach is efficient, but a BFS level-order traversal can also be used to solve this problem. Try both and compare!
