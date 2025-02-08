#include <iostream>

using namespace std;

class point{
    int x;
    int y;
public:
    point(){
        x=y=0;}
    point(int n){
        x=y=n;}
    point(int _x,int _y){
        x=_x;
        y=_y;}
    void setX(int _x){
        x=_x;}
    void setY(int _y){
        y=_y;}
    void setPoint(int _x, int _y){
        x=_x;
        y=_y;}
    int getX(){
        return x;}
    int getY(){
        return y;}

};

class Rect{
    point TL;
    point BR;
public:
    Rect(int x1,int y1,int x2,int y2) //:TL(x1,y1) , BR(x2,y2)
    {
        TL.setPoint(x1,y1);
        BR.setPoint(x2,y2);}
    Rect(point _tl, point _br){
        TL = _tl;
        BR = _br;}
    void setTL(int x, int y){
        TL.setPoint(x,y);}
    void setBR(int x,int y){
        BR.setPoint(x,y);}
    void setTL(point _tl){
        TL = _tl;}
    void setBR(point _br){
        BR = _br;}
    void setRect(int x1,int y1,int x2,int y2){
        TL.setPoint(x1,y1);
        BR.setPoint(x2,y2);}
    void setRect(point _tl, point _br){
        TL = _tl;
        BR = _br;}
    point getTL(){
        return TL;}
    point getBR(){
        return BR;}
    void print(){
        cout<<"("<<TL.getX()<<","<<TL.getY()<<") ("<<BR.getX()<<","<<BR.getY()<<")"<<endl;
    }
};

class Circle{
    int r;
    point c;
public:
    Circle(int _r, int x, int y){
        r = _r;
        c.setPoint(x,y);}
    Circle(int _r, point _c){
        r= _r;
        c = _c;}
    void setRadius(int _r){
        r = _r;}
    void setCenter(int x, int y){
        c.setPoint(x,y);}
    void setCenter(point _c){
        c= _c;}
    void setCircle(int _r, int x, int y){
        r = _r;
        c.setPoint(x,y);}
    void setCircle(int _r, point _c){
        r= _r;
        c = _c;}
    int getRadius(){
        return r;}
    point getCenter(){
        return c;}
    void print(){
        cout<<r<<" , ("<<c.getX()<<","<<c.getY()<<")"<<endl;}
};


int main()
{
    Rect r1(0,3,3,0);
    point p1(1,4);
    point p2(5,0);
    Rect r2(p1,p2);
    r1.print();
    r2.print();
    r2.setRect(3,3,5,1);
    r2.print();

    Circle c1(2,0,0);
    c1.print();
    point p3(1,1);
    Circle c2(1,p3);
    c2.print();
    point p4(2,3);
    c1.setCircle(1,p4);
    c1.print();
    return 0;
}
