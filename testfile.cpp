#include <iostream>
#include <vector>
#include <string>
#include "Course.h"
using namespace std;

int main(){
    cout<<"******** Course Schedule ********"<<endl;
    Course c1("空间信息可视化");
    Course c2("物联网技术与应用");
    vector<int>weeks2{1,2,3,4,5,6,7,8};
    c2.setWeeks(weeks2);
    c2.setTime(Second);
}