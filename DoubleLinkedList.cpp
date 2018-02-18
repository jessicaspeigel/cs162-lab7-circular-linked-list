/****************************************************
** Author: Jessica Speigel
** Assignment: CS162 cs162_lab_6
** Date: 02/16/2018
** Description: Implementation for DoublyLinkedList
** class.
****************************************************/
#include "DoubleLinkedList.hpp"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

DoubleLinkedList::DoubleLinkedList() {
    head = nullptr;
    tail = nullptr;
}

DoubleLinkedList::~DoubleLinkedList() {
    Node* n = getHead();
    while(n != nullptr) {
        // Pointer to node to be deleted
        Node* garbage = n;
        // Move on to the next
        n = n->getNext();
        // Delete the garbage node
        delete garbage;
    }
}

/****************************************************
** Description: Adds a new node to the head of the
** list.
****************************************************/

void DoubleLinkedList::addToHead(int val) {
    // This constructor instantiates with next and prev set to nullptr
    Node* n = new Node(val);
    // Set the head
    setHead(n);
    // Set the tail if none exists
    if (getTail() == nullptr) {
        setTail(n);
    }
}

/****************************************************
** Description: Adds a new node to the tail of the
** list.
****************************************************/

void DoubleLinkedList::addToTail(int val) {
    // This constructor instantiates with next and prev set to nullptr
    Node* n = new Node(val);
    // Set the tail to the new node
    setTail(n);
    // Set the head if none exists
    if (getHead() == nullptr) {
        setHead(n);
    }
}

/****************************************************
** Description: Deletes the first item in the list.
** Returns true if the item was deleted. This really
** only returns false if the list is empty.
****************************************************/

bool DoubleLinkedList::deleteHead() {
    bool deleteResult = false;
    Node* h = getHead();
    Node* newHead = nullptr;
    if (h != nullptr) {
        newHead = h->getNext();
        deleteNodeByValue(h->getValue());
        // We don't call setHead here, we set the head directly
        head = newHead;
        if (head == nullptr) {
            // We're at 0 items, so we need to delete the tail pointer
            tail = nullptr;
        }
        // Set the delete result to true
        deleteResult = true;
    }
    return deleteResult;
}

/****************************************************
** Description: Deletes the last item in the list.
** Returns true if the item was deleted. This really
** only returns false if the list is empty.
****************************************************/

bool DoubleLinkedList::deleteTail() {
    bool deleteResult = false;
    Node* t = getTail();
    Node* newTail = nullptr;
    if (t != nullptr) {
        newTail = t->getPrev();
        deleteNodeByValue(t->getValue());
        // We don't call setTail here, we set the tail directly
        tail = newTail;
        if (tail == nullptr) {
            // We're at 0 items, so we need to delete the head
            head = nullptr;
        }
        // Set the delete result to true
        deleteResult = true;
    }
    return deleteResult;
}

/****************************************************
** Description: Prints a single item from the list.
** Takes a pointer to the item to print.
****************************************************/

void DoubleLinkedList::printItem(Node *item) {
    if (item != nullptr) {
        cout << item->getValue() << endl;
    }
}

/****************************************************
** Description: Prints the list from head to tail.
****************************************************/

void DoubleLinkedList::printList() {
    Node* n = getHead();
    // Print a message if the list is empty
    if (n == nullptr) {
        cout << "This list is empty." << endl;
    }
    while(n != nullptr) {
        // Print the value
        printItem(n);
        // Move on to the next
        n = n->getNext();
    }
}

/****************************************************
** Description: Returns the first item in the list.
****************************************************/

Node *DoubleLinkedList::getHead() {
    return head;
}

/****************************************************
** Description: Returns the last item in the list.
****************************************************/

Node *DoubleLinkedList::getTail() {
    return tail;
}

/****************************************************
** Description: Private function to set the first
** item in the list. Takes a pointer to the new
** head.
****************************************************/

void DoubleLinkedList::setHead(Node *n) {
    if (n != nullptr) {
        // Set next of the new head to the old head if one exists
        n->setNext(head);
        // Set the new head's prev pointer to null in its new position
        n->setPrev(nullptr);
    }
    if (head != nullptr) {
        // Set prev pointer of head to the new node (or nullptr)
        head->setPrev(n);
    }
    head = n;
}

/****************************************************
** Description: Private function to set the last
** item in the list. Takes a pointer to the new
** tail.
****************************************************/

void DoubleLinkedList::setTail(Node *n) {
    if (n != nullptr) {
        // Set the prev pointer to point to the old tail if one exists
        n->setPrev(tail);
        // Set the new tail's next pointer to null in its new position
        n->setNext(nullptr);
    }
    if (tail != nullptr) {
        // Set the next pointer of the old tail to the new tail
        tail->setNext(n);
    }
    tail = n;
}

/****************************************************
** Description: Private function to delete a single
** item from the list. Takes a pointer to the item
** to delete. Does NOT reset head and tail. Returns
** false for an empty list
****************************************************/

bool DoubleLinkedList::deleteNodeByValue(int val) {
    // Variable for result
    bool deleteResult = false;
    // Keep track of the current node and the prev node
    Node* nodePtr = nullptr;
    Node* prevNodePtr = nullptr;
    // Don't do anything if we're dealing with an empty list
    if (getHead() != nullptr) {
        // Initialize nodePtr to head
        nodePtr = getHead();
        while (nodePtr != nullptr && nodePtr->getValue() != val) {
            // Set the prev pointer to the current pointer
            prevNodePtr = nodePtr;
            // Set the current pointer to the next one
            nodePtr = nodePtr->getNext();
        }
        // See if there's a matching node to delete
        if (nodePtr != nullptr) {
            // Set the prev pointer of the next item in the list to the one before the item to be deleted
            Node* newNext = nullptr;
            newNext = nodePtr->getNext();
            if (newNext != nullptr) {
                newNext->setPrev(prevNodePtr);
            }
            // Set the next pointer of the previous item in the list to the one after the item to be deleted
            if (prevNodePtr != nullptr) {
                prevNodePtr->setNext(nodePtr->getNext());
            }
            // Delete the item
            delete nodePtr;
            // Set the result to true
            deleteResult = true;
        }
    }

    return deleteResult;
}

/****************************************************
** Description: Private function to delete a single
** item from the list. Takes a pointer to the item
** to delete. Resets the head and tail accordingly.
** Returns false for an empty list. [NONFUNCTIONAL]
****************************************************/

//void DoubleLinkedList::deleteNode(Node *garbage) {
//    if (garbage != nullptr) {
//        // Check to see if we need to reset the head
//        if (getHead() == garbage) {
//            setHead(garbage->getNext());
//        }
//        // Check to see if we need to reset the tail
//        if (getTail() == garbage) {
//            setTail(garbage->getPrev());
//        }
//        // Delete the node
//        delete garbage;
//    }
//    // If we're left with one item, the head or tail will need to be reset
//    if (getHead() == nullptr) {
//        // Set the head to the tail
//        setHead(getTail());
//    }
//    if (getTail() == nullptr) {
//        // Set the tail to the head
//        setTail(getHead());
//    }
//}