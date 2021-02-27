#ifndef COURSE_H
#define COURSE_H
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

class Course{
private:
    string name;
    vector<pair<int,string>>schedule;
public:
    Course(string n):name(n){}
};

#endif