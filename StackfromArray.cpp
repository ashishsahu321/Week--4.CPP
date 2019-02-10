/*implementation of stack using array*/
#include<iostream>
using namespace std;
class stack{
    public:
int size=0;
int top;
stack(){
top=-1;
}
int arr[1000];
//enter element
void push(int value){
size++;
if(top==999){
    cout<<"stack overloaded";
}
//the value given by user store in next index position
arr[++top]=value;
}
void pop(){
if(top==-1){
    cout<<"no element so can not use this function";
}
top--;
size--;
}
int topelement(){
return arr[top];
}
bool isempty(){
if(top==-1){
    return true;
}
else return false;
}
void print(){
int i;
cout<<"stack element are ";
for(i=0;i<=top;i++){
    cout<<arr[i];
}
cout<<endl;
}
int SIZE(){
return size;
}
};
int main(){
stack s;
for(int i=1;i<6;i++){
s.push(i);
s.print();
}
cout<<"the top element is "<<s.topelement()<<endl;
cout<<"delete top elements"<<endl;
for(int i=1;i<5;i++){
    s.pop();
    s.print();
}

cout<<"the size of stack is  "<<s.SIZE()<<endl;
return 0;
}
