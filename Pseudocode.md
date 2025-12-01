# System Pseudocode

// 1. Function to Add a Task (Contributed by Rafay)
FUNCTION AddTask(taskName)
    CREATE newNode
    SET newNode.data = taskName
    SET newNode.next = NULL
    
    IF head IS NULL THEN
        SET head = newNode
    ELSE
        SET current = head
        WHILE current.next IS NOT NULL
            SET current = current.next
        END WHILE
        SET current.next = newNode
    END IF
    PRINT "Task Added Successfully"
END FUNCTION

// 2. Function to View List (Contributed by Hamza)
FUNCTION ViewTasks()
    IF head IS NULL THEN
        PRINT "List is Empty"
        RETURN
    END IF
    
    SET current = head
    WHILE current IS NOT NULL
        PRINT current.data
        SET current = current.next
    END WHILE
END FUNCTION

// 3. Function to Delete Task (Contributed by Huzaifa)
FUNCTION DeleteTask(taskName)
    IF head IS NULL THEN
        PRINT "Nothing to delete"
        RETURN
    END IF

    IF head.data == taskName THEN
        SET temp = head
        SET head = head.next
        DELETE temp
        RETURN
    END IF

    SET current = head
    WHILE current.next IS NOT NULL AND current.next.data != taskName
        SET current = current.next
    END WHILE

    IF current.next IS NOT NULL THEN
        SET nodeToDelete = current.next
        SET current.next = current.next.next
        DELETE nodeToDelete
        PRINT "Task Deleted"
    ELSE
        PRINT "Task Not Found"
    END IF
END FUNCTION

// 4. Function to Search Task (Contributed by Azan)
FUNCTION SearchTask(taskName)
    SET current = head
    SET found = FALSE
    WHILE current IS NOT NULL
        IF current.data == taskName THEN
            SET found = TRUE
            BREAK
        END IF
        SET current = current.next
    END WHILE
    
    IF found IS TRUE THEN
        PRINT "Task Found!"
    ELSE
        PRINT "Task Not in List"
    END IF
END FUNCTION

// 5. Function to Check if Empty (Team)
FUNCTION IsListEmpty()
    IF head == NULL THEN
        RETURN TRUE
    ELSE
        RETURN FALSE
    END IF
END FUNCTION
