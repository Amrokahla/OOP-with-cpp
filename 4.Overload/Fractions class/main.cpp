#include <iostream>

using namespace std;

class Fraction{
    int nu;
    int de;
    public:
    Fraction(){
        nu = 1;
        de = 1;
    }
    Fraction(int _de){
        nu = 1;
        de = _de;
    }
    Fraction(int _nu,int _de){
        nu = _nu;
        de = _de;
    }
    void setNu(int _nu){
        nu = _nu;}
    void setDe(int _de){
        de = de;}
    int getNu(){
        return nu;}
    int getDe(){
        return de;}
    void print(){
        cout<<endl<<nu<<"/"<<de;
    }
    Fraction operator= (const Fraction& f){
        nu = f.nu;
        de = f.de;
        return *this;
    }
    Fraction operator+ (const Fraction& f){
        Fraction res;
        int n1=nu , n2=f.nu , d1=de, d2=f.de;
        n1 *= d2;
        n2 *= d1;
        d1 *= d2;
        res.nu = n1+n2;
        res.de = d1;
        for(int i=res.de; i>0; i--){
            if(res.de%i==0 && res.nu%i==0){
                res.de = res.de/i;
                res.nu = res.nu/i;
                break;
            }
        }
        return res;

    }
};

int main()
{
    Fraction f1(2,4);
    Fraction f2(4,5);
    f1.print();
    f2.print();
    Fraction f3;
    f3 =f1+f2;
    f3.print();
    return 0;
}
