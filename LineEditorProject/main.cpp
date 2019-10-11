/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Rob
 *
 * Created on October 4, 2019, 4:12 PM
 */

#include <cstdlib>
#include "SimpleEditor.h"
#include "SimpleEditor.cpp"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string i;
    cout << "Please enter an integer value: ";
    getline(cin,i);
    cout << "The value you entered is " << i;
    string choice;
    cout << "Welcome to my line editor" << endl;
    while(true){
        cout << ">";
        cin >> choice;
        cout << endl;
        char choice_1 = choice.at(0);
        switch(choice_1){
            case 'a':
                cout << "you chose a!" << endl;
                break;
            case 'i':
                break;
            case 'e':
                break;
            case 'd':
                break;
            case 'p':
                cout << "you chose p!" << endl;
                break;
            case '+':
                break;
            case '-':
                cout << "you chose -!" << endl;
                break;
            case'f':
                break;
            case 'r':
                break;
            case 'q':
                break;
            default:
                break;
        }
    }
    
    
    return 0;
}

