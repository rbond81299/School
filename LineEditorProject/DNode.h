/* Copyright 2019
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DNode.h
 * Author: Rob
 *
 * Created on October 4, 2019, 2:41 PM
 */

#ifndef DNODE_H
#define DNODE_H

/** A DNode is the building block for a double-linked list. */
// template <typename Item_Type>
struct DNode {
    /** A copy of the data */
    Item_Type data;
    /** A pointer to the next DNode */
    DNode* next;
    /** A pointer to the previous DNode */
    DNode* prev;
    DNode(const Item_Type& the_data,
        DNode* prev_val = NULL, DNode* next_val = NULL) :
    data(the_data), next(next_val), prev(prev_val) {}
};




#endif /* DNODE_H */

