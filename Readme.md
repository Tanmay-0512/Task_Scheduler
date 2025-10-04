✅ Task Scheduler (C++ Project)

A simple and interactive Task Scheduler implemented in C++, using STL containers and menu-driven execution. It supports adding tasks, prioritizing them, executing from both ends, grouping, and clearing all tasks.

🚀 Features

Add normal and high-priority tasks

Execute tasks from front or back

View pending tasks

Group tasks by priority

Clear all tasks

Interactive menu-driven flow

🧠 Concepts Used
Concept	Where Used	Purpose
deque	Task storage (front & back operations)	Enables adding/executing from both ends
list	Grouping tasks by priority	Demonstrates linked list-style organization
cin.ignore() + getline()	String input handling	Prevents newline input issues
switch-case	Menu selection	Makes interaction structured and readable
clear()	Clearing deque	Simulates memory cleanup / reset
📌 Sample Run
========== Task Scheduler Menu ==========
1. Add Task
2. Add High Priority Task
3. Execute Task from Front
4. Execute Task from Back
5. View Pending Tasks
6. Group Tasks by Priority
7. Clear All Tasks
0. Exit
=========================================
Enter your choice: 1

Enter Task ID: 101
Enter Task Name: Debug Feature
Enter Priority (1–10): 6
✅ Task 'Debug Feature' added successfully!

Enter your choice: 2
Enter High Priority Task ID: 102
Enter Task Name: Fix Urgent Bug
Enter Priority (1–10): 9
🔥 High Priority Task 'Fix Urgent Bug' added at front!

Enter your choice: 5
📝 Pending Tasks:
 - [ID: 102] Fix Urgent Bug (Priority: 9)
 - [ID: 101] Debug Feature (Priority: 6)

Enter your choice: 3
⚙️ Executing Task (Front): Fix Urgent Bug

Enter your choice: 0
👋 Exiting... Goodbye!

🛠️ How It Works

Normal Tasks → Added at the back

High Priority Tasks → Added at the front

Execute → From front or back using pop_front() / pop_back()

Grouping → Uses list to classify by priority

Clear Memory → Uses deque.clear()

Menu Control → via switch-case

✅ Ideal For

✔️ STL practice
✔️ Menu-driven programs
✔️ College mini-projects
✔️ Understanding deques & lists
✔️ Task management simulations