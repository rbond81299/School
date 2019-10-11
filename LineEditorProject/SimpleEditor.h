/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SimpleEditor.h
 * Author: Rob
 *
 * Created on October 4, 2019, 4:14 PM
 */

#ifndef SIMPLEEDITOR_H
#define SIMPLEEDITOR_H
#include <stddef.h>

template<typename Item_Type>
class SimpleEditor {
private:
    #include "DNode.h"
public:
    SimpleEditor();
    SimpleEditor(const SimpleEditor& orig);
    virtual ~SimpleEditor();
    void insertStart(Item_Type s);
    void insertEnd(Item_Type s);
    void display();
    void display(int lineNum);
private:
    bool hasModified;
    int size;
    int curPos;
    struct DNode* start;  
};

#endif /* SIMPLEEDITOR_H */

