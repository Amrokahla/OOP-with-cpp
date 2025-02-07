#include <iostream>

using namespace std;

class Complex{
    int real;
    int i;

    public:
    void set_real(int _real){
        real = _real;}
    void set_i(int _i){
        i = _i;}
    int get_real(){
        return real;}
    int get_i(){
        return i;}
};

void printim(Complex c) {
    int r, i;
    cout << "Enter the real part: ";
    cin >> r;
    c.set_real(r);
    cout << "Enter the imaginary part: ";
    cin >> i;
    c.set_i(i);
    if(c.get_i()==0)
        cout << endl << c.get_real()<< endl;

    else if (c.get_i()<0)
        cout << endl << c.get_real() << c.get_i() << " i" << endl;
    else
        cout << endl << c.get_real() << "+" << c.get_i() << " i" << endl;
}
using namespace std;

int main()
{
    Complex c;
    printim(c);
    return 0;
}
