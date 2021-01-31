/*defining different types of variables and functions into single unit
called class 
Feature of OOP*/
#include<iostream>
#include<conio.h>

using namespace std;

class stu
{
    int id;
    char name[20];

    public:
   void getdata();
   void putdata();
};
void stu::getdata()
{
    std::cout<<"Enter id, name=";
    std::cin>>id>>name;
}
void stu::putdata()
{
    std::cout<<"id="<<id<<std::endl;
    std::cout<<"Name="<<name;
}
int main()
{
    stu s;
    s.getdata();
    s.putdata();
    getch();
}