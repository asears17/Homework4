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
    int numOverAv= 0;
    int sum =0;
    int average=0;
    int array[4]= {4,17,23,6};
    for (int i =0; i<4; ++i) {
        sum += array[i];
        average = sum/4;
    
}
    
     cout <<"Average of the array is: " << average << ", Numbers over the average are: " << endl;//figure out how to say over average

}

