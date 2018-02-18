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

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

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
    // Print the new list
    cout << endl;
    if (deleted) {
        cout << "Head deleted! Your list now contains the following values:" << endl;
    }
    list->printList();
}

void deleteTailNode(DoubleLinkedList *list) {
    bool deleted = list->deleteTail();
    // Print the new list
    cout << endl;
    if (deleted) {
        cout << "Tail deleted! Your list now contains the following values:" << endl;
    }
    list->printList();
}

void reverseTraverseList(DoubleLinkedList *list) {

}

void printHeadValue(DoubleLinkedList *list) {
    list->printItem(list->getHead());
}

void printTailValue(DoubleLinkedList *list) {
    list->printItem(list->getTail());
}

void createLinkedListFromFile() {

}
