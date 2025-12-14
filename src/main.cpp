#include <iostream>
#include <string>
using namespace std;

// --- Node Structure ---
struct Node {
    string task;
    Node* next;
};

// --- ToDoList Class ---
class ToDoList {
private:
    Node* head;

public:
    ToDoList() { head = NULL; }

    // Feature 1: Add Task (Insert at End)
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
        cout << "[Success] Task Added: " << taskName << endl;
    }

    // Feature 2: View Tasks (Traversal)
    void viewTasks() {
        if (checkEmpty()) return; // Helper function usage

        Node* temp = head;
        int count = 1;
        cout << "\n--- Current To-Do List ---" << endl;
        while (temp != NULL) {
            cout << count << ". " << temp->task << endl;
            temp = temp->next;
            count++;
        }
        cout << "--------------------------" << endl;
    }

    // Feature 3: Search Task (New Feature for Task A)
    void searchTask(string taskName) {
        if (checkEmpty()) return;

        Node* temp = head;
        int position = 1;
        bool found = false;
        
        while (temp != NULL) {
            if (temp->task == taskName) {
                cout << "[Found] Task '" << taskName << "' is at number " << position << endl;
                found = true;
                break;
            }
            temp = temp->next;
            position++;
        }
        
        if (!found) cout << "[Not Found] Task '" << taskName << "' does not exist." << endl;
    }

    // Feature 4: Delete Task
    void deleteTask(string taskName) {
        if (checkEmpty()) return;

        // Case 1: Delete Head
        if (head->task == taskName) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            cout << "[Deleted] Task removed: " << taskName << endl;
            return;
        }

        // Case 2: Delete from Middle/End
        Node* temp = head;
        while (temp->next != NULL && temp->next->task != taskName) {
            temp = temp->next;
        }

        if (temp->next == NULL) {
            cout << "[Error] Task not found for deletion!" << endl;
        } else {
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
            cout << "[Deleted] Task removed: " << taskName << endl;
        }
    }

    // Helper Function (For Modular Glow-Up)
    bool checkEmpty() {
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return true;
        }
        return false;
    }
};

// --- Main Execution ---
int main() {
    ToDoList myList;
    
    // 1. Adding Tasks
    myList.addTask("Complete Task 4");
    myList.addTask("Fix Bugs");
    myList.addTask("Submit Project");

    // 2. Viewing Tasks
    myList.viewTasks();

    // 3. Searching (New)
    myList.searchTask("Fix Bugs");

    // 4. Deleting
    myList.deleteTask("Fix Bugs");
    myList.viewTasks();

    return 0;
}
