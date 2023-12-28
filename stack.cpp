// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class stack{
    public:
    int size;
    int top;
    int *arr;
    
    stack(int size){
        this->size=size;
        arr=new int[size];
        top=0;
    }
    void push(int data){
        arr[top]=data;
        top++;
        // cout<<arr[top]<<endl;
        
    }
    void pop(){
        arr[top]=arr[top-1];
        top--;
        // cout<<arr[top]<<endl;
    }
    void transversal(){
    
        for(int i=0;i<top;i++){
            cout<<arr[i]<<endl;
        }
        }
    
};



int main() {

stack s(7);
s.push(23);
s.push(56);
s.push(11);
s.push(8);
s.pop();
s.transversal();
    return 0;
}
