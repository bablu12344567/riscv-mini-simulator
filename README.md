# RISC-V Mini Simulator

## 📌 About This Project

This project is a simple RISC-V instruction simulator built using C++.  
I created this project to understand how a CPU actually executes instructions at a low level.

Instead of just learning theory, I wanted to simulate basic register operations and memory behavior to see how instructions like ADD, ADDI, LW, and SW work internally.

The simulator reads instructions from a text file, executes them one by one, and prints the final state of the registers.

---

## 🚀 What This Simulator Does

- Simulates 32 general-purpose registers (x0 – x31)
- Supports basic arithmetic instructions:
  - ADD
  - SUB
  - ADDI
- Supports memory instructions:
  - LW (Load Word)
  - SW (Store Word)
- Reads instructions from a file
- Displays final register values after execution

---

## 🧠 What I Learned

While building this project, I gained a better understanding of:

- How registers work inside a CPU
- The concept of load-store architecture
- How instructions are parsed and executed
- The fetch-decode-execute cycle
- Basic memory modeling

This project helped me connect computer architecture theory with practical implementation.

---

## 🛠️ Technologies Used

- C++
- STL (vector, stringstream, file handling)
- g++
- MSYS2
- Git

---

## ▶️ How to Run

Compile:

```bash
g++ main.cpp -o sim
```

Run:

```bash
./sim
```

---

## 📌 Sample Instructions (instructions.txt)

```
ADDI 1 0 10
ADDI 2 0 5
ADD 3 1 2
SW 3 100
LW 4 100
```

---

## 📷 Sample Output

```
Register State:
x0: 0
x1: 10
x2: 5
x3: 15
x4: 15
x5: 0
x6: 0
x7: 0
```

---

## 🔮 Future Improvements

Some improvements I plan to add:

- Enforce x0 to always remain zero (as in real RISC-V)
- Add branching instructions like BEQ
- Simulate a program counter
- Add better error handling
- Expand instruction support

---

## 🎯 Purpose

This project is meant for learning and understanding how basic CPU instructions interact with registers and memory. It is a simplified educational model, not a full RISC-V implementation.
