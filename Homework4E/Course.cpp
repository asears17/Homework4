//
//  Course.cpp
//  Homework4E
//
//  Created by Drew Sears on 6/7/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#include "Course.h"
#include <iostream>
using namespace std;

Course::Course (const string& courseName, int capacity)
{
    numberOfStudents = 0;
    this ->courseName = courseName;
    this ->capacity = capacity;
    students = new string[capacity];
    
}