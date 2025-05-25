#include "task_manager.h"
#include <iostream>

void TaskManager::addTask() {
    Task task;
    std::cout << "Enter task description: ";
    std::cin.ignore();
    std::getline(std::cin, task.description);
    std::cout << "Enter due date (YYYY-MM-DD): ";
    std::getline(std::cin, task.dueDate);
    tasks.push_back(task);
}

void TaskManager::viewTasks() {
    for (const auto& task : tasks) {
        std::cout << "Task: " << task.description
                  << ", Due: " << task.dueDate << std::endl;
    }
}
