# C++ Standalone Code Collection

This repository contains a collection of standalone C++ programs for quick reference, practice, and learning. Each file demonstrates a specific concept, algorithm, or feature of C++ in a self-contained manner.

## Contents
- **Basic Programs**: Hello World, input/output, variables, loops, conditionals
- **Functions & Recursion**: Function examples, recursion basics
- **OOP Concepts**: Classes, objects, inheritance, polymorphism
- **STL Usage**: Simple STL examples (vector, map, set, etc.)
- **Miscellaneous**: File handling, error handling, and more

## How to Use
- Browse the `.cpp` files for ready-to-run code samples.
- Each file is self-contained and can be compiled and run independently.
- Use these as templates or learning references for your own projects.

## Contribution
Feel free to add your own standalone C++ programs or suggest improvements!

---

Happy Coding! 🚀



# Important read carefully!!!
For C++ you can use this as the task.json to have a separate input and output console system and for visuals just make seperate input output text files and follow these steps after your 3 files are ready (input, output, main)
view-->editor layout-->split left.

For LINUX users only, for MAC and WINDOWS you can use GPT

{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "compile",
      "type": "shell",
      "command": "g++",
      "args": [
        "-std=c++17",
        "-o",
        "${fileBasenameNoExtension}",
        "${file}"
      ],
      "group": {
        "kind": "build",
        "isDefault": false
      },
      "options": {
        "cwd": "${fileDirname}"
      }
    },
    {
      "label": "compile and run",
      "type": "shell",
      "command": "g++ -std=c++17 -o \"${fileBasenameNoExtension}\" \"${file}\" && ./\"${fileBasenameNoExtension}\" < input.txt > output.txt",
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "options": {
        "cwd": "${fileDirname}"
      }
    }
  ]
}

