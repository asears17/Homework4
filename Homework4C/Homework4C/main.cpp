//
//  main.cpp
//  Homework4C
//
//  Created by Drew Sears on 6/6/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#include <iostream>
using namespace std;
int findTheSmallest();
int main()
{
    findTheSmallest();
    
}

int findTheSmallest(){
    
    int array[8]={1,2,3,4,5,10,2,-22};
    int smallest= array[8];
    for (int i = 1; i<8; i++) {
        if (array[i]< smallest){
            smallest= array[i];
        }
    }
    cout << "Smallest Number is: " << smallest << endl;;

    return smallest;
}

//outputs smallest numer is: 2
//then it correctly says smallest number is -22