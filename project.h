#ifndef PROJECT_H
#define PROJECT_H

#include <vector>
#include "task.h"

class Project {
private:
    int projectId;
    std::string projectName;
    std::vector<Task> tasks;

public:
    bool operator==(const Project& other) const {
        return this->projectId == other.projectId; 
    }

    Project(int id, const std::string& name) : projectId(id), projectName(name) {};

    void addTask(const Task& task) {
        tasks.push_back(task);
    }

    void removeTask(const Task& task) {
        auto it = std::find(tasks.begin(), tasks.end(), task);
        if (it != tasks.end()) {
            int deletedTaskId = it->getTaskId();
            tasks.erase(it);

            for (auto& t : tasks) {
                if (t.getTaskId() > deletedTaskId) {
                    t.setId(t.getTaskId() - 1);
                }
            }
        }
    }

    std::vector<Task> getTasks() const {
        return tasks;
    }

    void setProjectPriority(int index1, int priority) {
        tasks[index1].setPriority(priority);
       
    }

    void setTaskId(int index1, int Id) {
        tasks[index1].setId(Id);
    }

    void setTaskAsDone(int index1) {
        tasks[index1].markAsDone();

    }

    void setTaskAsToDo(int index1) {
        tasks[index1].markAsToDo();
    }

    void setTaskName(int index1, const std::string& des) {
        tasks[index1].setDescription(des);
    }

    void setDeadline(int index1, const std::string& DDl) {
        tasks[index1].setDeadline(DDl);
    }

    void setProjectName(const std::string& name) {
        projectName = name;
    }

    std::string getProjectName() const {
        return projectName;
    }

    void setProjectId(int ID) {
        projectId = ID;
    }

    int getProjectId() const {
        return projectId;
    }
};

#endif 
