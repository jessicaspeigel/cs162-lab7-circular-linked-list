/****************************************************
** Author: Jessica Speigel
** Assignment: CS162 cs162_lab_6
** Date: 02/16/2018
** Description: Declaration for Node class.
****************************************************/

#ifndef CS162_LAB_6_NODE_HPP
#define CS162_LAB_6_NODE_HPP


class Node {

private:
    int val;
    Node* next;
    Node* prev;

public:
    Node(int val, Node* next, Node* prev);
    Node(int val);
    int getValue();
    void setValue(int val);
    Node* getNext();
    void setNext(Node *next);
    Node* getPrev();
    void setPrev(Node *prev);


};

#endif //CS162_LAB_6_NODE_HPP
