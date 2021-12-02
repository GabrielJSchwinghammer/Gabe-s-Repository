
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
#include "Robot.h"
using namespace std;


int Robot::GetSerial(){
   return Serial;
}

int Robot::GetTask(){
   return Task;
}

int Robot::GetAvailability(){
   return Availability;
}

void Robot::SetSerial(int s){
     Serial = s+1000;
}

void Robot::SetTask(int t){

    Task = intTasks.at(t);

};




void Robot:: SetAvailability(bool a){
    Availability = a;


};

