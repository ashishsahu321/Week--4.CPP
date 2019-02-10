/*implementation of queue by using stack*/
#include<iostream>
using namespace std;
class stack{
public:
int top;
//class stack
stack(){
top=-1;
}
int arr[1000];

void push(int value){
if(top==999){
    exit(0);
}
arr[++top]=value;
}
void pop(){
if(top==-1){
    cout<<"no element so can not use this function";
}
top--;
}
int topelement(){
return arr[top];
}
bool isempty(){
if(top==-1){
    return true;
}
else
    return false;
}
void print(){
int i;
cout<<" ELEMENT: ";
for(i=0;i<=top;i++){
    cout<<arr[i];
}
cout<<endl;
}
};
//class queue
class queue{
public:
stack s1,s2;
queue(){
int rear=-1;
int front=-1;
}
void enqueue(int value){
s1.push(value);
}
void dequeue(){
if(s1.isempty()==true&&s2.isempty()==true){
    cout<<"nothing to delete";
}
else{
while(s1.isempty()!=true){
    s2.push(s1.topelement());
    s1.pop();
}
s2.pop();
  }
while(s2.isempty()!=true){
    s1.push(s2.topelement());
    s2.pop();
}
}
void print(){
s1.print();
}
};

int main(){
int i;
queue q;
for(i=1;i<6;i++){
q.enqueue(i);
q.print();
}
q.print();
for(i=0;i<6;i++){
   q.dequeue();
    q.print();
}
return 0;
}
