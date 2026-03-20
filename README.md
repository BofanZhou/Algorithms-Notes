<div align="center">

# 🧠 算法学习笔记 | Algorithms Notes

[![LeetCode](https://img.shields.io/badge/LeetCode-300+-FFA116?style=for-the-badge&logo=leetcode&logoColor=white)](https://leetcode.cn/u/your-username/)
[![Python](https://img.shields.io/badge/Python-3.10+-3776AB?style=for-the-badge&logo=python&logoColor=white)](https://www.python.org/)
[![Go](https://img.shields.io/badge/Go-1.21+-00ADD8?style=for-the-badge&logo=go&logoColor=white)](https://golang.org/)
[![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)](LICENSE)

**系统化的算法学习笔记，涵盖数据结构与算法核心知识点，配合 LeetCode 题解**

[📊 刷题进度](#-刷题进度--progress) • [📚 知识图谱](#-知识图谱--knowledge-map) • [🔥 高频题目](#-高频题目--hot-questions)

</div>

---

## 📊 刷题进度 | Progress

<div align="center">

| 难度 | 数量 | 进度 |
|------|------|------|
| 🟢 Easy | 0 / 150 | ![%](https://progress-bar.dev/80?color=green) |
| 🟡 Medium | 0 / 200 | ![%](https://progress-bar.dev/75?color=yellow) |
| 🔴 Hard | 0 / 100 | ![%](https://progress-bar.dev/45?color=red) |
| **总计** | **0 / 450** | ![%](https://progress-bar.dev/70?color=blue) |

</div>

---

## 📚 知识图谱 | Knowledge Map

```
算法与数据结构
│
├── 📁 基础数据结构
│   ├── 📄 数组与字符串
│   ├── 📄 链表
│   ├── 📄 栈与队列
│   ├── 📄 哈希表
│   ├── 📄 树与二叉树
│   ├── 📄 堆与优先队列
│   └── 📄 图的基础
│
├── 📁 基础算法
│   ├── 📄 排序算法
│   ├── 📄 二分查找
│   ├── 📄 双指针
│   ├── 📄 滑动窗口
│   ├── 📄 递归与回溯
│   └── 📄 分治法
│
├── 📁 高级数据结构
│   ├── 📄 并查集 (Union-Find)
│   ├── 📄 字典树 (Trie)
│   ├── 📄 线段树
│   ├── 📄 树状数组 (Fenwick Tree)
│   ├── 📄 稀疏表 (Sparse Table)
│   └── 📄 平衡树
│
├── 📁 图论算法
│   ├── 📄 图的遍历 (BFS/DFS)
│   ├── 📄 最短路径 (Dijkstra/Floyd/Bellman-Ford)
│   ├── 📄 最小生成树 (Prim/Kruskal)
│   ├── 📄 拓扑排序
│   ├── 📄 强连通分量
│   └── 📄 网络流
│
├── 📁 动态规划
│   ├── 📄 DP 基础
│   ├── 📄 线性 DP
│   ├── 📄 区间 DP
│   ├── 📄 树形 DP
│   ├── 📄 状态压缩 DP
│   ├── 📄 数位 DP
│   └── 📄 概率 DP
│
└── 📁 其他专题
    ├── 📄 贪心算法
    ├── 📄 位运算
    ├── 📄 数学问题
    ├── 📄 字符串算法 (KMP/Manacher)
    └── 📄 设计问题
```

---

## 📂 目录结构 | Directory Structure

```
algorithms-notes/
├── 📂 docs/                     # 理论文档
│   ├── 📂 01-basics/            # 基础数据结构
│   │   ├── 📄 01-array.md
│   │   ├── 📄 02-linked-list.md
│   │   ├── 📄 03-stack-queue.md
│   │   ├── 📄 04-hash-table.md
│   │   ├── 📄 05-tree.md
│   │   └── 📄 06-heap.md
│   ├── 📂 02-algorithms/        # 基础算法
│   │   ├── 📄 01-sorting.md
│   │   ├── 📄 02-binary-search.md
│   │   ├── 📄 03-two-pointers.md
│   │   ├── 📄 04-sliding-window.md
│   │   ├── 📄 05-recursion.md
│   │   └── 📄 06-divide-conquer.md
│   ├── 📂 03-advanced-ds/       # 高级数据结构
│   │   ├── 📄 01-union-find.md
│   │   ├── 📄 02-trie.md
│   │   ├── 📄 03-segment-tree.md
│   │   └── 📄 04-fenwick-tree.md
│   ├── 📂 04-graph/             # 图论
│   │   ├── 📄 01-graph-basics.md
│   │   ├── 📄 02-bfs-dfs.md
│   │   ├── 📄 03-shortest-path.md
│   │   ├── 📄 04-mst.md
│   │   └── 📄 05-topological-sort.md
│   ├── 📂 05-dp/                # 动态规划
│   │   ├── 📄 01-dp-basics.md
│   │   ├── 📄 02-linear-dp.md
│   │   ├── 📄 03-interval-dp.md
│   │   ├── 📄 04-tree-dp.md
│   │   └── 📄 05-state-compression.md
│   └── 📂 06-topics/            # 其他专题
│       ├── 📄 01-greedy.md
│       ├── 📄 02-bitwise.md
│       ├── 📄 03-math.md
│       └── 📄 04-string-algo.md
│
├── 📂 solutions/                # 题解代码
│   ├── 📂 leetcode/             # LeetCode 题解
│   │   ├── 📂 easy/
│   │   ├── 📂 medium/
│   │   └── 📂 hard/
│   ├── 📂 acwing/               # AcWing 题解
│   └── 📂 codeforces/           # Codeforces 题解
│
├── 📂 templates/                # 代码模板
│   ├── 📄 template-python.py
│   ├── 📄 template-go.go
│   ├── 📄 template-cpp.cpp
│   └── 📄 template-java.java
│
├── 📂 utils/                    # 工具脚本
│   ├── 📄 generate-readme.py    # 自动生成 README
│   ├── 📄 problem-tracker.py    # 刷题进度追踪
│   └── 📄 code-stats.py         # 代码统计
│
├── 📂 contests/                 # 比赛记录
│   ├── 📂 weekly-contest/
│   └── 📂 biweekly-contest/
│
├── 📄 README.md                 # 本文件
├── 📄 PROGRESS.md               # 详细进度记录
├── 📄 ROADMAP.md                # 学习计划
└── 📄 LICENSE
```

---

## 🔥 高频题目 | Hot Questions

### 数组与字符串

| 题目 | 难度 | 标签 | 题解 |
|------|------|------|------|
| [1. 两数之和](https://leetcode.cn/problems/two-sum/) | 🟢 | 哈希表 | [Python](./solutions/leetcode/easy/0001-two-sum.py) |
| [15. 三数之和](https://leetcode.cn/problems/3sum/) | 🟡 | 双指针 | [Python](./solutions/leetcode/medium/0015-3sum.py) |
| [53. 最大子数组和](https://leetcode.cn/problems/maximum-subarray/) | 🟡 | DP | [Python](./solutions/leetcode/medium/0053-maximum-subarray.py) |
| [56. 合并区间](https://leetcode.cn/problems/merge-intervals/) | 🟡 | 排序 | [Python](./solutions/leetcode/medium/0056-merge-intervals.py) |

### 链表

| 题目 | 难度 | 标签 | 题解 |
|------|------|------|------|
| [21. 合并两个有序链表](https://leetcode.cn/problems/merge-two-sorted-lists/) | 🟢 | 递归 | [Python](./solutions/leetcode/easy/0021-merge-two-sorted-lists.py) |
| [206. 反转链表](https://leetcode.cn/problems/reverse-linked-list/) | 🟢 | 迭代 | [Python](./solutions/leetcode/easy/0206-reverse-linked-list.py) |
| [23. 合并K个升序链表](https://leetcode.cn/problems/merge-k-sorted-lists/) | 🔴 | 优先队列 | [Python](./solutions/leetcode/hard/0023-merge-k-sorted-lists.py) |

### 树与二叉树

| 题目 | 难度 | 标签 | 题解 |
|------|------|------|------|
| [104. 二叉树的最大深度](https://leetcode.cn/problems/maximum-depth-of-binary-tree/) | 🟢 | DFS | [Python](./solutions/leetcode/easy/0104-maximum-depth-of-binary-tree.py) |
| [102. 二叉树的层序遍历](https://leetcode.cn/problems/binary-tree-level-order-traversal/) | 🟡 | BFS | [Python](./solutions/leetcode/medium/0102-binary-tree-level-order-traversal.py) |
| [124. 二叉树中的最大路径和](https://leetcode.cn/problems/binary-tree-maximum-path-sum/) | 🔴 | DFS | [Python](./solutions/leetcode/hard/0124-binary-tree-maximum-path-sum.py) |

### 动态规划

| 题目 | 难度 | 标签 | 题解 |
|------|------|------|------|
| [70. 爬楼梯](https://leetcode.cn/problems/climbing-stairs/) | 🟢 | DP | [Python](./solutions/leetcode/easy/0070-climbing-stairs.py) |
| [300. 最长递增子序列](https://leetcode.cn/problems/longest-increasing-subsequence/) | 🟡 | DP + 二分 | [Python](./solutions/leetcode/medium/0300-longest-increasing-subsequence.py) |
| [72. 编辑距离](https://leetcode.cn/problems/edit-distance/) | 🔴 | DP | [Python](./solutions/leetcode/hard/0072-edit-distance.py) |

---

## 📝 学习路线 | Learning Path

### 第一阶段：基础夯实 (1-2 个月)

- [x] 数组、链表、栈、队列
- [x] 哈希表原理与应用
- [x] 树与二叉树遍历
- [x] 基础排序算法
- [x] 二分查找与变体

### 第二阶段：算法进阶 (2-3 个月)

- [x] 递归与回溯算法
- [x] 双指针与滑动窗口
- [x] BFS 与 DFS
- [x] 动态规划入门
- [x] 贪心算法

### 第三阶段：高级主题 (3-4 个月)

- [ ] 高级数据结构
- [ ] 图论算法
- [ ] 动态规划进阶
- [ ] 字符串算法
- [ ] 系统设计基础

---

## 🛠️ 工具脚本 | Tools

### 自动生成题解索引

```bash
python utils/generate-readme.py
```

### 刷题进度追踪

```bash
python utils/problem-tracker.py --update
```

### 代码统计

```bash
python utils/code-stats.py
```
---

## 📖 推荐资源 | Resources

### 书籍

- 《算法导论》(CLRS)
- 《剑指 Offer》
- 《编程珠玑》
- 《算法竞赛入门经典》

### 在线资源

- [LeetCode 中国](https://leetcode.cn/)
- [AcWing](https://www.acwing.com/)
- [代码随想录](https://programmercarl.com/)
- [labuladong 的算法小抄](https://labuladong.github.io/algo/)

---

## 🤝 参与贡献 | Contributing

欢迎提交 Issue 和 Pull Request：

1. 发现题目分类错误？请提交 Issue
2. 有更优解法？欢迎 PR
3. 补充题目解析？请遵循文档格式

---

## 📄 许可证 | License

[MIT License](LICENSE)

---

<div align="center">

**[⬆ 返回顶部](#-算法学习笔记--algorithms-notes)**

Keep Coding, Keep Learning! 💪

</div>
