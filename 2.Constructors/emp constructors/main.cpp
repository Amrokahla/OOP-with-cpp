#include <iostream>
#include <string.h>

using namespace std;

class emp{
    int id;
    char name[30];
    int age;

public:
    emp(){
        id = 0;
        strcpy(name,"No Name");
        age = 30;
    }
    emp(int _id, char _name[]){
        id = _id;
        strcpy(name,_name);
        age = 30;
    }
    emp(int _id, char _name[], int _age){
        id = _id;
        strcpy(name,_name);
        age = _age;
    }
    ~emp(){
        printf("Obj deleted");}
    void setId(int _id){
        id = _id;}
    void setName(char _name[]){
        strcpy(name,_name);}
    void setAge(int _age){
        age = _age;}
    int getId(){
        return id;}
    int getAge(){
        return age;}
    char* getName(){
        return name;}
    void print(){
        cout<<id<<" : "<<name<< " : "<<age<<endl;
    }
};

int main()
{
    emp e1 = {1,"amr",25};
    emp e2 = {2,"aly"};
    emp e3;
    e1.print();
    e2.print();
    e3.print();

    return 0;
}
