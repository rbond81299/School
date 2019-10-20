/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NameNode.h
 * Author: hloi
 *
 * Created on October 15, 2019, 12:56 PM
 */

#ifndef NAMENODE_H
#define NAMENODE_H
#include <string>
#include <iostream>

using std::string;
        
class NameNode {
public:
    NameNode();  // default constructor
    NameNode(string name, int age);  // set name and age constructor
    void printdata();  // print out name and age.  One line each
    NameNode* getNext(); // return the next pointer
    void setNext(NameNode* node);
    void setAge(int age);
    int getAge() const;
    void setName(string name);
    string getName() const;  // set next pointer to the node
private:
    string name;  // name  <= template type
    int age;   // age  <== template type
    NameNode* next;  // next pointer
    

};

#endif /* NAMENODE_H */

