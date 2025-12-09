#include <iostream>
#include <string>
using namespace std;

// Node Structure (Task)
struct Node {
    string task;
    Node* next;
};

class ToDoList {
private:
    Node* head;
public:
    ToDoList() { head = NULL; }

    // Feature 1: Add New Task
    void addTask(string taskName) {
        Node* newNode = new Node();
        newNode->task = taskName;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << "Task Added: " << taskName << endl;
    }

    // Feature 2: View All Tasks
    void viewTasks() {
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        int count = 1;
        cout << "\n--- My To-Do List ---" << endl;
        while (temp != NULL) {
            cout << count << ". " << temp->task << endl;
            temp = temp->next;
            count++;
        }
        cout << "---------------------" << endl;
    }

    // Feature 3: Delete Task (by Name)
    void deleteTask(string taskName) {
        if (head == NULL) return;

        if (head->task == taskName) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            cout << "Task Deleted: " << taskName << endl;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL && temp->next->task != taskName) {
            temp = temp->next;
        }

        if (temp->next == NULL) {
            cout << "Task not found!" << endl;
        } else {
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
            cout << "Task Deleted: " << taskName << endl;
        }
    }
};

int main() {
    ToDoList myList;
    // Testing features
    myList.addTask("Submit Task 3");
    myList.addTask("Update LinkedIn");
    myList.addTask("Practice Code");
    
    myList.viewTasks();
    
    myList.deleteTask("Update LinkedIn");
    myList.viewTasks();

    return 0;
}
