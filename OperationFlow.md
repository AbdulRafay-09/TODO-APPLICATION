# Operation Flow Explanation

### 1. Operation: Add New Task
* **What it does:** Creates a new task and adds it to the list so the user can remember it.
* **Data Structure:** Singly Linked List (New Node Insertion).
* **Why Suitable:** We don't know how many tasks the user will have. Linked List allows dynamic growth.
* **User Interaction:** User selects "Add", types the task name, and the system confirms "Task Added".

### 2. Operation: Delete Task
* **What it does:** Removes a task that is no longer needed or mistakenly added.
* **Data Structure:** Pointer Re-linking (Current -> Next = Target -> Next).
* **Why Suitable:** In an array, deleting requires shifting all data. In a Linked List, we just re-route the pointer, which is faster.
* **User Interaction:** User selects a task number to delete, and it disappears from the list immediately.

### 3. Operation: View List
* **What it does:** Displays all current tasks from first to last.
* **Data Structure:** Linear Traversal (Head to Null).
* **Why Suitable:** Since tasks are linked sequentially (Task 1 -> Task 2), traversing the list ensures order is maintained.
* **User Interaction:** User clicks "View List", and the screen prints all tasks line by line until the end.
