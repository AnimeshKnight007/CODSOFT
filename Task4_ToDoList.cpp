#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> tasks;
    int choice;

    while (true) {
        cout << "\n--- TO-DO LIST MENU ---\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Delete Task\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        if (!(cin >> choice)) return 0;

        if (choice == 1) {
            string task;
            cin.ignore();
            cout << "Enter task: ";
            getline(cin, task);
            tasks.push_back(task);
            cout << "Task added.\n";
        }
        else if (choice == 2) {
            if (tasks.empty()) {
                cout << "No tasks available.\n";
            } else {
                for (int i = 0; i < tasks.size(); i++) {
                    cout << i + 1 << ". " << tasks[i] << endl;
                }
            }
        }
        else if (choice == 3) {
            if (tasks.empty()) {
                cout << "No tasks to delete.\n";
                continue;
            }
            int num;
            cout << "Enter task number to delete: ";
            if (!(cin >> num)) continue;
            if (num >= 1 && num <= tasks.size()) {
                tasks.erase(tasks.begin() + (num - 1));
                cout << "Task deleted.\n";
            } else {
                cout << "Invalid task number.\n";
            }
        }
        else if (choice == 4) {
            break;
        }
    }

    return 0;
}
