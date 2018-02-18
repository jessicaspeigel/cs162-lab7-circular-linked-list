/****************************************************
** Author: Jessica Speigel
** Assignment: CS162 cs162_lab_6
** Date: 02/16/2018
** Description: Implementation for Driver Functions.
****************************************************/
#include "DriverFunctions.hpp"
#include "InputValidation.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <limits>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;
using std::streamsize;
using std::numeric_limits;
using std::ios;

void addNewHeadNode(DoubleLinkedList *list) {
    // Get an integer to add to the list
    int val = getIntegerWithMinMax("Please enter a positive integer to add to the list.", 0, 65535);
    // Add it to the list
    list->addToHead(val);
    // Print the new list
    cout << endl;
    cout << "Node added to head! Your list now contains the following values:" << endl;
    list->printList();
}

void addNewTailNode(DoubleLinkedList *list) {
    // Get an integer to add to the list
    int val = getIntegerWithMinMax("Please enter a positive integer to add to the list.", 0, 65535);
    // Add it to the list
    list->addToTail(val);
    // Print the new list
    cout << endl;
    cout << "Node added to tail! Your list now contains the following values:" << endl;
    list->printList();
}

void deleteHeadNode(DoubleLinkedList *list) {
    bool deleted = list->deleteHead();
    if (deleted) {
        // Print the new list
        cout << endl;
        cout << "Head deleted! Your list now contains the following values:" << endl;
    }
    list->printList();
}

void deleteTailNode(DoubleLinkedList *list) {
    bool deleted = list->deleteTail();
    if (deleted) {
        // Print the new list
        cout << endl;
        cout << "Tail deleted! Your list now contains the following values:" << endl;
    }
    list->printList();
}

void reverseTraverseList(DoubleLinkedList *list) {
    if (list->getHead() != nullptr) {
        // Only print this if there are values to print
        cout << endl;
        cout << "Here is your list in reverse order:" << endl;
        list->printListInReverse();
    } else {
        // Otherwise tell the user the list is empty
        cout << endl;
        cout << "This list is empty." << endl;
    }
}

void printHeadValue(DoubleLinkedList *list) {
    if (list->getHead() != nullptr) {
        // Only print this if there's a value to print
        cout << endl;
        cout << "The first item in your list is: ";
        list->printItem(list->getHead());
        cout << endl;
    } else {
        // Otherwise tell the user the list is empty
        cout << endl;
        cout << "This list is empty." << endl;
    }
}

void printTailValue(DoubleLinkedList *list) {
    if (list->getTail() != nullptr) {
        // Only print this if there's a value to print
        cout << endl;
        cout << "The last item in your list is: ";
        list->printItem(list->getTail());
        cout << endl;
    } else {
        // Otherwise tell the user the list is empty
        cout << endl;
        cout << "This list is empty." << endl;
    }
}

void createLinkedListFromFile(DoubleLinkedList *list) {
    // Make sure the user wants to replace any items they have with the values from the text file
    cout << endl;
    cout << "This will replace your list with the values from list.txt. Are you sure you want to continue?" << endl;
    char input = 'o';
    do {
        cout << "Enter 'y' to continue or 'n' to return to the menu." << endl;
        cin >> input;
    } while (input != 'y' && input != 'n');
    if (input == 'y') {
        // Read the file
        ifstream inputFile;
        // Try to open the file
        inputFile.open("list.txt", ios::in);
        // Make sure the file is in a good state
        if (inputFile) {
            // Clear the existing list
            list->clearList();
            // Make an int to hold the current value
            int num = 0;
            // Add values to the list
            while (inputFile >> num) {
                //cout << num << endl;
                list->addToTail(num);
            }
            // Close the file
            inputFile.close();
        } else {
            cout << "Error opening file." << endl;
        }
        // Print the list
        cout << "Your list contains the following values:" << endl;
        list->printList();
    }
}
