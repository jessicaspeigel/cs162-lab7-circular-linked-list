/****************************************************
** Author: Jessica Speigel
** Assignment: CS162 Lab_75
** Date: 02/25/2018
** Description: Lab 7 main
****************************************************/

#include <iostream>
#include <string>
#include <vector>
#include "Menu.hpp"
#include "DriverFunctions.hpp"
#include "Queue.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
    // Create a linked list and a pointer to pass to the functions
    Queue* list = new Queue;
    // Get the main menu ready
    vector<string> mainMenuItems;
    mainMenuItems.push_back("Add a value to the back of queue");
    mainMenuItems.push_back("Display the front value");
    mainMenuItems.push_back("Remove the front node");
    mainMenuItems.push_back("Display the queue’s content");
    mainMenuItems.push_back("Exit");
    Menu mainMenu("Choose from the following options", mainMenuItems);
    int menuChoice = 1;
    cout << "Welcome to my queue!";
    // Start the program
    do {
        // Show the menu and get a choice
        menuChoice = mainMenu.showMenu();
        switch (menuChoice) {
            case 1: // Add a new node to the back of the queue
                addToBack(list);
                break;
            case 2: // Display the first node in the queue
                printHeadValue(list);
                break;
            case 3: // Remove the first node
                deleteHeadNode(list);
                break;
            case 4: // Display the queue's content
                printList(list);
                break;

        }
    } while (menuChoice != 5); // Choosing 5 equals exit

    // Delete the linked list
    delete list;

    return 0;
}