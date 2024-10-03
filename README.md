Objective: Implement a doubly-linked list that represents a conga line of pirates. The program will simulate various actions such as shifting the list (lshift and rshift commands), inserting pirates at the head or tail, and deleting pirates based on their ability to pass under a "limbo bar."
Key Phases:
Pirate Generation: Write code to generate a list of 200 pirates (name and height) and store them in a file named portal.txt.
Node Class Implementation: Implement a Node class that serves as the building block for the doubly-linked list (CongaLine). Each node has pointers to both the next and previous node in the list.
CongaLine Boilerplate: Implement the basic constructor and destructor for the CongaLine class, as well as functions for managing the limbo bar height and keeping track of the position of the sword.
Driver Program: Implement a driver program that reads commands from a file (commands.txt) and executes them on the CongaLine. The driver will handle tasks such as shifting pirates, lowering the limbo bar, and executing special commands like "hammer" and "tactical nuke."
Core Functionality: Write the core methods for manipulating the doubly-linked list, including adding new pirates, deleting pirates, and shifting the sword's position while ensuring the list maintains exactly 20 pirates at all times.
Robust Testing: Create a commands-robust.txt file to thoroughly test all features and edge cases of your implementation, including special cases like the bar height reaching zero or deleting multiple pirates.
Commands we needed to create:
lshift: Moves the sword to the left, deleting pirates if they are too tall to pass under the bar.
rshift: Moves the sword to the right with the same conditions.
hammer: Deletes a specific pirate by position.
tacticalnuke: Deletes the entire line of pirates.
setbar: Sets the height of the limbo bar.
lowerbar: Lowers the bar height by a given amount.
