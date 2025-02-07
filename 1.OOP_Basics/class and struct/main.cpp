#include <iostream>
#include <string.h>

using namespace std;

class cemp{
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

struct semp{

    private:
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
        if(_age > 25)
            age = _age;
        else
            cout<<"invalid";
    }

    int get_id(){
        return id;}

    int get_age(){
        return age;}

    char* get_name(){
        return name; }


};


int main()
{
    cemp ce;
    ce.set_id(10);
    ce.set_name("amr");
    ce.set_age(25);
    cout <<"class: "<<ce.get_id()<<" : "<<ce.get_name()<<" : "<<ce.get_age()<< endl;

    semp se;
    se.set_id(20);
    se.set_name("Mohamed");
    se.set_age(30);
    cout <<"struct: "<<se.get_id()<<" : "<<se.get_name()<<" : "<<se.get_age()<< endl;
    return 0;
}
