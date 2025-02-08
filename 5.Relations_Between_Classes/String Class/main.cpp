#include <iostream>
#include <string.h>

using namespace std;

class String{
    int size;
    char *str;
public:
    String(){
        size = 10;
        str = new char[size];
    }
    String(int _size){
        size = _size;
        str = new char[size];
    }
    String(char *_str){
        size = strlen(_str) + 10;
        str = new char[size];
        char ch = _str[0];
        int i=0;
        while(_str[i] != '\0'){
            str[i] = _str[i];
            i++;}
        str[i] = '\0';
    }
    String(String &s){
        size = s.size;
        str = new char[size];
        strcpy(str,s.str);
    }
    ~String(){
        delete[] str;}

    void setStr(char *_str){
        delete[] str;
        size = strlen(_str) + 1;
        str = new char[size];
        char ch = _str[0];
        strcpy(str,_str);
    }
    int getSize(){
        return size;}
    char* getStr(){
        return str;}
    void print(){
        cout<<str<<endl;}
    String operator= (const String &s){
        delete[] str;
        size = s.size;
        str = new char[size];
        strcpy(str,s.str);
        return *this;
    }
    String operator+ (const String &s){
        String res(size + s.size);
        strcpy(res.str,str);
        strcat(res.str,s.str);
        return res;
    }
};

int main()
{
    String s1;
    String s2(15);
    String s3("Amr");
    cout<<s1.getSize()<<endl;
    cout<<s2.getSize()<<endl;
    cout<<s3.getSize()<<endl;
    cout<<s3.getStr()<<endl;
    s2.setStr("ahmed");
    cout<<s2.getSize()<<endl;
    cout<<s2.getStr()<<endl;
    String s4 = s3;
    cout<<s4.getSize()<<endl;
    cout<<s4.getStr()<<endl;
    String s5(" Mohamed");
    String s6;
    s6 = s4 + s5;
    s6.print();
    return 0;
}
