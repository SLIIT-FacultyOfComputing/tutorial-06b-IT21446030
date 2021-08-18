#include "Student.h"
#include <iostream>
#include <string.h>
using namespace std;

void Student::assignDetails(int id,char Sname[]) 
{
  studentId = id;
  strcpy(name,Sname);
}

void Student::display()
{
  cout << "Student id:"<<studentId<<endl;
  cout << "Student Name:"<<name<<endl;
  
}
