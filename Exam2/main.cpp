/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: hloi
 *
 * Created on October 5, 2019, 12:55 PM
 */

#include <cstdlib>
#include "NameNode.h"
#include "NameList.h"
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    NameList names;
    NameNode* node1 = new NameNode("adam", 20);
    names.push_front(node1);
    NameNode* node2 = new NameNode("jerry", 21);
    names.push_front(node2);
    NameNode* node3 = new NameNode("jean", 22);
    names.push_back(node3);
    NameNode* node4 = new NameNode("jim", 23);
    names.push_back(node4);
    names.print();
    cout << "==================" << endl;
    names.getHead()->printdata();
    names.getTail()->printdata();
    cout << names.getHead()->getName() << endl;
    cout << "==== Call destructor  ====" << endl;  // automatically call destructor
    return 0;
}

