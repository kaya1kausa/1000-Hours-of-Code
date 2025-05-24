# 1000 Hours of Code: DevLog

---

## Day 1: C Fundamentals, Environment Setup & Basic Calculator Project

**Date:** 2025-05-22 (Replace with your actual start date if different)
**Time Spent:** ~5 hours (initial setup + basic calculator)

**Topics Covered:**

* Setting up VS Code and GCC compiler (MinGW).
* Writing and running my very first C program ("Hello, World!").
* Understanding the basic structure of a C program (`#include <stdio.h>`, `int main()`, `printf()`, `return 0;`).
* Compiling C code using GCC (`gcc source.c -o executable`).
* Running executable programs from the terminal (`./executable`).
* **Crucially:** Understanding the "compile-run" cycle – needing to recompile after every code change.
* Setting up a GitHub account and creating my first public repository (`1000-Hours-of-Code`).
* Initializing a local Git repository (`git init`).
* Staging files for commit (`git add filename.c`).
* Creating a commit (`git commit -m "message"`).
* Configuring Git user identity (`git config --global user.email`, `git config --global user.name`).
* Connecting local Git to GitHub (`git remote add origin URL`).
* Pushing local commits to GitHub (`git push -u origin master:main`).
* **Basic C Syntax for Calculator:** `main` function, `printf` for output, `scanf` for input.
* **Variables & Data Types:** Declared and used `int` (integers) and `float` (floating-point numbers) for calculations.
* **Arithmetic Operators:** Used `+`, `-`, `*`, `/` for basic operations.
* **Conditional Statements:** Implemented `if-else if-else` logic to choose operations.
* **`char` Data Type:** Handled character input for the operator.
* **Input/Output (`stdio.h`):** Used `printf` and `scanf` effectively.
* **Terminal Navigation:** Practiced `cd` for directory changes and `ls` for listing contents.

**Summary:**

Today was a monumental first step! I successfully navigated the initial setup of my C development environment, wrote my first C program, and learned the fundamental compile-run cycle. The biggest win was setting up my GitHub repository and pushing my first code there, overcoming several common Git/terminal hurdles. I also built my first functional C mini-project: a simple command-line calculator, applying basic syntax, variables, and conditionals. This truly feels like the start of my journey to become a developer, turning my writing passion into code. The immediate feedback from the compiler and terminal is incredibly motivating.

**Challenges:**

* It took me more hours than I'm willing to admit only on setting VS and the GCC compiler on its own. It was traumatizing but I learned so much on how to navigate files in Windows CMD and command lines that I felt lowkey hacking. It was great for resilience, problem-solving, and fixing errors. When it finally worked, it was the best feeling ever!
* Initially struggled with file paths and ensuring `gcc` found `hello.c`.
* Git configuration for user identity was a new step.
* Understanding the `master` vs. `main` branch difference during the first push.
* Remembering to recompile after every code change!
* Initial environment setup required careful configuration of MinGW paths.
* Understanding `scanf`'s behavior, especially with `char` and `float` inputs.
* Debugging initial compilation errors related to missing semicolons or incorrect syntax.
* Significant time spent on troubleshooting Git, including managing `git rm --cached` and Git's merge editor (`vi` / Vim).

**What I Learned:**

* I did all with my own hands - no courses, tutorials, or endless videos. Just reading, assembling, and consulting my dear Sherlock (Gemini) friend to understand errors and next steps. The greatest deduction teacher since Sir Árthur Conan Doyle, no cap!
* Patience and persistence are key in debugging.
* Attention to details and to understand the bigger picture - context of what I'm doing.
* Error messages are incredibly valuable guides.
* The importance of precise commands for computers.
* The power of Git for version control and portfolio building.
* GitHub is aesthetic and it's not hard as it looks, can't wait to fill up those 1000 hours on repositories.

**Next Steps:**

* Begin learning about loops (e.g., `for`, `while`, `do-while`) in C.
* Start developing the "Breathing Exercise App" as the next mini-project, applying loop concepts.

---

## Day 2: `for` Loops & Breathing App Phase 1 + Debugging Resilience

**Date:** 2025-05-23 (Suggesting the next day for a new topic block)
**Time Spent:** ~5 hours (focus on `for` loops, app, and troubleshooting)

**Topics Covered:**

