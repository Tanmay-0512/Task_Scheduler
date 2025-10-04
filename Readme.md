Concept	Where Used	Purpose
deque	To store and execute tasks from both ends	Demonstrates flexibility of double-ended queue
list	To group tasks based on priority levels	Demonstrates linked list-based storage
cin.ignore() + getline()	Used together for string input	Avoids newline issues
switch-case	Menu-driven selection	Makes it user interactive
clear()	To remove all elements from deque	Memory clean-up simulation
🎯 Sample Run
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
