# 24 Puzzle Solver
> First mini-project for Algorithm Strategies (IF2211) course from School of Electrical Engineering and Informatics, Bandung Institute of Technology

## Table of Contents
* [General Information](#general-information)
* [Libraries Used](#libraries-used-c)
* [Local Setup](#local-setup)
* [Features](#features)
* [Structure](#structure)
* [Author](#author)

## General Information
A Solver for 24 puzzle card game made in C++. Showing all possible solution from 4 cards which if combined will return 24. This program applied <i>brute-force algorithm</i> to search the puzzle's solution.

## Prerequisites
- C++14
- G++ (GNU Compiler) - version 6.3.0

## Libraries Used (C++)
- ctime
- chrono
- fstream
- iostream
- sstream
- vector

## Local Setup
1. Clone this repository (first-time use only)
<br>```git clone https://github.com/kennypanjaitan/Algeo02-21013.git```<p>
2. Run the program
<br>```./run.bat```<p>

## Features
- User can input 4 cards manually or generate 4 random cards
- Showing all posible solution for the inputted cards
- User can save all solutions for their cards (it will be automatically save into .txt file inside the /test/ folder)

## Structure
```bash
.
├── bin ------------------------------------------ Folder containing executable binary files
├── docs ----------------------------------------- Folder containing documents for this project
├── src ------------------------------------------ Folder containing source code files
│   ├── clearScreen.hpp
│   ├── file.hpp
│   ├── input.hpp
│   ├── main.cpp
│   ├── menu.hpp
│   ├── operator.hpp
│   ├── permute.hpp
│ 
├── test ----------------------------------------- Folder containing saved outputs (solutions) 
├── README.md
├── run.bat -------------------------------------- Executable batch file (main program)
```

## Author
Created by Kenny Benaya Nathan (13521023)