# 🎯 Number Guessing Game in C

A simple terminal-based Number Guessing Game created using the C programming language.

The computer generates a random number between **1 and 100**, and the player has to guess the correct number with the help of hints provided by the program.

---

## 🚀 Features

- Random number generation
- Higher/Lower hints
- Attempt counter
- Best score tracker
- Replay option
- Beginner-friendly project

---

## 🛠️ Technologies Used

- C Programming Language
- Standard Libraries:
  - stdio.h
  - stdlib.h
  - time.h

---

## 📌 How the Game Works

1. The program generates a random number between 1 and 100.
2. The player enters a guess.
3. The program tells whether the guess should be:
   - Higher
   - Lower
4. The game continues until the correct number is guessed.
5. Total attempts are displayed as the score.
6. Best score is also tracked during runtime.

---

## ▶️ How to Run

### Compile the program

```bash
gcc project1.c
```

### Run the program

```bash
./project1.exe
```

---

## 📷 Sample Output

```text
Guess a number between 1 and 100 : 50
Oops guess a number little higher : 75
Oops guess a number little lower : 63
Woo Hoo !!! you guessed the right number in 3 tries!!
BEST SCORE : 3
```

---

## 🌱 Future Improvements

- Difficulty levels
- Save best score using files
- Multiplayer mode
- GUI version

---

## 👨‍💻 Author

Made by Riyansh 🚀
