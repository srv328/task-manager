# task-manager
this repository contains a project on the discipline of programming standards and technologies

## Description of the Code

This code represents a Windows Forms application developed in C++/CLI using Visual Studio. It functions as a task management application, facilitating the organization of tasks and projects.

### Key Components and Functionalities

1. **UI Elements Handling:**
    - Various event handlers (`thisProject_click`, `addButton`, `deleteButton`, etc.) respond to user interactions with buttons, list boxes, combo boxes, and data grids. 
    - Manages visibility and interaction with UI elements based on user actions and selections.

2. **Data Management:**
    - Manipulates and manages task and project data within a `TM` (TaskManager) object.

3. **UI Update and Validation:**
    - Functions like `UpdateProjectListBox`, `DisplayTasksInDataGridView`, and `UpdateIndex` update UI components with appropriate data based on user actions or internal changes.
    - `validateData` and `ConfirmDeletion` functions validate user inputs and confirm deletion actions, respectively.

4. **Add/Edit/Delete Operations:**
    - Functions like `AddNewTask`, `AddNewProject`, `EditTask`, `EditTaskInProject`, `EditProject`, and `DeleteTask` handle adding, editing, and deleting tasks or projects.
    - These functions interact with the `TM` object to perform these operations.

5. **UI Navigation:**
    - Manages UI navigation based on user selections, allowing the switching between tasks and projects.

6. **Data Import/Export:**
    - `importData` and `exportData` functions manage the import and export of task and project data from/to text files.

### Observations

- Utilizes a mix of C++/CLI and managed C++ along with Windows Forms to design the UI.
- Integrates list boxes, combo boxes, data grids, and calendar controls to effectively manage tasks and projects.
- Ensures consistency in handling task/project data and updating the UI in response to user actions.

Overall, this code presents a fundamental yet functional task and project management system. It facilitates functionalities for adding, editing, and deleting tasks or projects, displaying task/project details, and managing UI interactions.

The `TaskManager` header file (`TaskManager.h`) defines a class responsible for managing tasks and projects within a task management system. It contains private data members, methods for handling tasks and projects, and functionalities to load and save data from/to text files.

### Class Structure

*   **Private Data Members:**
    
    *   `std::vector<Task> tasks`: Stores a collection of tasks.
    *   `std::vector<Project> projects`: Stores a collection of projects.
*   **Private Methods:**
    
    *   `saveTasks`, `loadTasks`, `saveProjects`, `loadProjects`: Methods for saving and loading task and project data to/from text files.
    *   `isValidProjectIndex`, `isValidTaskIndex`: Utility methods to validate project and task indices.
*   **Public Methods:**
    
    *   `getTasks`, `getProjects`: Retrieve the list of tasks and projects.
    *   Methods to add, edit, delete, mark tasks as done/to do, set priorities, and manage tasks within projects (`addTask`, `editTaskDescription`, `deleteTask`, `markTaskAsDone`, `markTaskAsToDo`, `setTaskPriority`, `setTaskID`, etc.).
    *   Methods to manage projects (`createProject`, `deleteProject`, `editProjectName`, `addTaskToProject`, `editTaskInProject`, `editTaskDeadlineInProject`, `setProjPriority`, `setTaskAsDone`, `setTaskAsToDo`, `setProjTaskId`).
*   **File Import/Export Methods:**
    
    *   `exportData`: Saves task and project data to specified files.
    *   `importData`: Loads task and project data from specified files.

### Functionality Overview

*   Manages collections of tasks and projects using vectors.
*   Provides functionalities to add, edit, delete, and mark tasks as done/to do.
*   Supports task and project manipulation within the system.
*   Handles file import/export operations for tasks and projects.

This class serves as a central component of a task management system, encapsulating the core functionalities for task and project management, providing methods to manipulate data, and enabling persistence by loading/saving data from/to text files.

The `Project` header file (`Project.h`) defines a class representing a project within a task management system. It encapsulates project-related functionalities, including managing tasks associated with the project.

