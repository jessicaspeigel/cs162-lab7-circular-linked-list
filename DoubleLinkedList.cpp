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

}

void DoubleLinkedList::addToHead(int val) {
    Node* n;
    if (head == nullptr) {
        n = new Node(val, nullptr, nullptr);
    } else {
        n = new Node(val, head->next, nullptr);
    }
    head = n;
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
    Node *p = head;
    while (p != nullptr) {
        cout << p->val << endl;
        p = p->next;
    }
}

Node *DoubleLinkedList::getHead() {
    return head;
}

Node *DoubleLinkedList::getTail() {
    return tail;
}