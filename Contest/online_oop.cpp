#include<iostream>
#include<cstring>
using namespace std;
class Student;

class Teacher
{
    char *name;
    char *dept;
public:
    Teacher(char *p,char* q)
    {
        name=new char[strlen(p)+1];
        strcpy(name,p);
        dept=new char[strlen(q)+1];
        strcpy(dept,q);
        cout<<"Constructing "<<name<<" "<<dept<<endl;
    }
    Teacher(const Teacher &ob)
    {
        name=new char[strlen(ob.name)+1];
        strcpy(name,ob.name);
        dept=new char[strlen(ob.dept)+1];
        strcpy(dept,ob.dept);
        cout<<"Copy Constrcuting..."<<name<<" "<<dept<<endl;
    }
    ~Teacher()
    {
        cout<<"destucting...."<<name<<" "<<dept<<endl;
        delete [] name;
        delete [] dept;
    }
    void compare(Student s1);
    //friend void show(Student s1,Teacher t1);
    //friend void Student::compare(Teacher t);
};




class Student
{
    char *name;
    char *dept;
public:
    Student(char* p,char *q)
    {
        name=new char[strlen(p)+1];
        strcpy(name,p);
        dept=new char[strlen(q)+1];
        strcpy(dept,q);
        cout<<"Constructing "<<name<<" "<<dept<<endl;
    }
    Student(const Student &ob)
    {
        name=new char[strlen(ob.name)+1];
        strcpy(name,ob.name);
        dept=new char[strlen(ob.dept)+1];
        strcpy(dept,ob.dept);
        cout<<"Copy Constrcuting..."<<name<<" "<<dept<<endl;
    }
    ~Student()
    {
        cout<<"destucting...."<<name<<" "<<dept<<endl;
        delete [] name;
        delete [] dept;
    }
    //void compare(Teacher t);
    //friend void show(Student s1,Teacher t1);
    friend void Teacher::compare(Student s1);
};

void Teacher::compare(Student s1)
{
    if(strcmp(s1.dept,dept)==0)
    {
        cout<<"SAME DEPT "<<name<<" "<<s1.name<<endl;
    }
}
/*void Student::compare(Teacher t)
{
    if(strcmp(t.dept,dept)==0)
    {
        cout<<"SAME DEPT "<<name<<" "<<t.name<<endl;
    }
}*/
/*void show(Student s1,Teacher t1)
{
    cout<<strcmp(s1.dept,t1.dept)<<endl;
    if(strcmp(s1.dept,t1.dept)==0)
    {
        cout<<"SAME DEPT "<<s1.name<<" "<<t1.name<<endl;
    }
}*/
int main()
{
    Student s1("Kazi","CSE");
    Teacher t1("Lec. Anik","CSE");
    //show(s1,t1);
    //s1.compare(t1);
    t1.compare(s1);
}