* **`for` Loops:** Understanding the structure (`initialization; condition; increment/decrement`) and purpose (definite iteration).
* **Loop Components:** Learned that `initialization` runs once, `condition` is checked before each run, and `increment/decrement` runs after each run.
* **Infinite Loops:** Experienced and debugged an infinite loop caused by an incorrect loop condition.
* **Common Pitfall (Semicolon after `for`):** Discovered how a misplaced semicolon after `for ( ... );` creates an empty loop body, leading to unexpected behavior and variable scope issues.
* **Variable Scope in Loops:** Understood that variables declared inside a `for` loop's parenthesis (`int i = 0;`) are local to that loop's scope.
* **Project Application:** Successfully applied `for` loops to create a basic inhale/exhale cycle for the Breathing Exercise App.
* **Debugging Process:** Gained significant experience in reading compiler errors (`error: 'i' undeclared`, `No such file or directory`) and systematically troubleshooting common programming and Git issues (infinite loops, incorrect file paths, compiler command syntax).

**Summary:**

Today was a deep dive into `for` loops, a fundamental C construct, by building the initial phase of my "Breathing Exercise App." This project provided a fantastic, hands-on way to apply loop concepts for repetitive actions. The day was also a rigorous debugging session, tackling infinite loops, tricky semicolon placement, and compiler errors. Each challenge honed my problem-solving skills and reinforced the importance of meticulous attention to detail in C. Witnessing the breathing cycle print out perfectly after overcoming these hurdles was incredibly satisfying. This app is the seed for future 1KAUSA mechanics like mana synchronization.

**Challenges:**

* Debugging the infinite loop due to an incorrect `for` loop increment (`i--` instead of `i++`).
* The incredibly frustrating, yet valuable, lesson of the misplaced semicolon after the `for` loop parenthesis, which caused `i` to be "undeclared" and baffled the program logic.
* Repeated "No such file or directory" errors from `gcc` due to terminal directory issues and temporary file system confusion.
* Persistent Git status confusion and troubleshooting merge messages.

**What I Learned:**

* The subtle but critical impact of small syntax errors (like semicolons) on program behavior and variable scope.
* The power of systematic debugging: reading error messages, tracing code, and testing hypotheses.
* Increased familiarity with the VS Code terminal and `gcc` commands through consistent use.
* Reinforced resilience and persistence when faced with stubborn bugs.
* The breathing app is a direct application of core C concepts to my 1KAUSA game vision, proving that small steps build big worlds.

**Next Steps:**

* Begin exploring `while` loops and other loop types in C.
* Start the next mini-project: an echo program that exits on user input.

---

## Day 3: Project Structure & Introduction to `while` Loops

**Date:** 2025-05-24 (Today's date)
**Time Spent:** (Will update this section later)

**Topics Covered:**

* **Project Folder Restructuring:** Implementing a scalable, topic-based organization for the entire `1000-Hours-of-Code` repository.
* Understanding the benefits of conceptual grouping over chronological `dayX` folders for long-term projects and portfolios.
* **Git Refactoring:** Applying `git add .`, `git commit`, and `git push` to accurately reflect complex file system changes (moves, creations, deletions).
* Troubleshooting `git status` output and merge messages during large-scale reorganization.
* **Introduction to `while` Loops:** Understanding their structure (`while (condition) { ... }`) and purpose (repeating as long as a condition is true).
* Key difference: `while` loops require manual initialization and increment/decrement.

**Summary:**

Day 3 began with a crucial and extensive project restructuring, moving from a chronological `dayX` folder system to a more scalable, topic-based organization (e.g., `01_C_Fundamentals`, `02_C_ControlFlow_Loops_Conditionals`). This effort, while time-consuming, is vital for managing the 1000-hour journey and building a clear portfolio. It involved significant Git operations and troubleshooting to ensure all file moves and deletions were correctly reflected on GitHub. After solidifying the project's foundation, I shifted to introducing `while` loops, understanding their basic syntax and purpose as a counterpart to `for` loops.

**Challenges:**

* The initial hesitation and anxiety surrounding the file system reorganization, which highlighted the importance of addressing mental blocks proactively.
* Troubleshooting `git status` output that didn't immediately recognize the large-scale file moves, requiring manual deletions of old folders.
* Handling Git merge messages from previous operations before committing the new structure.

**What I Learned:**

* The profound impact of early project organization on long-term productivity and mental clarity.
* Advanced Git usage for handling complex file system changes like mass renames and deletions.
* The critical skill of pausing coding to address foundational issues that cause anxiety or confusion.
* The fundamental concept of `while` loops as condition-driven iterations.

**Next Steps:**

* Complete the `while` loop "echo until quit" mini-project.