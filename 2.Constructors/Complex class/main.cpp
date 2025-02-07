#include <iostream>

using namespace std;

class Complex{
    double real;
    double img;

public:
    Complex (){
        real = 10;
        img = 0;}
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
    Complex add(Complex c){
        Complex r;
        r.real = c.getReal()+real;
        r.img = c.getImg()+img;
        return r;
    }

};

Complex add(Complex c1, Complex c2);

int main()
{
    Complex c1 = {15 , 5};
    Complex c2;
    Complex c3 = c1.add(c2);
    c3.print();
    Complex c4 = add(c3,c1);
    c4.print();
    return 0;
}

Complex add(Complex c1, Complex c2){
    Complex r;
    r.setReal(c1.getReal()+c2.getReal());
    r.setImg(c1.getImg()+c2.getReal());
    return r;
}
