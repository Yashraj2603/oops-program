#include<iostream>
using namespace std;
class Employee
{
    public:
    string name,depart;
    int id;
    char block;
    void insert()
    { 
        cout<<"Enter details with 1>name 2>id 3>department 4> block";
        cin>>name>>id>>depart>>block;
    }
    void display()
    {
        cout<<"Employee name-"<<name<<"\n"<<"id-"<<id <<"\n"<<"department-"<<depart<<" \n"<<"Building block-"<<block<<endl;
    }

};
int main()
{
    Employee b;
    b.insert();
    b.display();
    return 0;
}