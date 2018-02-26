/****************************************************
** Author: Jessica Speigel
** Assignment: CS162 cs162_lab_7
** Date: 02/25/2018
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

void addToBack(Queue *list) {
    // Get an integer to add to the list
    int val = getIntegerWithMinMax("Please enter a positive integer to add to the queue.", 0, 65535);
    // Add it to the list
    list->addBack(val);
    // Print the new list
    cout << endl;
    cout << "Item added to back!" << endl;
}

void deleteHeadNode(Queue *list) {
    bool deleted = list->removeFront();
    if (deleted) {
        // Tell the user it worked
        cout << endl;
        cout << "Front node deleted!" << endl;
    } else {
        // The queue was empty
        cout << endl;
        cout << "This queue is empty." << endl;
    }
}

void printHeadValue(Queue *list) {
    if (!list->isEmpty()) {
        // Only print this if there's a value to print
        cout << endl;
        cout << "The first item in your queue is: ";
        cout << list->getFront();
        cout << endl;
    } else {
        // Otherwise tell the user the list is empty
        cout << endl;
        cout << "This queue is empty." << endl;
    }
}

void printList(Queue *list) {
    if (!list->isEmpty()) {
        // Only print this if there's a value to print
        cout << endl;
        cout << "Your queue contains the following values: ";
        list->printList();
        cout << endl;
    } else {
        // Otherwise tell the user the list is empty
        cout << endl;
        cout << "This queue is empty." << endl;
    }
}

