# InternGrow_SudokuSolver

## 📌 Project Overview
**Intelligent Sudoku Solver & Generator** is a C++ console application developed as part of the **InternGrow C++ Programming Track (Module 1 – Task 3)**. It represents a Sudoku grid using a 2D array and applies a recursive backtracking algorithm to solve any valid puzzle. It also includes a puzzle generator engine that creates new, unique Sudoku puzzles at different difficulty levels.

## 🚀 Features

### Core Features
- Represents the Sudoku board as a 9x9 2D array
- Accepts manual input of an unsolved puzzle (0 for empty cells)
- Solves the puzzle using a **recursive backtracking algorithm**
- Validates every number placement against row, column, and 3x3 box rules
- Clean, formatted grid display in the console

### 🧩 Upgrade Feature — Puzzle Generator Engine
- Generates a complete, valid, randomly filled Sudoku solution using backtracking with randomized number ordering
- Removes cells from the solved grid to create a playable puzzle
- Supports three **difficulty levels**:
  - Easy (32 cells removed)
  - Medium (42 cells removed)
  - Hard (52 cells removed)
- Option to reveal the full solution after generating a puzzle
- Produces a different, unique puzzle every time the program runs

## 🛠️ Tech Stack
- **Language:** C++
- **Concepts Used:** 2D Arrays, Recursion, Backtracking, Functions, Randomization (rand/srand)

## ⚙️ How It Works
1. **Solving:** The algorithm finds the first empty cell, tries numbers 1–9, and checks validity against the row, column, and 3x3 box. If a number leads to a dead end later, it backtracks and tries the next number.
2. **Generating:** The same backtracking logic is used to fill an empty grid completely (with randomized number order for uniqueness), then a set number of cells are randomly cleared based on the chosen difficulty.

## ▶️ How to Run
1. Compile the program:
g++ Sudoku_Solver.cpp -o Sudoku_Solver

2. Run the executable:
./Sudoku_Solver

3. Choose an option from the menu:
1. Solve a Sudoku (manual input)
2. Generate a new puzzle (choose difficulty)
3. Exit

## 📸 Sample Output
===== Generated Sudoku Puzzle =====
6 . 2 | . 7 . | 5 4 1
. 8 4 | 3 . 1 | . . .
. . 5 | . 2 . | . 8 3

------+-------+------
8 . 3 | 5 6 4 | . . 9
5 . 6 | 2 9 . | 8 . .
2 4 9 | 1 8 7 | 3 5 6

------+-------+------
9 . . | 6 . 2 | 4 3 7
. . . | . 3 5 | . 2 8
3 . 1 | . 4 . | 9 6 .

## 🎓 About InternGrow
This project was developed as part of the **InternGrow C++ Programming Track**, a project-based internship program focused on providing hands-on programming experience.

## 👤 Author
Developed by [Your Name] as part of InternGrow Internship — Module 1.
