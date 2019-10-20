/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "NameNode.h"

NameNode::NameNode() {
    name = "";
    age = 0;
}

NameNode::NameNode(string name, int age) {
    this->name = name;
    this->age = age;
}

void NameNode::printdata() {
    std::cout << "Name: " << name << " Age: " << age << std::endl;
}

NameNode* NameNode::getNext() {
    return next;
}

void NameNode::setNext(NameNode* node) {
    next = node;
}

void NameNode::setAge(int new_age) {
    age = new_age;
}

int NameNode::getAge() const {
    return age;
}

void NameNode::setName(string new_name) {
    name = new_name;
}

string NameNode::getName() const {
    return name;
}