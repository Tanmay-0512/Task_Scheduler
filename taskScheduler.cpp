#include <iostream>
#include <deque>
#include <list>
using namespace std;

class Task
{
public:
    int id;
    string name;
    int priority;

    Task(int id, string name, int priority)
    {
        this->id = id;
        this->name = name;
        this->priority = priority;
    }
};

class TaskScheduler
{
private:
    deque<Task> dq; // Deque to hold all tasks

public:
    void addTask()
    {
        int id, priority;
        string name;
        cout << "\nEnter Task ID: ";
        cin >> id;
        cout << "Enter Task Name: ";
        cin.ignore(); // to avoid getline issues
        getline(cin, name);
        cout << "Enter Priority (1–10): ";
        cin >> priority;

        dq.push_back(Task(id, name, priority));
        cout << "✅ Task '" << name << "' added successfully!\n";
    }

    void addPriorityTask()
    {
        int id, priority;
        string name;
        cout << "\nEnter High Priority Task ID: ";
        cin >> id;
        cout << "Enter Task Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Priority (1-10): ";
        cin >> priority;

        dq.push_front(Task(id, name, priority));
        cout << "🔥 High Priority Task '" << name << "' added at front!\n";
    }

    void executeFront()
    {
        if (dq.empty())
        {
            cout << "⚠️ No tasks to execute!\n";
            return;
        }
        Task t = dq.front();
        dq.pop_front();
        cout << "⚙️ Executing Task (Front): " << t.name << endl;
    }

    void executeBack()
    {
        if (dq.empty())
        {
            cout << "⚠️ No tasks to execute!\n";
            return;
        }
        Task t = dq.back();
        dq.pop_back();
        cout << "⚙️ Executing Task (Back): " << t.name << endl;
    }

    void showPending()
    {
        if (dq.empty())
        {
            cout << "✅ No pending tasks!\n";
            return;
        }
        cout << "\n📝 Pending Tasks:\n";
        for (auto &t : dq)
        {
            cout << " - [ID: " << t.id << "] " << t.name
                 << " (Priority: " << t.priority << ")\n";
        }
    }

    void groupTasksByPriority()
    {
        list<Task> high, medium, low;

        for (auto &t : dq)
        {
            if (t.priority >= 8)
                high.push_back(t);
            else if (t.priority >= 5)
                medium.push_back(t);
            else
                low.push_back(t);
        }

        cout << "\n📊 Task Groups:\n";
        cout << "High Priority: ";
        for (auto &t : high)
            cout << t.name << " ";
        cout << "\nMedium Priority: ";
        for (auto &t : medium)
            cout << t.name << " ";
        cout << "\nLow Priority: ";
        for (auto &t : low)
            cout << t.name << " ";
        cout << "\n";
    }

    void clearAll()
    {
        dq.clear();
        cout << "🧹 All tasks cleared!\n";
    }

    bool isEmpty()
    {
        return dq.empty();
    }
};

int main()
{
    TaskScheduler scheduler;
    int choice;

    do
    {
        cout << "\n========== Task Scheduler Menu ==========\n";
        cout << "1. Add Task\n";
        cout << "2. Add High Priority Task\n";
        cout << "3. Execute Task from Front\n";
        cout << "4. Execute Task from Back\n";
        cout << "5. View Pending Tasks\n";
        cout << "6. Group Tasks by Priority\n";
        cout << "7. Clear All Tasks\n";
        cout << "0. Exit\n";
        cout << "=========================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            scheduler.addTask();
            break;
        case 2:
            scheduler.addPriorityTask();
            break;
        case 3:
            scheduler.executeFront();
            break;
        case 4:
            scheduler.executeBack();
            break;
        case 5:
            scheduler.showPending();
            break;
        case 6:
            scheduler.groupTasksByPriority();
            break;
        case 7:
            scheduler.clearAll();
            break;
        case 0:
            cout << "👋 Exiting... Goodbye!\n";
            break;
        default:
            cout << "❌ Invalid choice. Try again!\n";
        }
    } while (choice != 0);

    return 0;
}
