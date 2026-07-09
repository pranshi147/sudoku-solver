# Sudoku Solver in C++

A modular Sudoku solver written in C++ that validates a Sudoku puzzle and attempts to solve it using logical deduction based on Sudoku rules.

## Features

- Reads a Sudoku puzzle from a text file.
- Validates the puzzle before solving.
- Checks:
  - Duplicate numbers in rows.
  - Duplicate numbers in columns.
  - Duplicate numbers in each 3×3 sub-grid.
- Solves the puzzle using logical elimination.
- Modular, object-oriented implementation.
- Uses separate classes and helper functions for validation and solving.

---

## Project Structure

```
Sudoku-Solver/
│
├── src/
│   ├── main.cpp
│   ├── sudoku.cpp
│   ├── sudoku.h
│   ├── validation.cpp
│   ├── validation.h
│   ├── sudokusolver.cpp
│   ├── sudokusolver.h
│   ├── boxsolver.cpp
│   ├── boxsolver.h
│   ├── rowsolver.cpp
│   ├── rowsolver.h
│   ├── columnsolver.cpp
│   ├── columnsolver.h
│   ├── display.cpp
│   └── display.h
│
├── source.txt
├── CMakeLists.txt
├── build/          # Generated after building (not tracked in Git)
├── .gitignore
├── LICENSE
└── README.md
```

---

## How It Works

### 1. Reading the Puzzle

The `Sudoku` class reads the puzzle from `source.txt` and stores it in a 9×9 character array.

Empty cells are represented by:

```
X
```

Example:

```
53XX7XXXX
6XX195XXX
X98XXXX6X
8XXX6XXX3
4XX8X3XX1
7XXX2XXX6
X6XXXX28X
XXX419XX5
XXXX8XX79
```

---

### 2. Validation

Before solving, the program validates the Sudoku using the `Validator` class.

The validator checks:

- Every row contains unique digits.
- Every column contains unique digits.
- Every 3×3 box contains unique digits.

If any rule is violated, the solver terminates.

---

### 3. Solving

The solver attempts to fill empty cells using Sudoku constraints.

For every digit (1–9):

- Each 3×3 box is examined.
- Every empty cell (`X`) inside that box is checked.
- The candidate is accepted only if:
  - the digit does not already exist in its row.
  - the digit does not already exist in its column.

If exactly one valid position exists inside a box, the digit is placed there.

This process repeats until either:

- the puzzle is solved, or
- no further progress can be made.

---

## Object-Oriented Design

### Sudoku

Responsible for:

- Reading the puzzle.
- Storing the board.
- Initiating validation.

---

### Validator

Responsible for:

- Row validation
- Column validation
- Box validation
- Overall Sudoku validation

---

### BoxSolver

Responsible for solving each of the nine 3×3 boxes individually.

Each function (`Box1()` ... `Box9()`) searches for a valid position for a given digit.

---

### RowSolver

Checks whether a number can legally be placed in a given row.

---

### ColumnSolver

Checks whether a number can legally be placed in a given column.

---

### Display

Prints the Sudoku board after solving.

---

## Input Format

The input file must contain exactly 9 lines.

Each line must contain exactly 9 characters.

Example:

```
53XX7XXXX
6XX195XXX
X98XXXX6X
8XXX6XXX3
4XX8X3XX1
7XXX2XXX6
X6XXXX28X
XXX419XX5
XXXX8XX79
```

Digits:

```
1–9
```

Empty cells:

```
X
```

---

## Build

### Using CMake

```bash
mkdir build
cd build
cmake ..
cmake --build .
```

Run:

```bash
./SudokuSolver
```

Windows:

```bash
SudokuSolver.exe
```

---

## Compile using g++

```bash
g++ *.cpp -o SudokuSolver
```

Run:

```bash
./SudokuSolver
```

---

## Example Output

```
Sudoku is completed

5 3 4 6 7 8 9 1 2
6 7 2 1 9 5 3 4 8
1 9 8 3 4 2 5 6 7
8 5 9 7 6 1 4 2 3
4 2 6 8 5 3 7 9 1
7 1 3 9 2 4 8 5 6
9 6 1 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9
```

---

## Concepts Used

- Object-Oriented Programming (OOP)
- Classes and Objects
- Constructors
- Header Files
- Separate Compilation
- Forward Declarations
- File Handling
- Arrays
- Pointers
- Modular Programming
- Sudoku Constraint Validation

---

## Future Improvements

- Backtracking algorithm for solving every valid Sudoku.
- Candidate (pencil mark) generation.
- Multiple solving strategies.
- Improved display formatting.
- Better input validation.
- Eliminate repetitive `Box1()`–`Box9()` functions with a generalized implementation.
- Remove the use of `goto`.
- Unit testing.
- Command-line support for custom input files.

---

## Author

**Pranshi Mittal**

B.Tech CSE Student  
Indira Gandhi Delhi Technical University for Women (IGDTUW)

GitHub: https://github.com/pranshi147

LinkedIn: www.linkedin.com/in/pranshimittal

