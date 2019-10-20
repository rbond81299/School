/* Copyright 2019
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newCxxTest.h
 * Author: rob
 *
 * Created on January 26, 2018, 3:52 PM
 */

#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
#include "NameList.h"
#include "NameNode.h"
#include "NameNode.cpp"


class newCxxTest : public CxxTest::TestSuite {
public:
    //All tests should start with the word 'test' followed by
    //the name of the function being tested.
        
    void test_push() {
        NameList names;
        NameNode* node1 = new NameNode("adam", 20);
	names.push_front(node1);
        NameNode* node2 = new NameNode("jerry", 21);
	names.push_front(node2);
        
        TS_ASSERT_EQUALS(names.getHead()->getName(),"jerry");
        TS_ASSERT_EQUALS(names.getHead()->getAge(),21);
        
    }
    
    void test_push_front() {
        NameList names;
        NameNode* node1 = new NameNode("adam", 20);
	names.push_back(node1);
        NameNode* node2 = new NameNode("jerry", 21);
	names.push_back(node2);
        
        TS_ASSERT_EQUALS(names.getTail()->getName(),"jerry");
        TS_ASSERT_EQUALS(names.getTail()->getAge(),21);
        
        
    }
    
    void test_set_get_tail() {
        NameList names1;
        NameNode* node1 = new NameNode("adam", 20);
	names1.setHead(node1);
        TS_ASSERT_EQUALS(names1.getHead(),node1);
        
        NameList names2;
        NameNode* node2 = new NameNode("adam", 20);
	names2.setTail(node2);
        TS_ASSERT_EQUALS(names2.getTail(),node2);
        
        
    }
    
    
    
    
    };
#endif /* NEWCXXTEST_H */

