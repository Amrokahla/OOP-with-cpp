#include <iostream>

using namespace std;

class point{
    int x;
    int y;
    static int counter;
public:
    point(){
        x=y=0;
        counter++;}
    point(int n){
        x=y=n;
        counter++;}
    point(int _x,int _y){
        x=_x;
        y=_y;
        counter++;}
    ~point(){
        counter--;}
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
    static int getCounter(){
        return counter;}

};
int point::counter = 0;


class Rect{
    point *TL;
    point *BR;
public:
    Rect(point* _tl, point* _br){
        TL = _tl;
        BR = _br;}

    void setTL(point *_tl){
        TL = _tl;}
    void setBR(point *_br){
        BR = _br;}
    void setRect(point *_tl, point *_br){
        TL = _tl;
        BR = _br;}
    point* getTL(){
        return TL;}
    point* getBR(){
        return BR;}
    void print(){
        cout<<"("<<TL->getX()<<","<<TL->getY()<<") ("<<BR->getX()<<","<<BR->getY()<<")"<<endl;
    }
};


int main()
{

    point p1(1,4);
    point p2(5,0);
    point *pt1 = &p1;
    point *pt2 = &p2;
    Rect r1(pt2,pt1);
    r1.print();
    return 0;
}
