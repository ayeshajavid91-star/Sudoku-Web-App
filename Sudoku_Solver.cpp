/*
    InternGrow C++ Programming Track
    TASK 3: Intelligent Sudoku Solver & Generator (WITH UPGRADE FEATURE)
    -------------------------------------------------------------------------
    Basic Feature:
        - Sudoku grid ko 2D array mein represent karta hai
        - Recursive Backtracking algorithm se khali cells solve karta hai

    Upgrade Feature:
        - Puzzle Generator Engine: Naya unique unsolved Sudoku puzzle
          generate karta hai, jismein Easy / Medium / Hard difficulty
          choose kar sakte hain.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 9;

// ---------- Grid ko screen par print karna ----------
void printGrid(int grid[SIZE][SIZE]) {
    for (int row = 0; row < SIZE; row++) {
        if (row % 3 == 0 && row != 0)
            cout << "------+-------+------\n";

        for (int col = 0; col < SIZE; col++) {
            if (col % 3 == 0 && col != 0)
                cout << "| ";

            if (grid[row][col] == 0)
                cout << ". ";
            else
                cout << grid[row][col] << " ";
        }
        cout << "\n";
    }
}

// ---------- Check karna ke number us position par valid hai ya nahi ----------
bool isValid(int grid[SIZE][SIZE], int row, int col, int num) {
    // Row aur column check karna
    for (int i = 0; i < SIZE; i++) {
        if (grid[row][i] == num || grid[i][col] == num)
            return false;
    }

    // 3x3 box check karna
    int boxRow = row - row % 3;
    int boxCol = col - col % 3;
    for (int i = boxRow; i < boxRow + 3; i++) {
        for (int j = boxCol; j < boxCol + 3; j++) {
            if (grid[i][j] == num)
                return false;
        }
    }

    return true;
}

// ---------- Recursive Backtracking Solver ----------
bool solveSudoku(int grid[SIZE][SIZE]) {
    int row = -1, col = -1;
    bool isEmpty = false;

    // Pehli khali cell dhoondo
    for (int i = 0; i < SIZE && !isEmpty; i++) {
        for (int j = 0; j < SIZE && !isEmpty; j++) {
            if (grid[i][j] == 0) {
                row = i;
                col = j;
                isEmpty = true;
            }
        }
    }

    // Agar koi khali cell nahi mili, matlab Sudoku solve ho gaya
    if (!isEmpty)
        return true;

    // 1 se 9 tak har number try karna
    for (int num = 1; num <= 9; num++) {
        if (isValid(grid, row, col, num)) {
            grid[row][col] = num;

            if (solveSudoku(grid))
                return true;

            // Backtrack: agar aage solution na mila to number hata do
            grid[row][col] = 0;
        }
    }

    return false; // Koi number fit nahi hua -> backtrack karo
}

// ---------- User se manually Sudoku input lena ----------
void inputGrid(int grid[SIZE][SIZE]) {
    cout << "\nSudoku grid enter karo (khali cell ke liye 0 likho):\n";
    cout << "Har row mein 9 numbers space se separate kar ke likho.\n\n";

    for (int i = 0; i < SIZE; i++) {
        cout << "Row " << (i + 1) << ": ";
        for (int j = 0; j < SIZE; j++) {
            cin >> grid[i][j];
        }
    }
}

// ===================== UPGRADE FEATURE ===================== //

// ---------- Poori solved grid randomly generate karna ----------
bool fillGrid(int grid[SIZE][SIZE]) {
    int row = -1, col = -1;
    bool isEmpty = false;

    for (int i = 0; i < SIZE && !isEmpty; i++) {
        for (int j = 0; j < SIZE && !isEmpty; j++) {
            if (grid[i][j] == 0) {
                row = i;
                col = j;
                isEmpty = true;
            }
        }
    }

    if (!isEmpty)
        return true; // Grid poori fill ho gayi

    // Numbers 1-9 ko random order mein try karna (taake har baar naya puzzle bane)
    int numbers[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 8; i > 0; i--) {
        int j = rand() % (i + 1);
        swap(numbers[i], numbers[j]);
    }

    for (int idx = 0; idx < 9; idx++) {
        int num = numbers[idx];
        if (isValid(grid, row, col, num)) {
            grid[row][col] = num;

            if (fillGrid(grid))
                return true;

            grid[row][col] = 0;
        }
    }

    return false;
}

// ---------- Difficulty ke hisab se cells khali karna ----------
void removeCells(int grid[SIZE][SIZE], int count) {
    while (count > 0) {
        int row = rand() % SIZE;
        int col = rand() % SIZE;

        if (grid[row][col] != 0) {
            grid[row][col] = 0;
            count--;
        }
    }
}

// ---------- Puzzle generate karna (difficulty select karke) ----------
void generatePuzzle() {
    int grid[SIZE][SIZE] = {0};

    // Step 1: Poori solved valid grid banao
    fillGrid(grid);

    // Solution ek copy mein save kar lete hain (baad mein dikhane ke liye)
    int solution[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            solution[i][j] = grid[i][j];

    // Step 2: Difficulty choose karwana
    int choice;
    cout << "\nDifficulty level choose karo:\n";
    cout << "1. Easy\n";
    cout << "2. Medium\n";
    cout << "3. Hard\n";
    cout << "Choice: ";
    cin >> choice;

    int cellsToRemove;
    switch (choice) {
        case 1: cellsToRemove = 32; break; // Easy
        case 2: cellsToRemove = 42; break; // Medium
        case 3: cellsToRemove = 52; break; // Hard
        default:
            cout << "Invalid choice! Medium default set kiya gaya.\n";
            cellsToRemove = 42;
    }

    // Step 3: Cells khali karna taake puzzle bane
    removeCells(grid, cellsToRemove);

    cout << "\n===== Generated Sudoku Puzzle =====\n";
    printGrid(grid);

    // User ko solution dekhne ka option dena
    char seeSolution;
    cout << "\nKya aap solution dekhna chahte hain? (y/n): ";
    cin >> seeSolution;

    if (tolower(seeSolution) == 'y') {
        cout << "\n===== Solution =====\n";
        printGrid(solution);
    }
}

// ===================== MAIN MENU ===================== //
int main() {
    srand(time(0)); // Random seed set karna (taake har run alag ho)

    int choice;

    do {
        cout << "\n========== Intelligent Sudoku Solver & Generator ==========\n";
        cout << "1. Sudoku Solve Karo (Manual Input)\n";
        cout << "2. Naya Puzzle Generate Karo\n";
        cout << "3. Exit\n";
        cout << "Apna choice enter karo: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input! Sirf number (1-3) enter karein.\n";
            continue;
        }

        if (choice == 1) {
            int grid[SIZE][SIZE];
            inputGrid(grid);

            cout << "\n===== Aapka Diya Gaya Sudoku =====\n";
            printGrid(grid);

            if (solveSudoku(grid)) {
                cout << "\n===== Solved Sudoku =====\n";
                printGrid(grid);
            } else {
                cout << "\n❌ Ye Sudoku solve nahi ho sakta (invalid puzzle)!\n";
            }
        }
        else if (choice == 2) {
            generatePuzzle();
        }
        else if (choice == 3) {
            cout << "Program band ho raha hai. Shukriya!\n";
        }
        else {
            cout << "Invalid choice! Dobara try karein.\n";
        }

    } while (choice != 3);

    return 0;
}
