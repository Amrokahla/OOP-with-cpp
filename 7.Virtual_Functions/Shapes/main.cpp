#include <iostream>

using namespace std;

class shape{
protected:
    int d1;
    int d2;
public:
    shape(){d1 =d2 =0;}
    shape(int _d){d1=d2=_d;}
    shape(int _d1, int _d2){
        d1 = _d1;
        d2 = _d2;}
    virtual void setD1(int _d1){
        d1 = _d1;}
    virtual void setD2(int _d2){
        d2 = _d2;}
    virtual double area()=0;
};

class rect : public shape{
public:
    rect(){d1 =d2 =0;}
    rect(int _d){d1=d2=_d;}
    rect(int _d1, int _d2){
        d1 = _d1;
        d2 = _d2;}
    double area(){
        return (double)d1*d2;}
};

class triangle : public shape{
public:
    triangle(){d1 =d2 =0;}
    triangle(int _d){d1=d2=_d;}
    triangle(int _d1, int _d2){
        d1 = _d1;
        d2 = _d2;}
    double area(){
        return 0.5 *d1*d2;}
};

class circle : public shape
{
public:
    circle(){d1 =d2 =0;}
    circle(int _d): shape(_d , _d){}
    void setD1(int _d1){
        d1 = d2 = _d1;}
    void setD2(int _d2){
        d2 = d1 = _d2;}
    double area(){
        return 22/7.0 * d1*d2;}

};

class square : public rect{
public:
    square(){d1=d2=0;}
    square(int _d) : rect(_d,_d){}
    void setD1(int _d1){
        d1 = d2 = _d1;}
    void setD2(int _d2){
        d2 = d1 = _d2;}
    double area(){
        return d1*d2;}
};

double calcArea(shape *s){
    return s->area();
}

double calcArea(shape *arr[] ,int s){
    double sum = 0;
    for(int i=0; i<s; i++)
        sum += arr[i]->area();
    return sum;
}

int main()
{
    circle c1(4);
    rect r1(5,6);
    triangle t1(5,5);
    square s1(6);
    cout<<calcArea(&c1)<<endl;
    cout<<calcArea(&r1)<<endl;
    cout<<calcArea(&t1)<<endl;
    cout<<calcArea(&s1)<<endl;

    shape *arr[4] = {&c1,&s1,&r1,&t1};
    cout<<calcArea(arr,4);

    return 0;
}
