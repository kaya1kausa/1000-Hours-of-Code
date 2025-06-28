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

    ### 2025-05-30 - Day 8: Functions & Structs Mastery, Troubleshooting, and Quantic Aspirations

**Daily Goal:** Continue C functions, introduce structs, combine concepts in mini-project. Prepare for 42SP.

**Time Studied:** 4 hours (main focus) + 1 hour (wrap-up/Anki) = 5 hours total.

**Topics Covered:**
* C Functions: Deep dive into `void` keyword (return types, parameters).
* C Compiler (`gcc`): Clarified compilation vs. execution, best practices for executable naming (`-o` flag).
* C Structures (`struct`): Definition, declaration, member access. Understood `struct` as a "blueprint" for grouping diverse data.
* Comparison: `structs` vs. `strings` (char arrays).
* Debugging: Solved persistent `void` function return mismatch error (`-Wreturn-mismatch`).
* Computer Science History: Explored contributions of Alan Turing and Ada Lovelace.
* Long-term Vision: Reaffirmed Machine Learning aspirations and strategy for integrating math studies post-42SP.

**Mini-Project Completed:**
* `character_display_func_struct.c`: Successfully combined `structs` and `functions` to define and display custom `GameCharacter` data for 1KAUSA. This project consolidated understanding of core C data structuring and modularity.

**Key Learnings/Insights:**
* So I learned a lot today. I rushed though the end of code, but I learned the connections within code and did a small history class on my homie Alan Turing, OG and Ada Lovelace and it's just so good to know she made the first ever algorithmin for math context and also that she was a free spirit quantum with art and sciences background like me. I confess I day dreamed a bit and lost track of time but overall, i'm more and more seeing how well structured code syntax is and it's just mindblowing, i'm loving everything.
* The "scary" elements of code are just tools; understanding their context and purpose transforms them into coherent energy.
* Persistence in troubleshooting (especially compilation/execution issues) is vital for growth.
* The `void` keyword indicates "no return value" – a critical distinction for function types.
* `structs` are fundamental for organizing complex game data, like player stats, levels, and items.
* My multi-faceted interests are a strength, contributing to a "philosopher lifestyle apprentice" approach to learning and creation, aligning with the 1KAUSA ethos.

**Challenges Faced:**
* Initial confusion and "trauma" regarding the `void` keyword.
* Accidental overwriting/deletion of executable files leading to compilation/execution difficulties.
* Misunderstanding and persistent error with `return 0;` in a `void` function until explicit removal.
* Difficulty with active recall when asked to implement code without direct examples, leading to a need for temporary direct guidance.

**Next Steps (Tomorrow - 2025-05-31):**
* **Start with revision:** Begin by re-coding/revisiting `character_display_func_struct.c` from memory or with minimal prompts to solidify today's breakthroughs, particularly the `void` function correction and `struct` usage.
* Continue C skill development for 42SP and 1KAUSA.

--- DevLog: 2025-06-09 ---
Topic: Navigating Setbacks, Re-engaging with C Fundamentals, and Workflow Resilience.

**Reflections on the Week-Long Gap & First Major Setback:**
The past week, extending beyond "never miss twice," has been a significant personal setback. Life threw major wrenches – renovations, intense anxiety, overwhelming overthinking, and personal crises – which completely derailed my structured study time. This led to feeling "chucra" (cranky, agitated), overwhelmed by the perceived lack of progress, and a deep frustration with the "gap." My commitment felt shaken, and the idea of "little progress" felt demoralizing.

**The Raw Truth Learned Today:**
1.  **Life's Interruptions Are Real:** Unforeseen events and personal struggles are part of the journey. This isn't a straight line; it's a dynamic, sometimes chaotic, timeline.
2.  **"Little Progress" Is a Deception:** Today, I faced and conquered critical, recurring workflow hurdles – specifically, compiler errors due to wrong directories (`cd` command) and unsaved files. These are not "little" problems; they are fundamental to C development and environment mastery. Getting `chronos_puzzle.c` to compile and run, seeing the `do-while` loop function correctly, and successfully navigating the terminal were significant victories.
3.  **Mood's Impact on Focus:** My emotional state heavily impacts my ability to absorb new concepts. Acknowledging this and creating space to "empty the cup" is crucial for effective learning.
4.  **Self-Compassion is Key:** My motto "never miss twice" is a motivator, not a tool for self-punishment. Forgiving myself for missed time is essential for moving forward. This setback is a part of my unique learning story.

**Re-Engagement & Plan Moving Forward:**
Despite the challenges, I showed up today, pushed through the frustration, and actively engaged. My resolve to "lock and load" and ignite the fire for my career change and 1KAUSA remains strong.

* **New Schedule Confirmed:** Adopted a revised daily schedule: 7:00 AM - 10:50 AM (main focus) and 20:30 PM - 21:30 PM (wrap-up/Anki), aiming for 5 hours.
* **Fundamental Review:** Re-engaged with C strings (`char[]`, `\0`, `snprintf` as the "Northern Wall," `strcmp`) and loops (`for`, `while`, `do-while`), starting with `chronos_puzzle.c`.
* **Commitment to Consistency:** The focus shifts to daily consistency over perfect intensity, even on challenging days. Every minute of focused effort is a win.
* **Tomorrow's Goal:** 7 AM sharp start for a "slam dunk" session, building directly on tonight's recalibration.

