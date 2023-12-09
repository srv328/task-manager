#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <vector>
#include "project.h"
#include "fstream"
#include "sstream"

class TaskManager {
private:
    std::vector<Task> tasks;
    std::vector<Project> projects;

    void saveTasks(const std::string& filename) {
        std::ofstream file(filename);
        if (file.is_open()) {
            for (const auto& task : tasks) {
                file << task.getDescription() << ":" << task.getDeadline() << ":" << task.getPriority() << ":" << task.isDone() << "\n";
            }
            file.close();
        }
    }

    void loadTasks(const std::string& filename) {
        std::ifstream file(filename);
        if (file.is_open()) {
            std::string line;
            while (std::getline(file, line)) {
                std::istringstream iss(line);
                std::string description, deadline, priorityStr, isDoneStr;
                if (std::getline(iss, description, ':') &&
                    std::getline(iss, deadline, ':') &&
                    std::getline(iss, priorityStr, ':') &&
                    std::getline(iss, isDoneStr)) {
                    int taskId = static_cast<int>(tasks.size() + 1); 
                    Task task(
                        taskId,
                        description,
                        deadline,
                        std::stoi(priorityStr),
                        (isDoneStr == "1")
                    );
                    tasks.push_back(task);
                }
            }
            file.close();
        }
    }

    void saveProjects(const std::string& filename) {
        std::ofstream file(filename);
        if (file.is_open()) {
            for (const auto& project : projects) {
                file << project.getProjectName() << ":";
                for (const auto& task : project.getTasks()) {
                    file << task.getDescription() << ":" << task.getDeadline() << ":" << task.getPriority() << ":" << task.isDone() << ";";
                }
                file << "\n";
            }
            file.close();
        }
    }

    void loadProjects(const std::string& filename) {
        std::ifstream file(filename);
        if (file.is_open()) {
            std::string line;
            int numStr = 1;
            while (std::getline(file, line)) {
                std::istringstream iss(line);
                std::string projectName, tasksStr;
                if (std::getline(iss, projectName, ':') &&
                    std::getline(iss, tasksStr)) {
                    int projectId = numStr++;
                    Project project(projectId, projectName);
                    std::istringstream tasksStream(tasksStr);
                    std::string taskInfo;
                    int taskIdStr = 0;
                    while (std::getline(tasksStream, taskInfo, ';')) {
                        std::istringstream taskStream(taskInfo);
                        std::string description, deadline, priorityStr, isDoneStr;
                        if (std::getline(taskStream, description, ':') &&
                            std::getline(taskStream, deadline, ':') &&
                            std::getline(taskStream, priorityStr, ':') &&
                            std::getline(taskStream, isDoneStr)) {
                            int taskId = ++taskIdStr;
                            Task task(
                                taskId + projectId * 100,
                                description,
                                deadline,
                                std::stoi(priorityStr),
                                (isDoneStr == "1")
                            );
                            project.addTask(task);
                        }
                    }
                    projects.push_back(project);
                }
            }
            file.close();
        }
    }

    bool isValidProjectIndex(int projectIndex) const {
        return projectIndex >= 0 && projectIndex < projects.size();
    }

    bool isValidTaskIndex(int taskIndex) const {
        return taskIndex >= 0 && taskIndex < tasks.size();
    }

public:

    std::vector<Task> getTasks() {
        return tasks;
    }

    std::vector<Project> getProjects() {
        return projects;
    }

    void addTask(const Task& task) {
        tasks.push_back(task);
    }

    void editTaskDescription(int taskIndex, const std::string& description) {
        if (isValidTaskIndex(taskIndex)) {
            tasks[taskIndex].setDescription(description);
        }
    }

    void deleteTask(const Task& task, bool vector) {
        auto it = std::find(tasks.begin(), tasks.end(), task);
        if (it != tasks.end() && vector) {
            int deletedTaskId = it->getTaskId();
            tasks.erase(it);
            for (auto& t : tasks) {
                if (t.getTaskId() > deletedTaskId) {
                    t.setId(t.getTaskId() - 1);
                }
            }
        }

        if (!vector) {
            for (auto& project : projects) {
                project.removeTask(task);
            }

        }
    }
   
    void setTaskPriority(int taskIndex, int priority) {
        if (isValidTaskIndex(taskIndex)) {
            tasks[taskIndex].setPriority(priority);
        }
    }

    void setTaskID(int taskIndex, int ID) {
        if (isValidTaskIndex(taskIndex)) {
            tasks[taskIndex].setId(ID);
        }
    }

    void markTaskAsDone(int taskIndex) {
        if (isValidTaskIndex(taskIndex)) {
            tasks[taskIndex].markAsDone();
        }
    }

    void markTaskAsToDo(int taskIndex) {
        if (isValidTaskIndex(taskIndex)) {
            tasks[taskIndex].markAsToDo();
        }
    }

    void setTaskDeadline(int taskIndex, const std::string& deadline) {
        if (isValidTaskIndex(taskIndex)) {
            tasks[taskIndex].setDeadline(deadline);
        }
    }

    void createProject(const Project& project) {
        projects.push_back(project);
    }

    void addTaskToProject(int index, Task& task) {
        projects[index].addTask(task);
    }

    void editProjectName(int projectIndex, const std::string& name) {
        if (isValidProjectIndex(projectIndex)) {
            projects[projectIndex].setProjectName(name);
        }
    }

    void editTaskInProject(int projectIndex, int taskIndex, const std::string& description) {
        if (isValidProjectIndex(projectIndex)) {
            projects[projectIndex].setTaskName(taskIndex, description);
        }
    }

    void editTaskDeadlineInProject(int projectIndex, int taskIndex, const std::string& deadline) {
        if (isValidProjectIndex(projectIndex)) {
            projects[projectIndex].setDeadline(taskIndex, deadline);
        }
    }

    void deleteProject(const Project& project) {
        auto it = std::find(projects.begin(), projects.end(), project);
        if (it != projects.end()) {
            int deleted = it->getProjectId();
            projects.erase(it);
            for (auto& t : projects) {
                if (t.getProjectId() > deleted) {
                    t.setProjectId(t.getProjectId() - 1);
                }
            }
        }
    }

    void setProjPriority(int index, int index1, int priority) {
        if (index >= 0 && index < projects.size()) {
            projects[index].setProjectPriority(index1, priority);
        }
    }

    void setTaskAsDone(int index, int index1) {
        if (index >= 0 && index < projects.size()) {
            projects[index].setTaskAsDone(index1);
        }
    }

    void setTaskAsToDo(int index, int index1) {
        if (index >= 0 && index < projects.size()) {
            projects[index].setTaskAsToDo(index1);
        }
    }

    void setProjTaskId(int index, int index1, int Id) {
        if (index >= 0 && index < projects.size()) {
            projects[index].setTaskId(index1, Id);
        }
    }

    void exportData(const std::string& filename, const std::string& filename2) {
        saveTasks(filename);
        saveProjects(filename2);
    }

    void importData(const std::string& filename, const std::string& filename2) {
        loadTasks(filename);
        loadProjects(filename2);
    }
};

#endif
