//
//  main.cpp
//  Homework4B
//
//  Created by Drew Sears on 6/6/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//11.3

#include <iostream>
using namespace std;
int *doubleCapacity(const int*, int size);
int main()
{
    

    
    
}

int *doubleCapacity(const int*, int size){
    int *doubleArray = new int [size];
    for (int i = 0; i<size; i++) {
        doubleArray[i] = 2;
    }
    return doubleArray;
}

//dont know if this is what you are looking for.

