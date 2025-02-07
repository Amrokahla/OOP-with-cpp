#include <iostream>

using namespace std;

class staticStack{
    int tos;
    int arr[5];

    public:
    staticStack(){
        tos = -1;
    }

    void push(int n){
        if(tos < 4){
            tos++;
            arr[tos] = n;
            cout<<"\nelement added";
        }
        else
            cout<<"\nStack is full";
    }
    int pop(int &x){
        if(tos != -1){
            x = arr[tos];
            tos--;
            return 1;
        }
        else{
            cout<<"\nStack is Empty";
            return 0;
        }
    }
    void print(){
        for(int i=0; i<=tos; i++){
            cout<<arr[i]<<endl;
        }
    }
    ~staticStack(){
        cout<<"\nobject deleted";
    }
};

class dynamicStack{
    int tos;
    int size;
    int *arr;

    public:
    dynamicStack(){
        size =5;
        tos = -1;
        arr = new int[size];
    }
    dynamicStack(int _size){
        size = _size;
        tos = -1;
        arr = new int[size];
    }
    void push(int n){
        if(tos < size -1){
            tos++;
            arr[tos] = n;
            cout<<"\nelement added";
        }
        else
            cout<<"\nStack is full";
    }
    int pop(int &x){
        if(tos != -1){
            x = arr[tos];
            tos--;
            return 1;
        }
        else{
            cout<<"\nStack is Empty";
            return 0;
        }
    }
    void print(){
        for(int i=0; i<=tos; i++){
            cout<<endl<<arr[i];
        }
    }
    dynamicStack(dynamicStack &s){
        size = s.size;              // this here refers to the copy not the original
        tos = s.tos;                // this here refers to the copy not the original
        arr = new int[size];        // this here refers to the copy not the original
        for(int i=0; i<=tos; i++){
            arr[i] = s.arr[i];
        }
    }*
    ~dynamicStack(){
        cout<<"\nobject deleted";
        delete[] arr;
    }
};

myfun(dynamicStack s){
    int x;
    if(s.pop(x) == 1){
        cout<<endl<<"myfun removed: "<<x;
    }
}


int main()
{
    /*staticStack s1;
    s1.push(10);
    s1.push(20);
    s1.print();
    int x;
    s1.pop(x);
    s1.print();*/

    dynamicStack d1(4);
    d1.push(20);
    d1.push(30);
    d1.push(50);
    d1.push(60);
    d1.push(80);
    d1.print();
    myfun(d1);
    d1.print();


    return 0;
}
