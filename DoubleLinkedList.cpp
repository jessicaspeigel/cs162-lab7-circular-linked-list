/****************************************************
** Author: Jessica Speigel
** Assignment: CS162 cs162_lab_6
** Date: 02/16/2018
** Description: Implementation for DoublyLinkedList class.
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

void DoubleLinkedList::addToHead(int val) {
    // This constructor instantiates with next and prev set to nullptr
    Node* n = new Node(val);
    // Set a pointer to the current head
    Node* h = getHead();
    // Set next if there's a head
    if (h != nullptr) {
        n->setNext(h);
    }
    // Set a pointer to the current head
    Node* t = getTail();
    // Set the tail if none exists
    if (t == nullptr) {
        setTail(n);
    }
    setHead(n);
}

void DoubleLinkedList::addToTail(int val) {

}

void DoubleLinkedList::deleteHead() {

}

void DoubleLinkedList::deleteTail() {

}

void DoubleLinkedList::printItem(Node *item) {

}

void DoubleLinkedList::printList() {
    Node* n = getHead();
    while(n != nullptr) {
        // Print the value
        cout << n->getValue() << endl;
        // Move on to the next
        n = n->getNext();
    }
}

Node *DoubleLinkedList::getHead() {
    return head;
}

Node *DoubleLinkedList::getTail() {
    return tail;
}

void DoubleLinkedList::setHead(Node *n) {
    head = n;
}

void DoubleLinkedList::setTail(Node *n) {
    tail = n;
}
