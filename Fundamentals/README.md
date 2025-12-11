# C++ Arrays Fundamentals

This folder contains C++ source files and related resources for learning and practicing fundamental array operations. The code examples cover basic array manipulations, linear search, and finding the largest and second largest elements in an array.

## Folder Structure

```
.
├── 1. Linear Search
├── 1. Linear Search.cpp
├── 2. Largest element in an array
├── 2. Largest element in an array.cpp
├── 3. Second Largest in an array.cpp
├── basics
├── basics.cpp
├── basics2
├── input.txt
├── output.txt
└── .vscode/
    ├── settings.json
    └── tasks.json
```

### File Descriptions

- [`1. Linear Search.cpp`](1.%20Linear%20Search.cpp):  
  Implements a linear search algorithm to find the index of a target element in an array.  
  - Usage: Reads `n` and `target` from input, then an array of `n` integers, and prints the index of `target` or `-1` if not found.

- [`2. Largest element in an array.cpp`](2.%20Largest%20element%20in%20an%20array.cpp):  
  Finds the second largest element in an array.  
  - Usage: Reads `n` and an array of `n` integers, then prints the second largest element or `-1` if it does not exist.

- [`3. Second Largest in an array.cpp`](3.%20Second%20Largest%20in%20an%20array.cpp):  
  Identical logic to the previous file, also finds the second largest element in an array.

- [`basics.cpp`](basics.cpp):  
  Contains a function to find the largest element in an array.  
  - **Note:** The implementation has a bug in the logic for updating `secondLargest`.

- `basics`, `basics2`, `1. Linear Search`, `2. Largest element in an array`:  
  These are compiled binary files generated from the corresponding `.cpp` files.

- [`input.txt`](input.txt):  
  Sample input file for testing the programs.  
  ```
  1
  10
  ```
  Represents an array of size 1 with the element 10.

- [`output.txt`](output.txt):  
  Output file generated after running a program with `input.txt` as input.

- [`.vscode/settings.json`](.vscode/settings.json):  
  VS Code settings for file associations.

- [`.vscode/tasks.json`](.vscode/tasks.json):  
  VS Code tasks for compiling and running the C++ files.

## How to Compile and Run

You can use the provided VS Code tasks or compile manually:

### Using VS Code Tasks

- **Compile:**  
  Select the `compile` task to compile the current `.cpp` file.

- **Compile and Run:**  
  Select the `compile and run` task to compile the current `.cpp` file and run it with `input.txt` as input, saving output to `output.txt`.

### Manual Compilation

```sh
g++ -std=c++17 -o output_exe_name source_file.cpp
./output_exe_name < input.txt > output.txt
```

## Notes

- The code uses C++17 features and the STL (`vector`, etc.).
- The `.cpp` files are intended for educational purposes and may contain intentional or unintentional bugs for learning.
- The compiled binaries (`basics`, `basics2`, etc.) can be ignored or cleaned as needed.


- More to come.
## License

This repository is for education use only.