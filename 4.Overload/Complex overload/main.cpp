#include <iostream>

using namespace std;

class Complex{
    double real;
    double img;

public:
    Complex (){
        real = 10;
        img = 0;}
    Complex (double _real){
        real = _real;
        img = 0;
    }
    Complex(double _real, double _img){
        real = _real;
        img = _img;}
    void setReal(double _real){
        real = _real;}
    void setImg(double _img){
        img = _img;}
    double getReal(){
        return real;}
    double getImg(){
        return img;}
    void print(){
        if(img == 0){
            cout<<real<<endl;}
        else if (img < 0){
            cout<<real<<img<<"i"<<endl;}
        else
            cout<<real<<"+"<<img<<"i"<<endl;
    }
    Complex operator+ (Complex c){
        Complex res;
        res.img = c.img + img;
        res.real = c.real + real;
        return res;
    }
    Complex operator+ (int n){
        Complex res;
        //res.img = img +n;
        res.real = real +n;
        return res;
    }
    int operator== (Complex c){
        return real==c.real && img==c.img;
    }
    int operator!= (Complex c){
        return !(*this==c);
    }
    Complex operator+= (Complex c){
        real = real +c.real;
        img = img + c.img;
        return *this;
    }
    Complex operator+= (int n){
        real = real +n;
        return *this;
    }
    Complex operator++ (){  // prefix
        real = real +1;
        return *this;
    }
    Complex operator++ (int){  // postfix
        Complex temp = *this;
        real += 1;
        return temp;
    }
    explicit operator int(){
        return real;
}
    friend Complex operator+ (int n,Complex c);
};

Complex operator+ (int n,Complex c){
    Complex res;
    res.img = c.img +n;
    res.real = c.real +n;
    return res;
}

int main()
{
    Complex c1 = {15 , 5};
    Complex c2;
    c2 = 5 +c1;
    c2.print();
    int x = (int)c2;
    cout<<x;
    return 0;
}
