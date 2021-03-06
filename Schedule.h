#ifndef SCHEDULE_H
#define SCHEDULE_H
#include "Course.h"
using namespace std;
class Schedule{
private:
    vector<Course>table;
    vector<vector<Course>>buffer;
public:
    void Insert(string name,Duration time,string position,vector<int>& schedule);
    void Sort();
    void Show();
    void encodeToFile();
protected:
    void readFromFile();
};

void Schedule::Insert(string name,Duration time,string position,vector<int>& schedule){
    Course c(name);
    c.setTime(time);
    c.setWeeks(schedule);
    c.setPosition(position);
}
#endif