### Class Structure

*   **Private Data Members:**
    
    *   `int projectId`: Holds the unique identifier for the project.
    *   `std::string projectName`: Stores the name of the project.
    *   `std::vector<Task> tasks`: Maintains a collection of tasks associated with the project.
*   **Public Methods:**
    
    *   `operator==`: Overloaded equality operator to compare projects based on their IDs.
    *   `Project`: Constructor to initialize the project with an ID and name.
    *   `addTask`, `removeTask`: Methods to add and remove tasks from the project's task list.
    *   `getTasks`: Retrieves a vector of tasks associated with the project.
    *   Methods to modify task attributes within the project (`setProjectPriority`, `setTaskId`, `setTaskAsDone`, `setTaskAsToDo`, `setTaskName`, `setDeadline`).
    *   `setProjectName`, `getProjectName`: Methods to set and retrieve the project's name.
    *   `setProjectId`, `getProjectId`: Methods to set and retrieve the project's unique ID.

### Functionality Overview

*   **Project Details:**
    
    *   Stores essential project information such as ID and name.
    *   Manages a collection of tasks associated with the project.
*   **Task Management within Projects:**
    
    *   Supports addition and removal of tasks within a project (`addTask`, `removeTask`).
    *   Provides methods to modify task attributes within the project (`setProjectPriority`, `setTaskId`, `setTaskAsDone`, `setTaskAsToDo`, `setTaskName`, `setDeadline`).
*   **Project Information Access:**
    
    *   Allows retrieval and modification of project attributes like name and ID (`getProjectName`, `getProjectId`, `setProjectName`, `setProjectId`).

### Usage

*   Creates instances of projects with unique IDs and names.
*   Manages tasks associated with the project, including addition, removal, and modification of task attributes within the project scope.

This class serves as a container for tasks specific to a project, offering methods to manipulate and access project-related information and associated tasks. It plays a fundamental role in organizing tasks within the context of individual projects within the task management system.

The `Task` header file (`Task.h`) defines a class representing individual tasks within a task management system. It encapsulates essential functionalities related to managing and modifying task attributes.

### Class Structure

*   **Private Data Members:**
    
    *   `int taskId`: Represents the unique identifier for the task.
    *   `std::string description`: Stores the description or details of the task.
    *   `std::string deadline`: Contains the deadline or due date for the task.
    *   `int priority`: Indicates the priority level of the task.
    *   `bool status`: Represents the completion status of the task (`true` for completed, `false` for pending).
*   **Public Methods:**
    
    *   `operator==`: Overloaded equality operator to compare tasks based on their IDs.
    *   `Task`: Constructor to initialize a task with an ID, description, deadline, priority, and completion status.
    *   Getter and setter methods for task attributes:
        *   `getTaskId`, `setId`: Methods to retrieve and modify the task's unique ID.
        *   `getDescription`, `setDescription`: Methods to retrieve and set the task description.
        *   `getDeadline`, `setDeadline`: Methods to retrieve and set the task deadline.
        *   `getPriority`, `setPriority`: Methods to retrieve and set the task priority.
        *   `isDone`, `markAsDone`, `markAsToDo`: Methods to retrieve the completion status and mark tasks as done or pending.

### Functionality Overview

*   **Task Details:**
    
    *   Stores essential information about individual tasks, including ID, description, deadline, priority, and completion status.
*   **Task Attribute Management:**
    
    *   Provides getter and setter methods to access and modify task attributes such as description, deadline, priority, and completion status.
*   **Task State Modification:**
    
    *   Allows tasks to be marked as completed (`markAsDone`) or pending (`markAsToDo`).

### Usage

*   Creates instances of tasks with unique IDs and attributes such as description, deadline, priority, and completion status.
*   Manages and modifies task attributes such as description, deadline, priority, and completion status.

This class serves as a blueprint for individual tasks within the task management system. It facilitates the manipulation and management of task-related data and attributes, enabling operations related to task modification, status tracking, and access to task details.
