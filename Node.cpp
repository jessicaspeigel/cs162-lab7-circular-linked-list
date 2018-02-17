/****************************************************
** Author: Jessica Speigel
** Assignment: CS162 cs162_lab_6
** Date: 02/16/2018
** Description: Implementation for Node class.
****************************************************/
#include "Node.hpp"

Node::Node(int val, Node *next, Node *prev) {
    this->val = val;
    this->next = next;
    this->prev = prev;
}
