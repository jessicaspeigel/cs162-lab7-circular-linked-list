/****************************************************
** Author: Jessica Speigel
** Assignment: CS162 cs162_lab_6
** Date: 02/16/2018
** Description: Declaration for DoublyLinkedList class.
****************************************************/

#ifndef CS162_LAB_6_DOUBLYLINKEDLIST_HPP
#define CS162_LAB_6_DOUBLYLINKEDLIST_HPP

#include "Node.hpp"

class DoubleLinkedList {

private:
    Node* head;
    Node* tail;

public:
    DoubleLinkedList();
    ~DoubleLinkedList();
    void addToHead(int val);
    void addToTail(int val);
    void deleteHead();
    void deleteTail();
    void printItem(Node* item);
    void printList();
    Node* getHead();
    Node* getTail();

};


#endif //CS162_LAB_6_DOUBLYLINKEDLIST_HPP
