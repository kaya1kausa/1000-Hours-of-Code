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

* The profound impact of early project organization on long-term productivity and mental clarity. I mean, i've always been a systematic, bullet journal, productivity apps type of girl, and structure in folders is a pain if done wrong but just pleasing if done correctly. I hope we setted everything for the long run tough.
* Advanced Git usage for handling complex file system changes like mass renames and deletions.
* The critical skill of pausing coding to address foundational issues that cause anxiety or confusion.
* The fundamental concept of `while` loops as condition-driven iterations.
* Today I gradually feel like a more Mr. Robot (my go to joke about steriotipical programmmers at the moment, even when i lowkey love the actor and series so much). I mean, i'm with the hood on and everything.
I'll use loops heavely in my game dev journey. Made sure to proper understand the path.
**Next Steps:**

* Complete the `while` loop "echo until quit" mini-project.

# 2025-05-25 - Day 4: Functions in C & Project Modularization

---

### **Topics Covered:**
* **C Functions:** Deep dive into function declaration (prototypes), definition, and calling mechanisms.
* **`void` Keyword:** Understanding `void` as a return type for functions that do not return a value.
* **Modular Programming:** Principles of breaking down code into smaller, manageable, and reusable functions.
* **`scanf` Input Nuances:** Practical experience with `scanf` behavior, including handling character input and buffer interactions.
* **Project Organization:** Continued reinforcement of clean file system structure and its importance for larger projects.

---

### **Summary:**
Today focused on solidifying understanding of C functions by refactoring our calculator project into `function_calculator.c`. This involved defining separate functions for addition, subtraction, multiplication, and division, as well as a `display_menu` function. This significantly improved the modularity and readability of the code compared to a single monolithic `main` function. We also revisited and clarified `scanf` input behaviors.

---

