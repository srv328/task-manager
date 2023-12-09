#ifndef TASK_H
#define TASK_H

#include <string>
#include <iostream>


class Task {
private:
    int taskId;
    std::string description;
    std::string deadline;
    int priority;
    bool status; 

public:
    bool operator==(const Task& other) const {
        return this->taskId == other.taskId; 
    }

    Task(int id, const std::string& desc, std::string ddl, int pri, bool done)
        : taskId(id), description(desc), deadline(ddl), priority(pri), status(done) {}

    int getTaskId() const {
        return taskId;
    }

    void setId(int ID) {
        taskId = ID;
    }

    std::string getDescription() const {
        return description;
    }

    std::string getDeadline() const {
        return deadline;
    }

    int getPriority() const {
        return priority;
    }

    void setPriority(int pri) {
        priority = pri;
    }

    bool isDone() const {
        return status;
    }

    void setDescription(std::string des)  {
        description = des;
    }

    void setDeadline(std::string ddl) {
        deadline = ddl;
    }

    void markAsDone() {
        status = true;
    }

    void markAsToDo() {
        status = false;
    }
};

#endif 
