#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>

#include "Robot.cpp"



#ifndef ROBOTCLASS_H_INCLUDED
#define ROBOTCLASS_H_INCLUDED
using namespace std;

int TaskSort(string T){

    vector<string> stringTasks;

    stringstream ss(T);
    while (ss.good()){
            string subt;
            getline(ss, subt, ',');
            stringTasks.push_back(subt);
      }
    for (int i = 0; i < stringTasks.size(); ++i){
        stringstream s(stringTasks.at(i));
        int x = 0;
        s >> x;
        intTasks.push_back(x);
    }


};

void TaskAllocation(Robot robots[]){
   int choice = 1;
   int AssignedTask;
   int serial;
   int avail;
   int prrob;
   bool e;
   while (choice > 0){
        e = false;
        cout << "Do you have a task? ";
        cin >> choice;
        for (int i = 0; i < RobotAmount && e == false ; ++i){

            AssignedTask = robots[i].GetTask();
            if (AssignedTask == choice){
                if(robots[i].GetAvailability() == true){
                    robots[i].SetAvailability(false);
                    prrob = robots[i].GetSerial();
                    cout << "I have allocated robot " << prrob <<" to task " << choice << endl;
                    e = true;
                }
            };
        };
        if (e == false){
                cout << "Sorry I do not have any more robots that can do task " << choice << endl;
        }
   }
}


int main() {
   vector<int> intTasks;


   string tasks;
   vector<string> v;



   cout << "WELCOME TO THE LUNAR ROBOT SWARM TASK ALLOCATION PROGRAM!" << endl;
   cout << "How many robots do you have: ";
   cin >> RobotAmount;

   cout<<"Please enter with comma separation the tasks (ranging from 1 - 10) that the " << RobotAmount <<" robots are capable of doing: ";
   cin >> tasks;
   TaskSort(tasks);

   Robot robots[RobotAmount];
   for (int i = 0; i < RobotAmount; ++i){
       robots[i].SetSerial(i);
       robots[i].SetAvailability(1);
       robots[i].SetTask(i);

    }
    cout << "THE TASK ALLOCATION WILL NOW START .... YOU CAN STOP THE PROGRAM ANYTIME BY ENTERING A NEGATIVE NUMBER OR ZERO" << endl;
    TaskAllocation(robots);




   return 0;

}




#endif




