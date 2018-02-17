/****************************************************
** Author: Jessica Speigel
** Assignment: CS162 cs162_lab_6
** Date: 02/16/2018
** Description: Implementation for Node class.
****************************************************/
#include "Node.hpp"

Node::Node(int val, Node *next, Node *prev) {
    setValue(val);
    setNext(next);
    setPrev(prev);
}

Node::Node(int val) {
    setValue(val);
    setNext(nullptr);
    setPrev(nullptr);
}

int Node::getValue() {
    return val;
}

void Node::setValue(int val) {
    this->val = val;
}

Node* Node::getNext() {
    return this->next;
}

void Node::setNext(Node *next) {
    this->next = next;
}

Node* Node::getPrev() {
    return this->prev;
}

void Node::setPrev(Node *prev) {
    this->prev = prev;
}
