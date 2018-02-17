/****************************************************
** Author: Jessica Speigel
** Assignment: CS162 cs162_lab_6
** Date: 02/16/2018
** Description: These functions drive the Linked
** List operations chosen from the menu in main().
****************************************************/
#ifndef CS162_LAB_6_DRIVERFUNCTIONS_HPP
#define CS162_LAB_6_DRIVERFUNCTIONS_HPP

#include "DoubleLinkedList.hpp"

void addNewHeadNode(DoubleLinkedList *list);

void addNewTailNode(DoubleLinkedList *list);

void deleteHeadNode(DoubleLinkedList *list);

void deleteTailNode(DoubleLinkedList *list);

void reverseTraverseList(DoubleLinkedList *list);

void printHeadValue(DoubleLinkedList *list);

void printTailValue(DoubleLinkedList *list);

void createLinkedListFromFile();

#endif //CS162_LAB_6_DRIVERFUNCTIONS_HPP
