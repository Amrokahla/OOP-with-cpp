#include <iostream>

using namespace std;

class Stack{
    int tos;
    int size;
    int *arr;

    public:
    Stack(){
        size =5;
        tos = -1;
        arr = new int[size];
    }
    Stack(int _size){
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
    Stack(Stack &s){
        size = s.size;
        tos = s.tos;
        arr = new int[size];
        for(int i=0; i<=tos; i++){
            arr[i] = s.arr[i];
        }
    }*
    ~Stack(){
        //cout<<"\nobject deleted";
        delete[] arr;
    }
    Stack operator= (const Stack &s){
        delete[] arr;
        tos = s.tos;
        size = s.size;
        arr = new int[size];
        for(int i=0; i<=tos; i++){
            arr[i] = s.arr[i];
        }
        return *this;
    }

    Stack operator+ (Stack &s1){
        int t1 = tos;
        int t2 = s1.tos;
        Stack res(size + s1.size);
        res.tos = t1+t2+1;
        for (int i=0; i<= t1; i++) {
            res.arr[i] = arr[i];
        }
        for (int j=0; j<= t2; j++) {
            res.arr[t1+1+j] = s1.arr[j];
        }
        cout<<endl<<"Stacks Added";
        return res;
    }
};



int main()
{
    Stack s1(3);
    s1.push(50);
    s1.push(40);
    s1.print();

    Stack s2(5);
    s2.push(10);
    s2.push(15);
    s2.push(100);
    s2.print();

    Stack s3;
    s3 = s1+s2;
    s3.print();
    return 0;
}
