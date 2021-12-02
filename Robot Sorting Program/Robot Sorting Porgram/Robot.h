
#ifndef ROBOTCLASSHEADER_H_INCLUDED
#define ROBOTCLASSHEADER_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
vector<int> intTasks;
int RobotAmount;

class Robot {
   public:
      int GetSerial();
      int GetTask();
      int GetAvailability();
      void SetSerial(int s);
      void SetTask(int t);
      void SetAvailability(bool a);



   private:

      int Serial;
      int Task;
      int Availability;

};

#endif // ROBOTCLASSHEADER_H_INCLUDED

