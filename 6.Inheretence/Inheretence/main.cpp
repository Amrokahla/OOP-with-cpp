#include <iostream>
#include <string.h>

using namespace std;

class Person{
protected:
    int id;
    int age;
    char name[30];
public:
    Person(){
        id =0;
        age = 0;
        strcpy(name,"no name");
    }
    Person(int _id){
        id =_id;
        age = 0;
        strcpy(name,"no name");
    }
    Person(int _id, char *_name, int _age){
        id = _id;
        strcpy(name,_name);
        age = _age;}
    void setID(int _id){
        id = _id;}
    void setName(char *_name){
        strcpy(name ,_name);}
    void setAge(int _age){
        age = _age;}
    int getID(){
        return id;}
    int getAge(){
        return age;}
    char* getName(){
        return name;}
    void print(){
        cout<<"person "<<id<<":"<<name<<":"<<age<<endl;}
};

class emp : public Person
{
    int salary;
public:
    emp(){
        salary = 6000;}
    emp(int _salary){
        salary = _salary;}
    emp(int _id, char* _name, int _age , int _salary) : Person(_id, _name, _age)
        {
        salary = _salary;}
    void setSalary(int _salary){
        salary = _salary;}
    int getSalary(){
        return salary;}
    void print(){
        Person::print();
        cout<<"employee "<<salary<<endl;}
};

class student : public Person
{
    int grade;
public:
    student(){
        grade = 6000;}
    student(int _grade){
        grade = _grade;}
    student(int _id, char* _name, int _age , int _grade) : Person(_id, _name, _age)
        {
        grade = _grade;
        }
    void setSalary(int _grade){
        grade = _grade;}
    int getSalary(){
        return grade;}
    void print(){
        Person::print();
        cout<<"employee "<<grade<<endl;}
};

void display(Person& p){
    p.print();
}

int main()
{
    Person p1(1,"Amr",25);
    emp e1(2,"Hamed",18,150);
    student s1(3,"Waleed",17,36);
    display(p1);
    display(s1);
    display(e1);
    return 0;
}
