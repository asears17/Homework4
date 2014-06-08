//
//  main.cpp
//  Homework4E
//
//  Created by Drew Sears on 6/6/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#include <iostream>
#include "Course.h"
using namespace std;

int main()
{
    Course course1("Data Structures", 10);
    Course course2("Database Systems", 15);
    
    course1.addStudent("Peter John");
    course1.addStudent("Brian Smith");
    course1.addStudent("Anne Kennedy");
    
    
    course2.addStudent("Peter Jones");
    course2.addStudent("Steve Smith");
    
    cout << "Number of students in course1" << course1.getNumberOfStudents() << endl;
    string* students = course1.getStudents();
    for (int i=0; i<course1.getNumberOfStudents(); i++)
        cout << students[i] << " ,";
    cout << "\n Number of Students in course2: " << course2.getNumberOfStudents() << endl;
    students= course2.getStudents();
    for (int i=0; i<course2.getNumberOfStudents(); i++)
        cout << students[i] << " , ";
    return 0;
    
    
}

