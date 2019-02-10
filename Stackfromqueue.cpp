/*stack implementation using single queue*/
#include<iostream>
using namespace std;
class queue{
    public:
int front=-1;
int rear=-1;
int size=0;
queue(){
front=-1;
}
int arr[1000];

void enqueue(int value){
    size++;
if(rear==999){
    cout<<"queue overloaded";
}
arr[++rear]=value;
}
int j=0;
void dequeue(){
    size--;

if(rear==-1){
    cout<<"no element so can not use this function";
}
j++;
}
bool isempty(){
if(rear==-1){
    return true;
}
else return false;
}
void print(){
int i;
cout<<" element ";
for(i=j;i<=rear;i++){
    cout<<arr[i];
}
cout<<endl;
}
int reare(){
return arr[rear];
}
int fronte(){
return arr[j];
}
int SIZE(){
return size;
}
};
//class of queue by stack
class stack{
public:
queue q;
//it has top equal to rear of queue
//constructor
stack(){
int top=-1;
}
//entering no
void push(int value){
q.enqueue(value);
}
//delete element
void pop(){
//enter the front and delete to get next except the rear of first queue
int x=q.SIZE();
for(int i=1;i<x;i++){
q.enqueue(q.fronte());
q.dequeue();
}
q.dequeue();
}
void print(){
q.print();
}
int SIZE(){
return q.SIZE();
}
int top(){
return q.reare();
}
};

int main(){
stack q;
for(int i=1;i<6;i++){
q.push(i);
q.print();
}
for(int i=1;i<5;i++){
q.pop();
q.print();
}
cout<<"rear element or last entered element is  "<<q.top()<<endl;
cout<<"size of the stack is "<<q.SIZE();
return 0;
}
