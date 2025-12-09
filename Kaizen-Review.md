# Kaizen Improvement Review Table

| What was built | Problem / Limitation Found | Improvement Idea | Responsible Member | Expected Impact |
|----------------|----------------------------|------------------|--------------------|-----------------|
| **Add Task Function** | Users could add empty tasks (blank names). | Add a check: `if(taskName == "") return;` | **Abdul Rafay** | Prevents storing useless blank data. |
| **Delete Task Function** | If the list was empty, the program crashed. | Added `if(head == NULL)` check at start. | **Huzaifa Imran** | Makes the code crash-proof and stable. |
| **Display List** | List looked messy and unorganized. | Added numbers (1, 2, 3...) before tasks. | **Hamza Aslam** | Easier for user to read and count tasks. |
| **Search Function** | Case sensitivity (Study vs study). | Convert text to lowercase before comparing. | **Azan Zaman** | Improves search accuracy for users. |
