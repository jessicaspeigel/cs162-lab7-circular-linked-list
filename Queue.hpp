/****************************************************
** Author: Jessica Speigel
** Assignment: CS162 cs162_lab_7
** Date: 02/25/2018
** Description: Declaration for Queue class.
****************************************************/

#ifndef CS162_LAB_7_CIRCULARLINKEDLIST
#define CS162_LAB_7_CIRCULARLINKEDLIST

// struct for node
struct QueueNode
{
    int val;
    QueueNode* next;
    QueueNode* prev;
    // Define a constructor
    QueueNode(int v = 0, QueueNode* n = nullptr, QueueNode* p = nullptr)
    {
        val = v;
        next = n;
        prev = p;
    }
};

class Queue {

private:
    QueueNode* head;
    void setHead(QueueNode* n);
    //bool deleteNodeByValue(int val);

public:
    Queue();
    ~Queue();
    void addBack(int val);
    bool removeFront();
    void printItem(QueueNode* item);
    void printList();
    QueueNode* getHead();
    int getFront();
    void clearList();
    bool isEmpty();

};


#endif //CS162_LAB_7_CIRCULARLINKEDLIST
