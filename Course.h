#ifndef COURSE_H
#define COURSE_H
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

enum Duration{
    First,
    Second,
    Third,
    Forth,
    Fifth,
    Sixth
};
enum WeekDay{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thirsday,
    Friday,
    Saturday
};

class Course{
private:
    string name;
    Duration time;
    WeekDay day;
    string position;
    vector<int>schedule;
public:
    Course(string n):name(n){}
    void setTime(Duration s);
    void setWeeks(vector<int>& weeks);
    void setWeekday(WeekDay d){
        day=d;
    }
    void setPosition(string p){
        position=p;
    }
    WeekDay getWeekday(){
        return day;
    }
    Duration getDuration(){
        return time;
    }
    bool Check(int week){
        for(vector<int>::iterator it=schedule.begin();it!=schedule.end();it++){
            if(*it==week)return true;
        }
        return false;
    }
};
bool cmp(Course c1,Course c2){
    return c1.getWeekday()>c2.getWeekday();
}
bool cmp2(Course c1,Course c2){
    return c1.getDuration()>c2.getDuration();
}

void Course::setTime(Duration s){
    time=s;
}
void Course::setWeeks(vector<int>& weeks){
    for(vector<int>::iterator it=weeks.begin();it!=weeks.end();it++){
        schedule.push_back(*it);
    }
}
#endif