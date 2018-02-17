/****************************************************
** Author: Jessica Speigel
** Assignment: CS162 cs162_lab_6
** Date: 02/16/2018
** Description: Implementation for DriverFunctions class.
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
    cout << "Your list now contains the following values:" << endl;
    list->printList();
}

void addNewTailNode(DoubleLinkedList *list) {

}

void deleteHeadNode(DoubleLinkedList *list) {

}

void deleteTailNode(DoubleLinkedList *list) {

}

void reverseTraverseList(DoubleLinkedList *list) {

}

void printHeadValue(DoubleLinkedList *list) {

}

void printTailValue(DoubleLinkedList *list) {

}

void createLinkedListFromFile() {

}
