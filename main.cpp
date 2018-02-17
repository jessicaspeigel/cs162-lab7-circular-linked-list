/****************************************************
** Author: Jessica Speigel
** Assignment: CS162 Lab_5
** Date: 02/06/2018
** Description: Lab 5 main
****************************************************/

#include <iostream>
#include <string>
#include <vector>
#include "Menu.hpp"
#include "DriverFunctions.hpp"
#include "DoubleLinkedList.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
    // Create a linked list and a pointer to pass to the functions
    DoubleLinkedList* list = new DoubleLinkedList;
    // Get the main menu ready
    vector<string> mainMenuItems;
    mainMenuItems.push_back("Add a new node to the head");
    mainMenuItems.push_back("Add a new node to the tail");
    mainMenuItems.push_back("Delete the first node in the list");
    mainMenuItems.push_back("Delete the last node in the list");
    mainMenuItems.push_back("Traverse the list in reverse");
    // EXTRA CREDIT
    mainMenuItems.push_back("Print the value of the first node in the list");
    mainMenuItems.push_back("Print the value of the last node in the list");
    mainMenuItems.push_back("Create a linked list from a text file (list.txt)");
    // EXTRA CREDIT
    mainMenuItems.push_back("Exit");
    Menu mainMenu("Choose from the following options", mainMenuItems);
    int menuChoice = 1;
    cout << "Welcome to Lab 6: Linked Lists.";
    // Start the program
    do {
        // Show the menu and get a choice
        menuChoice = mainMenu.showMenu();
        switch (menuChoice) {
            case 1: // Add a new node to the head of the list
                addNewHeadNode(list);
                break;
            case 2: // Add a new node to the tail of the list
                addNewTailNode(list);
                break;
            case 3: // Delete the first node
                deleteHeadNode(list);
                break;
            case 4: // Delete the last node
                deleteTailNode(list);
                break;
            case 5: // Traverse the list in reverse
                reverseTraverseList(list);
                break;
            case 6: // Print the first node
                printHeadValue(list);
                break;
            case 7: // Print the last node
                printTailValue(list);
                break;
            case 8: // Create a linked list from a text file
                createLinkedListFromFile();
                break;

        }
    } while (menuChoice != 9); // Choosing 9 equals exit

    // Delete the linked list
    delete list;

    return 0;
}