//
//  main.cpp
//  dataStructures
//
//  Created by Ben Nelson on 4/22/19.
//  Copyright © 2019 Ben Nelson. All rights reserved.
//

#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
    /*
     I want a solid understanding of:
        Linked Lists
        Trees,Tries, and Graphs
        Stacks and Queues
        Heaps
        Vectors/ArrayLists
        Hash Tables
     */
    cout << "started\n";

    //Make list 0 to 9
    LinkedList<int> *list_ptr = new LinkedList<int>();
    for(int i = 0; i < 10; i++){
        list_ptr->insertTail(i);
    }
    
    //insert 10 after 6
    list_ptr->insertAfter(6, 3000);
    list_ptr->insertAfter(6, 2000);
    
    list_ptr->remove(2000);
    list_ptr->remove(0);
    list_ptr->remove(9);
    list_ptr->remove(39);
    
    int size = list_ptr->size();
    cout <<"\n"<<size<<"\n";
    
    list_ptr->clear();
    
    size = list_ptr->size();
    cout <<"\n"<<size<<"\n";
    
    
    
    

    int y = 0;
    if(y ==0){
        
        cout<<"yp";
    }
    
    
    
    

    return 0;
};
