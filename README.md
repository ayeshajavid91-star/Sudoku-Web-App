<div align="center">

<!-- Animated banner -->
<img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&customColorList=6,11,20&height=220&section=header&text=Sudoku%20Solver%20%26%20Generator&fontSize=42&fontColor=ffffff&animation=twinkling&fontAlignY=35&desc=Recursive%20Backtracking%20%7C%20C%2B%2B%20%2B%20JavaScript&descAlignY=55&descSize=18" width="100%"/>

<!-- Typing animation -->
<a href="https://ayeshajavid91-star.github.io/Sudoku-Web-App/">
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&weight=600&size=24&duration=2500&pause=800&color=6C5CE7&center=true&vCenter=true&width=650&lines=%F0%9F%A7%A9+Solve+any+Sudoku+in+milliseconds;%F0%9F%8E%B2+Generate+Easy+%2F+Medium+%2F+Hard+puzzles;%E2%9A%A1+Powered+by+Recursive+Backtracking;%F0%9F%8C%90+Play+instantly+on+GitHub+Pages" alt="Typing SVG" />
</a>

<br/>

<!-- Badges -->
<p>
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" />
  <img src="https://img.shields.io/badge/JavaScript-F7DF1E?style=for-the-badge&logo=javascript&logoColor=black" />
  <img src="https://img.shields.io/badge/HTML5-E34F26?style=for-the-badge&logo=html5&logoColor=white" />
  <img src="https://img.shields.io/badge/CSS3-1572B6?style=for-the-badge&logo=css3&logoColor=white" />
  <img src="https://img.shields.io/badge/GitHub_Pages-222222?style=for-the-badge&logo=github&logoColor=white" />
</p>

<p>
  <img alt="Repo Size" src="https://img.shields.io/github/repo-size/ayeshajavid91-star/Sudoku-Web-App?style=flat-square&color=6C5CE7" />
  <img alt="Last Commit" src="https://img.shields.io/github/last-commit/ayeshajavid91-star/Sudoku-Web-App?style=flat-square&color=00b894" />
  <img alt="Issues" src="https://img.shields.io/github/issues/ayeshajavid91-star/Sudoku-Web-App?style=flat-square&color=e17055" />
  <img alt="Stars" src="https://img.shields.io/github/stars/ayeshajavid91-star/Sudoku-Web-App?style=flat-square&color=fdcb6e" />
  <img alt="License" src="https://img.shields.io/badge/License-All%20Rights%20Reserved-red?style=flat-square" />
</p>

<h3>🧩 A recursive-backtracking Sudoku engine — playable in your browser, runnable in your terminal.</h3>

<a href="https://ayeshajavid91-star.github.io/Sudoku-Web-App/">
  <img src="https://img.shields.io/badge/▶%20PLAY%20LIVE%20DEMO-6C5CE7?style=for-the-badge&logoColor=white" />
</a>

</div>

<br/>

<img src="https://user-images.githubusercontent.com/74038190/212284100-561aa473-3905-4a80-b561-0d28506553ee.gif" width="100%">

---

## 📚 Table of Contents

