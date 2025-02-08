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
        if(nu%de==0){
            cout<<nu/de;}
        else{
        cout<<endl<<nu<<"/"<<de;}
    }
    Fraction simpliy(){
        for(int i=de; i>0; i--){
            if(de%i==0 && nu%i==0){
                de = de/i;
                nu = nu/i;
                break;
            }
        }
        return *this;

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
        /*for(int i=res.de; i>0; i--){
            if(res.de%i==0 && res.nu%i==0){
                res.de = res.de/i;
                res.nu = res.nu/i;
                break;
            }
        }*/
        return res;
    }
    Fraction operator- (const Fraction& f){
        Fraction res;
        int n1=nu , n2=f.nu , d1=de, d2=f.de;
        n1 *= d2;
        n2 *= d1;
        d1 *= d2;
        res.nu = n1-n2;
        res.de = d1;
        /*for(int i=res.de; i>0; i--){
            if(res.de%i==0 && res.nu%i==0){
                res.de = res.de/i;
                res.nu = res.nu/i;
                break;
            }
        }*/
        return res;
    }
    Fraction operator* (const Fraction& f){
        Fraction res;
        res.nu = nu * f.nu;
        res.de = de * f.de;
        /*for(int i=res.de; i>0; i--){
            if(res.de%i==0 && res.nu%i==0){
                res.de = res.de/i;
                res.nu = res.nu/i;
                break;
            }
        }*/
        return res;
    }
    Fraction operator++ (int){
        nu += de;
        return *this;
    }
    Fraction operator-- (int){
        nu -= de;
        return *this;
    }
    explicit operator float(){
        return (float)nu/de;}
};

int main()
{
    Fraction f1(4,2);
    f1.print();
    Fraction f2(1,4);
    Fraction f3(f1+f2);
    Fraction f4(f1-f2);
    Fraction f5(f1*f2);
    f3.print();
    f3.simpliy();
    f3.print();
    f4.print();
    f5.print();
    f5++;
    f4--;
    f4.print();
    f5.print();
    float x = (float)f5;
    cout<<endl<<x;
    return 0;
}
