/****************************************************
** Author: Jessica Speigel
** Assignment: CS162 cs162_lab_6
** Date: 02/16/2018
** Description: Declaration for Node class.
****************************************************/

#ifndef CS162_LAB_6_NODE_HPP
#define CS162_LAB_6_NODE_HPP


class Node {

public:
    Node(int val, Node* next, Node* prev);
    int val;
    Node* next;
    Node* prev;

};

#endif //CS162_LAB_6_NODE_HPP