| # | Section |
|---|---------|
| 1 | [✨ Overview](#-overview) |
| 2 | [🎬 Preview](#-preview) |
| 3 | [🚀 Features](#-features) |
| 4 | [🧠 How the Algorithm Works](#-how-the-algorithm-works) |
| 5 | [🏗️ Architecture](#️-architecture) |
| 6 | [🛠️ Tech Stack](#️-tech-stack) |
| 7 | [⚙️ Installation & Usage](#️-installation--usage) |
| 8 | [📂 Project Structure](#-project-structure) |
| 9 | [🗺️ Roadmap](#️-roadmap) |
| 10 | [🤝 Contributing](#-contributing) |
| 11 | [👩‍💻 Author](#-author) |
| 12 | [📄 License](#-license) |

---

## ✨ Overview

This project began as a **C++ console-based Sudoku solver and generator**, then evolved into a fully playable, interactive **web application** — no compiler, no setup, just open a browser.

Both versions share the exact same core logic:

> 🔁 **Recursive backtracking** to solve puzzles
> 🎲 **Constrained shuffling** to generate valid, uniquely-solvable puzzles at multiple difficulty levels

<div align="center">

```mermaid
flowchart LR
    A([🎲 Generate Full Grid]) --> B[🔀 Shuffle Rows / Cols / Bands]
    B --> C{Difficulty Level?}
    C -->|Easy| D[Remove ~30 cells]
    C -->|Medium| E[Remove ~45 cells]
    C -->|Hard| F[Remove ~55 cells]
    D --> G([🧩 Playable Puzzle])
    E --> G
    F --> G
    G --> H{User Solves?}
    H -->|Backtracking Solver| I([✅ Solution Verified])
    H -->|Stuck| J([💡 Hint System])
    J --> H
```

</div>

---

## 🎬 Preview

<div align="center">

| 🖥️ Desktop View | 📱 Mobile View |
|:---:|:---:|
| <img src="https://user-images.githubusercontent.com/74038190/216122041-518ac897-8d92-4c6b-9b3f-ca01dcaf38ee.png" width="380"/> | <img src="https://user-images.githubusercontent.com/74038190/216122041-518ac897-8d92-4c6b-9b3f-ca01dcaf38ee.png" width="180"/> |

*(Replace these placeholder images with real screenshots or a screen-recorded GIF of your app in `/assets`)*

</div>

---

## 🚀 Features

<table>
<tr>
<td width="50%" valign="top">

### 🌐 Web Version — `JavaScript / HTML / CSS`

- 🧩 Interactive 9×9 Sudoku grid, manual input
- ⚡ **Instant Solve** via recursive backtracking
- 🎲 **Generate** puzzles — Easy / Medium / Hard
- 👁️ **Reveal Solution** & **Clear Grid**
- 🚨 Real-time invalid-move detection (red highlight)
- ⌨️ Keyboard arrow-key grid navigation
- 💡 **Hint system** for selected / next empty cell
- 🏆 **Win detection** with success banner
- ⏱️ Live **Timer** & **Move Counter**
- ↩️ **Undo** last move
- ✏️ **Notes / Pencil marks** per cell
- 📱 **Mobile-friendly** number pad
- 🔒 Locked given (clue) cells

</td>
<td width="50%" valign="top">

### 💻 C++ Console Version

- 🗂️ Sudoku grid as 2D array
- 🔁 Recursive backtracking solver
- 🎯 Adjustable-difficulty generator
- 🖤 Clean, structured console UI
- 🧮 Constraint validation (row / column / box)
- 📟 Lightweight — zero dependencies

</td>
</tr>
</table>

---

## 🧠 How the Algorithm Works

<details>
<summary><b>🔍 Click to expand — Backtracking Solver walkthrough</b></summary>

<br/>

1. Scan the grid for the next **empty cell**.
2. Try digits **1 → 9** in that cell.
3. For each digit, check row, column, and 3×3 box constraints.
4. If valid → place it and **recurse** into the next empty cell.
5. If no digit works → **backtrack**, clear the cell, and try the next candidate in the previous cell.
6. Repeat until the grid is full → ✅ solved.

```cpp
bool solve(int grid[9][9]) {
    int row, col;
    if (!findEmptyCell(grid, row, col))
        return true; // 🎉 solved

    for (int num = 1; num <= 9; num++) {
        if (isValid(grid, row, col, num)) {
            grid[row][col] = num;

            if (solve(grid))
                return true;

            grid[row][col] = 0; // 🔙 backtrack
        }
    }
    return false; // trigger backtracking
}
```

</details>

<details>
<summary><b>🎲 Click to expand — Puzzle Generator logic</b></summary>

<br/>

1. Generate a **fully solved**, randomly shuffled valid Sudoku grid.
2. Randomly remove numbers while checking the puzzle still has a **unique solution**.
3. Stop removing once the target **difficulty** cell-count is reached.

| Difficulty | Clues Remaining | Empty Cells |
|:---:|:---:|:---:|
| 🟢 Easy | ~45–50 | ~31–36 |
| 🟡 Medium | ~35–40 | ~41–46 |
| 🔴 Hard | ~25–30 | ~51–56 |

</details>

---

## 🏗️ Architecture

<div align="center">

```mermaid
graph TD
    subgraph "🌐 Web App"
        A1[index.html] --> A2[Grid Renderer]
        A2 --> A3[Backtracking Engine - JS]
        A3 --> A4[Generator Module]
        A4 --> A5[UI Layer: Timer / Hints / Notes]
    end

    subgraph "💻 Console App"
        B1[sudoku.cpp] --> B2[2D Array Grid]
        B2 --> B3[Backtracking Engine - C++]
        B3 --> B4[Generator Function]
        B4 --> B5[Console I/O]
    end

    A3 -.shared logic.- B3
    A4 -.shared logic.- B4
```

</div>

---

## 🛠️ Tech Stack

<div align="center">

<img src="https://skillicons.dev/icons?i=cpp,js,html,css,git,github" />

</div>

<div align="center">

| Layer | Technology |
|:---|:---|
| 🎮 Core Logic | Recursive Backtracking Algorithm |
| 💻 Console App | C++ |
| 🌐 Web App | HTML5, CSS3, Vanilla JavaScript |
| 🚀 Hosting | GitHub Pages |
| 🎨 UI/UX | Custom CSS animations, responsive grid |

</div>

---

## ⚙️ Installation & Usage

### ▶️ Web Version

```bash
git clone https://github.com/ayeshajavid91-star/Sudoku-Web-App.git
cd Sudoku-Web-App
```

Then simply open `index.html` in your browser — **no build step required**.

> 💡 Or skip setup entirely and [**play the live demo →**](https://ayeshajavid91-star.github.io/Sudoku-Web-App/)

### ▶️ C++ Console Version

```bash
g++ -o sudoku sudoku.cpp
./sudoku
```

> Replace `sudoku.cpp` with the actual filename of the C++ source file in this repository.

---

## 📂 Project Structure

```
Sudoku-Web-App/
│
├── 📄 index.html          # Web version (playable on GitHub Pages)
├── 🎨 style.css            # Styling & animations (if separated)
├── ⚙️ script.js            # Solver / generator logic (if separated)
├── 💻 sudoku.cpp           # C++ console version
└── 📘 README.md            # You are here
```

---

## 🗺️ Roadmap

- [x] Recursive backtracking solver (C++ & JS)
- [x] Puzzle generator with difficulty levels
- [x] Hints, notes, undo, timer
- [ ] Dark mode 🌙
- [ ] Daily puzzle challenge 📅
- [ ] Multiplayer race mode 🏁
- [ ] Save/load puzzle progress 💾

---

## 🤝 Contributing

This is a **closed-source, all-rights-reserved project** (see [License](#-license)). Contributions, forks, and redistribution are not accepted at this time without explicit written permission from the author.

If you'd like to collaborate, please reach out via the contact below.

---

## 👩‍💻 Author

<div align="center">

**Developed by Ayesha Javid**

<a href="mailto:ayeshajavid91@gmail.com">
  <img src="https://img.shields.io/badge/Email-D14836?style=for-the-badge&logo=gmail&logoColor=white" />
</a>
<a href="https://github.com/ayeshajavid91-star">
  <img src="https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white" />
</a>

</div>

---

## 📄 License

**All Rights Reserved.**

This project and its source code are the intellectual property of the author. No part of this repository — including the code, design, or documentation — may be copied, modified, distributed, used, or reproduced in any form without the explicit written permission of the author.

© 2026 Ayesha Javid. Unauthorized use is strictly prohibited.

For permissions or licensing inquiries, contact: **ayeshajavid91@gmail.com**

---

<div align="center">

<img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&customColorList=6,11,20&height=120&section=footer" width="100%"/>

⭐ *If you like this project, consider giving it a star!* ⭐

</div>
