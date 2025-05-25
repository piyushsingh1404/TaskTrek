#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H

#include <vector>
#include <string>

struct Task {
    std::string description;
    std::string dueDate;
};

class TaskManager {
private:
    std::vector<Task> tasks;

public:
    void addTask();
    void viewTasks();
};

#endif
