# basic-c-programs

Problem Statement for Array Operations:

Write a program to implement the following:

Display the following menu:
1. Insert
2. Delete
3. Display
4. Search
5. Sort
6. Exit

Enter your choice ...

a) [Invalid Choice]: If the user enters a choice other than 1-6, display the error
message “Invalid choice. Press any key to return to the menu…” and redisplay the menu again.

b) [Insert]: If the user enters 1, Check if the array is full. If it is full display the error
message “Sorry! The array is full. Press any key to return tothe menu …” else ask for a number to insert and its index. Display an error
message “Index out of bounds. Press any key to return to the menu …” if the 𝑖𝑛𝑑𝑒𝑥 ≥ 𝑀𝐴𝑋_𝐿𝐸𝑁 or 𝑖𝑛𝑑𝑒𝑥 < −1. If 𝑖𝑛𝑑𝑒𝑥 = −1 insert the
element at the end else insert the element at the entered index. Display the message
“Element inserted successfully. Press any key to continue …”
Finally return to the menu. [No need to sort the array here.]

c) [Delete]: If the user enters 2, check if the array is empty. If it is empty display the
error message “Array is empty. Press any key to return to the
menu ...” else search for the element and delete it and the display the message
“Element deleted. Press any key to return to the menu ...” If
the element is not in the array display the error message “Element not
present in the array. Press any key to return to the menu...” Finally return to the menu.

d) [Display]: If the user enters 3, display the array or display the message “Array is
empty.” Finally display the message “Press any key to return to the menu …” and then return to the menu.
e.g., if the array is [2,3,4] display it as
2 3 4
Press any key to continue …

e) [Search]: If the user enters 4, display the error message “Array is empty. Press any key to continue …” and return to the menu, else get the element
from the user and find it in the array display the message “Element found at:“ and the display the indexes.
If the element is not present in the array display the message “Element not found.”
Finally display “Press any key to continue …” and return to the menu.
e.g., if the array is [2,3,4,5,3] and the user wants to search 3 then display
Element found at: 1, 4
Press any key to continue ...

f) [Sort]: If the user enters 5, display the message “Array is empty. Press any
key to continue …”. Else sort the array using either selection sort or insertion
sort and then display the message “Array sorted. Press any key to continue …” to return to the menu.

g) [Exit]: If the user enters 6, display the message “Are you sure (Y/N) …” and take the
input. If the user enter Y then exit else return to the menu.
Note: After displaying the message, Press any key to continue … return to
the menu after the user presses any key
