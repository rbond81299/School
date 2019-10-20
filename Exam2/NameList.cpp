/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "NameList.h"
#include <cstddef>


//#include "NameList.cpp"


NameList::NameList() {
    head = NULL;
    tail = NULL;
}



NameList::~NameList() {
    NameNode* temp = getHead();
    while(temp != NULL) {
        NameNode* next = temp->getNext();
        //temp->printdata();
        delete temp;
        temp = next;
    }
}




void NameList::push_front(NameNode* node) {
    if (getHead() == NULL){
        setHead(node);
        setTail(node);
    }
    NameNode* temp = new NameNode();
    temp->setAge(node->getAge());
    temp->setName(node->getName());
    temp->setNext(getHead());
    setHead(temp);
}


void NameList::push_back(NameNode* node) {
    if (getTail() == NULL){
        setTail(node);
        setHead(node);
        return;
    }
    NameNode* temp = new NameNode();
    NameNode* active = getHead();
    temp->setAge(node->getAge());
    temp->setName(node->getName());
    temp->setNext(NULL);
    while(active->getNext() != NULL){
        active = active->getNext();
    }
    active->setNext(temp);
    setTail(temp);
}


void NameList::print() {
    NameNode* temp = getHead();
    while(temp != NULL) {
        temp->printdata();
        temp = temp->getNext();
    }
}


void NameList::setTail(NameNode* node) {
    tail = node;
}



NameNode* NameList::getTail() const {
    return tail;
}


void NameList::setHead(NameNode* node) {
    head = node;
}



NameNode* NameList::getHead() const {
    return head;
}






