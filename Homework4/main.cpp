//
//  main.cpp
//  Homework4
//
//  Created by Drew Sears on 6/5/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#include <iostream>
using namespace std;



int main()
{
    int sum=0;
    int average=0;
    cout << "Enter array size" << endl;
    int arraySize;
    cin>>arraySize;
    int array[arraySize];
    
    for (int i =0; i<arraySize; i++) {
        cout<< "Enter the integers" << endl;
        cin >> array[i];
        average= *(sum+ array);
        
    }
    
    
    
    
    cout << "The average is: " << average << endl;;
    if (sum >= average) {
        cout << array << " was greater than the average" << endl;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    
    
    
   
}

