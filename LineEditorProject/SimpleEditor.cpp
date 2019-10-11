/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SimpleEditor.cpp
 * Author: Rob
 * 
 * Created on October 4, 2019, 4:14 PM
 */

#include "SimpleEditor.h"

#include <iostream>

template<typename Item_Type>
SimpleEditor<Item_Type>::SimpleEditor() {
    start = NULL;
    size = 0;
}

template<typename Item_Type>
SimpleEditor<Item_Type>::SimpleEditor(const SimpleEditor& orig) {
}

template<typename Item_Type>
SimpleEditor<Item_Type>::~SimpleEditor() {
}

template<typename Item_Type>
void SimpleEditor<Item_Type>::display()
{
    if (start == NULL) return;
    struct DNode* temp = start;
    for (int i = 1; i < size; i++)
    {
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }
    std::cout << temp->data << std::endl;
}

template<typename Item_Type>
void SimpleEditor<Item_Type>::display(int lineNum)
{
    size++;
    if (start == NULL) return;
    
    struct DNode* temp = start;
    for (int i = 1; i < lineNum; i++)
    {
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }
    std::cout << temp->data << std::endl;
}

template<typename Item_Type>
void SimpleEditor<Item_Type>::insertStart(Item_Type s)
{
    size++;
    struct DNode* new_node = new DNode(s);
    if (start == NULL)
    {
        new_node->next = new_node;
        new_node->prev = new_node;
        start = new_node;
        return;
    }
    DNode* last = start->prev;
    
    new_node->prev = last;
    new_node->next = start;
    start->prev = new_node;
    last->next = new_node;
    start = new_node;
}

template<typename Item_Type>
void SimpleEditor<Item_Type>::insertEnd(Item_Type s)
{

    struct DNode* new_node = new DNode(s);
    if (start == NULL)
    {
        new_node->next = new_node;
        new_node->prev = new_node;
        start = new_node;
        return;
    }
    DNode* last = start->prev;
    start->prev = new_node;
    last->next = new_node;
    new_node->next = start;
    new_node->prev = last;
}
