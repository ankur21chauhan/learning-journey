For C++ you can use this as the task.json to have a separate input and output console system and for visuals just make seperate input output text files and follow these steps after your 3 files are ready (input, output, main)
view-->editor layout-->split left

For LINUX users only for MAC and WINDOWS you can use GPT

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

