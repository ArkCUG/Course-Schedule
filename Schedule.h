#ifndef SCHEDULE_H
#define SCHEDULE_H
#include "Course.h"
using namespace std;
class Schedule{
private:
    vector<Course>table;
public:
    void Insert(string name,Duration time,string position,vector<int>& schedule);
    void Sort();
};

void Schedule::Insert(string name,Duration time,string position,vector<int>& schedule){
    Course c(name);
    c.setTime(time);
    c.setWeeks(schedule);
    c.setPosition(position);
}
#endif