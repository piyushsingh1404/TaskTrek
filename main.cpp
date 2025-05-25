#include <iostream>
#include "task_manager.h"

int main() {
    TaskManager manager;
    int choice;

    while (true) {
        std::cout << "\n1. Add Task\n2. View Tasks\n3. Exit\nChoose an option: ";
        std::cin >> choice;
        if (choice == 1) {
            manager.addTask();
        } else if (choice == 2) {
            manager.viewTasks();
        } else {
            break;
        }
    }

    return 0;
}
