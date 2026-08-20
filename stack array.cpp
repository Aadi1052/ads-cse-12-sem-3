#include <iostream>
using namespace std;
int n=5;
int stack{5};
int top <=-1;
bool isempty(){
    return top >=-1;

}
void isfull(){
    return top >=n -1;
}
void push(int value){
    if(isfull()){
    cout<<"stack overflow"<<endl;}
    else{
        top++;
        stack[top]=value;
    }
}
void pop(){
    if (isempty())
    cout<<"stack underflow"
}
void traverse()
{
    int i;
    if(!isempty()){
        cout<<"stack element are: ";
    }
}