#include<bits/stdc++.h>
using namespace std;

class Student{

    public:
    int cls;
   int roll;
   double gpa;

     Student(int cls, int roll, double gpa){
     this->cls=cls;
     this->roll=roll;
     this->gpa=gpa;
     }

};

int main(){
Student anik(10,01,4.5);

cout <<anik.cls <<" "<< anik.roll << " " <<anik.gpa;
return 0;
}