**Action to Maintain Momentum:**
* **DevLog as Reality Check:** Continue to log all progress, including struggles and breakthroughs. This builds resilience and a realistic portfolio narrative.
* **Git for All Progress:** Commit and push even seemingly small changes. The habit of consistent version control is paramount. (`git add .`, `git commit -m "Commit message reflecting reality"`, `git push origin main`).

**Confidence Meter:** Acknowledging the dip in confidence but actively working to rebuild it through concrete action and self-reflection. The frustration is valid, but the forward motion is non-negotiable.

---

--- DevLog: 2025-06-11 ---
Topic: Pointers Introduction and Navigating High Fatigue.

**Morning:** Continued C fundamentals, focusing on Pointers. Initial setup with `pointer_basics.c` and understanding memory addresses. Faced and overcame compiler/directory issues with guidance.
**Evening:** Logged in late after a long 10-hour work shift. Feeling significant physical and mental fatigue. Prioritized completing Anki review for previous concepts. Did not proceed with new coding due to exhaustion.
**Reflection:** Realized the demanding nature of current gig job severely impacts evening study capacity. Need to optimize morning blocks even further and leverage passive learning where possible. Consistency remains the primary goal, even if intensity varies. Exhaustion is a real factor.

* I'm lowkey feeling hard like David Goggins in a loop of Eminem's Till I Colapse. I'm proudly pussing though and I hope my soil will flourish in time. Unfortunally I can't rush the quantic future, so I work, pray, manifest and repeat.
I saw some cool 42 aliens ad and it's resonnating. Next year I hope I'm not alone in this grind btw. This shitty gig pays bulls and trains the body, mind and spirit so as A CYBERMONK (see more in upcoming chapters) I embrace it like a proper Shaolin Temple apprendice, at least the virtual type.
I'm getting emotional by effort and this is a powerfull genuine gratitude. I'll sleep now, until tomorrow.

---
--- DevLog: 2025-06-30 ---
Topic: C Fundamentals Conquered - A Hard-Won Victory, and the Path Ahead

Today marks a critical juncture. It's June 30th, the end of a month that felt less like a sprint and more like an uphill battle through fog. I must confess, the past weeks have been a testament to human fallibility. My focus has been off-kilter, micro-managing life's chaos, struggling relentlessly to hit those 5 dedicated hours of study I promised myself. There were days I simply couldn't show up. There were moments I stared into oblivion, feeling the weight of expectations and the anxiety of not doing "enough."

It's a strange paradox. Objectively, looking back, I've just conquered the core C fundamentals. I've built working programs, solved real problems, and pushed through complex errors. But subjectively, the internal battle with consistency makes it hard to feel that sense of complete triumph. I know, deep down, I can do better. This feeling of "not having done much yet" is a constant companion, a fire beneath the surface.

Yet, here I am. And the code is running.

My journey through C has been one of trial by fire. I started with the basics – syntax, data types, control flow – like learning the very grammar of a new language. Then came functions, the art of delegation, passing information with pointers – those magical addresses that allowed my initializeCharacter to sculpt a Character's very essence. The initial chronos_system emerged, a simple battle between Kaya and a Temporal Rift Echo, proving I could orchestrate basic game logic.

The real crucible began with Dynamic Memory Allocation (malloc, free, realloc). This concept felt like wrestling with a quantum entanglement at first. The multiple definition of 'main' errors haunted me. I deleted files by mistake, copied code in the wrong places, and constantly battled the linker's unforgiving precision. There were moments of genuine frustration, wondering if I was just copying instead of truly understanding. But each re-do, each gcc error message, forced a deeper look. I learned that malloc borrows "land" for my data, free returns it, and realloc is the ultimate "land-expander." I mastered the delicate dance of Character** for dynamic arrays – a pointer to a pointer, a gateway to scalable game rosters.

Then came File I/O (fopen, fclose, fprintf, fscanf). The initial goal was simple persistence for Kaya. I saw it work, but the "red code" warned of hidden dangers. The moment the loaded character's "name" became "Health: 99's Stats," I knew I'd stumbled into the treacherous waters of input buffering and fscanf's quirks. This was my personal lesson in the power of fgets and sscanf – reading an entire line and then parsing it precisely, rather than battling fscanf's hungry consumption of newlines. This was a true "A-ha!" moment for robust data loading.

The chronos_roster_manager.c stands as my testament to this journey. It's a self-contained program that:

Dynamically manages a roster of characters (thanks, realloc!).

Allows me to add new characters.

Displays the roster.

Saves and loads the entire roster to and from a file, perfectly preserving data integrity across runs.

This project is the tangible proof of my "learning by doing." It's not just theory; it's a working artifact, a compiled .exe that embodies every major C fundamental. It's a foundation for Abysm, and a direct answer to the challenges of 42SP's rigorous demands.

Despite the inner turmoil and the missed hours, I finished this objective. This week was about conquering the fundamentals, and they are conquered.

Now, the compass recalibrates. Starting Monday, July 1st, the true acceleration begins. The focus shifts entirely to the July - December plan: dedicated Abysm game development, weekly C projects that will push my limits, and systematic 42SP prep through LeetCode-style problem-solving. This isn't just about learning; it's about delivering. It's about building the 1KAUSA ethos into every line of code, transforming raw data into coherent energy.

I may feel I haven't done enough yet, but the compiler, the working program, and the progress I see confirm otherwise. The future is forged in these moments of persistent return.