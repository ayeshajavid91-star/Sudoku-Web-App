# 🧩 Sudoku Solver & Generator

An intelligent Sudoku Solver and Puzzle Generator featuring both a robust **C++ console application** and a fully interactive **browser-based web app** powered by the same recursive backtracking algorithm.

**🔗 Live Demo:** [https://ayeshajavid91-star.github.io/Sudoku-Web-App/](https://ayeshajavid91-star.github.io/Sudoku-Web-App/)

---

## 📖 Overview

This project started as a C++ console-based Sudoku solver and generator, and was later extended into a fully playable, interactive **web version** so it can be experienced directly in the browser via GitHub Pages — no compiler required.

This project reflects hands-on practice in C++ programming, algorithm design, and web development.

Both versions share the same core logic: a recursive backtracking algorithm for solving puzzles and a constrained shuffling technique for generating valid, unique Sudoku puzzles at different difficulty levels.

---

## ✨ Features

### 🌐 Web Version (JavaScript / HTML / CSS)
- Interactive 9×9 Sudoku grid with manual input
- **Solve** puzzles instantly using recursive backtracking
- **Generate** new puzzles with selectable difficulty — Easy / Medium / Hard
- **Reveal Solution** and **Clear Grid** options
- Real-time invalid-number detection with red highlighting on conflicts
- Keyboard arrow-key navigation across the grid
- **Hint system** — reveals the correct number for the selected (or next empty) cell
- **Win detection** — success banner when the puzzle is completed correctly
- **Timer** and **move counter** to track solving progress
- **Undo** — revert the last move
- **Notes / Pencil marks** — jot down multiple candidate numbers per cell
- **Mobile-friendly number pad** for touch input
- Given (clue) cells are locked and cannot be overwritten, following real Sudoku rules

### 💻 C++ Console Version
- Sudoku grid represented as a 2D array
- Recursive backtracking algorithm for solving any valid puzzle
- Puzzle generation logic with adjustable difficulty
- Clean, structured console-based interface

---

## 🚀 Live Demo (Web Version)

The web version is deployed via **GitHub Pages** and works entirely in the browser:

👉 **[Play it here](https://ayeshajavid91-star.github.io/Sudoku-Web-App/)**

Since GitHub Pages only hosts static files (HTML/CSS/JS), the JavaScript version was built to bring the same backtracking logic from the C++ program into a format that runs live in any browser.

---

## 🛠️ How to Run

### ▶️ Web Version
No installation needed — just open the live demo link above, or run it locally:

```bash
git clone https://github.com/ayeshajavid91-star/Sudoku-Web-App.git
cd Sudoku-Web-App
```

Then simply open `index.html` in your browser.

### ▶️ C++ Console Version

```bash
g++ -o sudoku sudoku.cpp
./sudoku
```

> Replace `sudoku.cpp` with the actual filename of the C++ source file in this repository.

---

## 🧠 Algorithm

Both versions rely on the same core approach:

1. **Backtracking Solver** — recursively tries valid numbers (1–9) in empty cells, backtracking whenever a placement violates Sudoku rules (row, column, or 3×3 box constraints).
2. **Puzzle Generator** — starts from a fully solved, randomly shuffled valid grid, then removes numbers according to the selected difficulty level while preserving a solvable, unique puzzle.

---

## 📂 Project Structure

```
Sudoku-Web-App/
├── index.html          # Web version (playable on GitHub Pages)
├── sudoku.cpp           # C++ console version
└── README.md
```

---

## 🏷️ Suggested GitHub Topics

Add these under **Repo → About → Topics** to improve discoverability:

```
sudoku
sudoku-solver
sudoku-generator
cpp
javascript
html-css-javascript
backtracking-algorithm
recursion
github-pages
web-app
puzzle-game
programming-project
```

---

## 👩‍💻 Author

Developed by **Ayesha Javid**.

---

## 📄 License

**All Rights Reserved.**

This project and its source code are the intellectual property of the author. No part of this repository — including the code, design, or documentation — may be copied, modified, distributed, used, or reproduced in any form without the explicit written permission of the author.

© 2026 Ayesha Javid. Unauthorized use is strictly prohibited.

For permissions or licensing inquiries, contact: **ayeshajavid91@gmail.com**
