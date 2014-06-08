//
//  Course.h
//  Homework4E
//
//  Created by Drew Sears on 6/7/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#ifndef Homework4E_Course_h
#define Homework4E_Course_h
#include <string>
using namespace std;
class Course
{
public:
    Course(const string& courseName, int capacity);
    Course();
    string getCourseName()const;
    void addStudent(const string& name);
    void dropStudent(const string& name);
    string* getStudents() const;
    int getNumberOfStudents()const;
    
private:
    string courseName;
    string* students;
    int numberOfStudents;
    int capacity;
};



#endif
