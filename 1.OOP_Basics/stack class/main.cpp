#include <iostream>
#include <string.h>

class emp{
    int id;
    char name[30];
    int age;

    public:
    void set_id(int _id){
        id = _id;
    };

    void set_name(char _name[]){
        strcpy(name,_name);
    }

    void set_age(int _age){
        age = _age;
    }

    int get_id(){
        return id;}

    int get_age(){
        return age;}

    char* get_name(){
        return name; }


};

using namespace std;

int main()
{
    emp ce;
    ce.set_id(10);
    ce.set_name("amr");
    ce.set_age(25);
    cout <<"stack: "<<ce.get_id()<<" : "<<ce.get_name()<<" : "<<ce.get_age()<< endl;

    emp *ptr= new emp;
    ptr ->set_id(20);
    ptr ->set_age(35);
    ptr ->set_name("mohamed");
    cout <<"heap: "<<ptr ->get_id()<<" : "<<ptr ->get_name()<<" : "<<ptr ->get_age()<< endl;
    return 0;
}