### **Challenges:**
* Ensuring correct input format for `scanf` when mixing numeric and character input (e.g., operator symbol).
* Initially, understanding the `scanf` buffer behavior that sometimes consumes unexpected input, leading to "premature" calculations. (Resolved by understanding `scanf`'s token reading).

---

### **What I Learned:**
* Functions are absolutely crucial for organizing and scaling C programs. They make code much cleaner, easier to debug, and promote reusability – vital for projects like 1KAUSA.
* The `void` keyword is simple yet powerful for functions that perform actions without returning data.
* Input handling with `scanf` requires careful attention to format specifiers (`%f`, `%c`) and potential buffer effects.
* "Today, I truly felt the elegance of modularity. Breaking down the calculator into distinct functions was like seeing the blueprint of a complex machine come to life, each part perfectly designed for its task. It proved that good organization isn't just about pretty folders, but about making the code itself more powerful and maintainable. And overcoming input quirks with `scanf` felt like taming a wild beast, teaching me patience and precision!"

---

### **Next Steps:**
* Continue practicing function implementation in new C mini-projects.
* Explore more advanced function concepts (e.g., passing by reference, recursion) in upcoming sessions.
* Maintain rigorous daily study and Anki review schedule.

---

# 2025-05-26 - Day 5: Arrays in C & Functions with Arrays

**Total Hours Today:** [Your actual time spent today, e.g., 5 hours]
**Cumulative Hours:** [Update this based on your total progress]

---

### **Topics Covered:**
* **Arrays in C:** Declaration, initialization, accessing elements (0-indexed).
* **Passing Arrays to Functions:** Understanding that arrays are passed by reference (address of the first element).
* **Modular Programming:** Further application of functions to encapsulate array operations (sum, average).
* **Preprocessor Directives (`#define`):** Using constants for array sizes.
* **Debugging File Paths & Compilation Errors:** Persistence in troubleshooting "No such file or directory" issues due to incorrect file naming/location.

---

### **Summary:**
Today focused on understanding and implementing arrays to handle collections of data. We built an `array_stats.c` program to collect integers from the user and calculate their sum and average. Building on yesterday's functions lesson, we refactored this into `array_stats_functions.c`, demonstrating how to pass arrays to functions (`calculateSum`, `calculateAverage`) for cleaner, more modular code. Overcoming persistent compilation errors due to file naming and location was a significant learning point, reinforcing attention to detail in the development environment.

---

### **Challenges:**
* Persistent "No such file or directory" errors due to misnaming `array_stats_functions.c` as `array_stats_project.c` and other small typos, which required meticulous debugging of file paths and names.
* Ensuring the correct `gcc` command syntax when providing the source and output file names.

---

### **What I Learned:**
* That the "O bagulho é louco, e o processo é lento" - Racionais MC. 
Eu revisei minha schedule e minhas ambições e saber que to investindo 4 horas em "apenas isso"é meio deprimente, mas essa é a base para minha ambição de entrar na 42SP aka a única escola- comunidade de programação possível para alguém como eu, meus jogos, carreira em ML (apesar de usar mais python, C é a mother de python então learn with your elder fucker) 

* Arrays are essential for managing lists of similar data, and their 0-indexed nature is crucial.

* Passing arrays to functions is efficient as it passes a reference, allowing functions to operate directly on the original data.

* The importance of meticulous attention to file names and paths during compilation, as even a small typo can halt progress. Debugging these environment-related issues is a critical skill.

* "Today felt like breaking through a wall! The array concepts clicked quickly, but the real victory was conquering those stubborn file name errors. It was a tough battle, but finally seeing the code compile and run proved that persistence and precision are non-negotiable in programming. My `main` function now looks so much cleaner, it's like tidying up a chaotic room into a functional space for 1KAUSA's grand designs!"

---

### **Next Steps:**
* Continue practicing array manipulation, especially with loops.
* Prepare for the next session on Pointers, which are closely related to arrays.
* Maintain daily Anki reviews for long-term retention.

---
# 2025-05-27 - Day 6: Pointers & Pointers with Arrays

**Total Hours Today:** [Your actual time spent today, e.g., 5 hours]
**Cumulative Hours:** [Update this based on your total progress]

---

### **Topics Covered:**
* **Introduction to Pointers:** Understanding pointers as variables that store memory addresses.
* **Address-of Operator (`&`):** How to get the memory address of a variable.
* **Dereference Operator (`*`):** How to access the value stored at a pointer's address.
* **Pointer Declaration:** `dataType *pointerName;`
* **Pointers and Arrays:** Understanding that an array's name often behaves as a constant pointer to its first element.
* **Pointer Arithmetic:** How `array[i]` is equivalent to `*(array + i)`.
* **Type-Specific Pointers:** The importance of a pointer's type (`int*`, `float*`, etc.) for correct memory stepping and data interpretation.
* **Practical Application:** Implemented a game development example (`inventory_manager.c`) to clear array slots using pointers in functions.

---

### **Summary:**
Today's session delved into the powerful concept of pointers in C, which allow direct interaction with memory addresses. We explored how to declare pointers, use the `&` operator to get addresses, and the `*` operator to dereference and access values. A major breakthrough was understanding the deep connection between pointers and arrays, realizing that array names effectively act as pointers to their first element. This enabled us to use pointer arithmetic for array traversal and manipulation. The practical `inventory_manager.c` project solidified these concepts by demonstrating how functions can modify original array data by receiving arrays as pointers. Overcoming initial conceptual hurdles with strong analogies ("compass pointer") proved highly effective.

---

### **Troubleshooting & Fixes:**
* **Anki Deck Import/Display Resolution:**
    * **Problem:** Cards imported successfully, but the answer (Back field) was not displaying correctly during review, initially showing blank, then showing the question again.
    * **Diagnosis:** The issue was not with the import process (data was correctly mapped to Front/Back fields), but with the **Card Template** for the "Basic" note type. The template was inadvertently configured to display the "Back" field on the front of the card, and then only the "Front" field again on the back.
    * **Solution:**
        1.  Navigated to Anki's `Browse` window.
        2.  Selected any card using the "Basic" note type.
        3.  Opened the `Cards...` editor (or `Ctrl + Shift + C`).
        4.  Corrected the **Front Template** to contain only `{{Front}}`.
        5.  Corrected the **Back Template** to contain `{{Front}}<hr id="answer">{{Back}}`.
        6.  Saved the template changes.
    * **Result:** All cards now display correctly, with the question on the front and the answer appearing on the back after revelation. This has made the Anki spaced repetition system fully functional for learning C.

---

### **Challenges:**
* Initially distinguishing between a pointer's value (an address) and the value it points to.
* Understanding why a pointer's type is crucial (for byte stepping and interpretation).
* **Persistent Anki template configuration issue, successfully resolved.**

---

### **What I Learned:**
* Honestly, I'm bad at this operators thing. I'm doing anki to remember then, but i got it wrong everytime so i guess we need more time to assemble that sh*t hehe.

* I'm a writer by heart and code is kind of poetic. I mean, the arrays and pointers things are like a compass and neddle for an specific data type only. Romantic isn't it?

* Pointers are essential for low-level memory control, dynamic memory allocation, and efficient function arguments in C.
* `&` is for "address of", `*` is for "value at address".
* Arrays and pointers are two sides of the same coin; the array name essentially *is* a pointer to its first element, and pointer arithmetic is the underlying mechanism for array indexing.
* The data type of a pointer determines how it navigates memory (how many bytes it jumps) and how it interprets the data it points to.
* "My understanding of pointers just 'clicked' today, especially with the compass analogy! Seeing how arrays are basically pointers internally clarifies so much. The `inventory_manager` project showed how crucial this is for game dev, letting functions directly tweak game states. This feels like unlocking a new level of control, essential for building the intricate time mechanics of 1KAUSA!"
* **Crucially, learned how to diagnose and fix Anki card display issues by directly editing card templates, ensuring proper spaced repetition.**
* Anki is great but it took me forever to do this, hope it's properly fixed for all my decks btw.

---

### **Next Steps:**
* Continue practicing pointer manipulations and their interaction with arrays.
* Prepare for tomorrow's session on C Strings (which are character arrays, further bridging pointers and arrays).
* Maintain daily Anki reviews for long-term retention.

---
# 2025-05-27 - Day 6: Pointers & Pointers with Arrays

**Total Hours Today:** [Your actual time spent today, e.g., 5 hours]
**Cumulative Hours:** [Update this based on your total progress]

---

### **Topics Covered:**
* Today I was a little but down but i catched up and made some "AHA" connections betwen the operators - again, i'm bad at remembering them, even in anki. And the differences between array, pointers, strings. It's easier then ever was because I'm learning and applying at my own contexts.
* **Introduction to Pointers:** Understanding pointers as variables that store memory addresses.
* **Address-of Operator (`&`):** How to get the memory address of a variable.
* **Dereference Operator (`*`):** How to access the value stored at a pointer's address.
* **Pointer Declaration:** `dataType *pointerName;`
* **Pointers and Arrays:** Understanding that an array's name often behaves as a constant pointer to its first element.
* **Pointer Arithmetic:** How `array[i]` is equivalent to `*(array + i)`.
* **Type-Specific Pointers:** The importance of a pointer's type (`int*`, `float*`, etc.) for correct memory stepping and data interpretation.
* **Practical Application:** Implemented a game development example (`inventory_manager.c`) to clear array slots using pointers in functions.

---

### **Summary:**
Today's session delved into the powerful concept of pointers in C, which allow direct interaction with memory addresses. We explored how to declare pointers, use the `&` operator to get addresses, and the `*` operator to dereference and access values. A major breakthrough was understanding the deep connection between pointers and arrays, realizing that array names effectively act as pointers to their first element. This enabled us to use pointer arithmetic for array traversal and manipulation. The practical `inventory_manager.c` project solidified these concepts by demonstrating how functions can modify original array data by receiving arrays as pointers. Overcoming initial conceptual hurdles with strong analogies ("compass pointer") proved highly effective.

---

### **Troubleshooting & Fixes:**
* **Anki Deck Import/Display Resolution:**
    * **Problem:** Cards imported successfully, but the answer (Back field) was not displaying correctly during review, initially showing blank, then showing the question again.
    * **Diagnosis:** The issue was not with the import process (data was correctly mapped)