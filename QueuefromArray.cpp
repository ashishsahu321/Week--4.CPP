/*implementation of queue using array*/
#include<iostream>
using namespace std;
//class queue
class queue{
    public:
int front,rear;
int size=0;
//constructor
queue(){
front=-1;
rear=-1;
}
int arr[1000];
//enqueue function to enter element
void enqueue(int value){
if(rear==999){
    cout<<"queue overloaded";
}
//initially at 0th position entered value
arr[++rear]=value;
size++;
}
//we initially initialize the integer to zero it is necessary to dequeue element
int j=0;
void dequeue(){

if(rear==-1){
    cout<<"no element so can not use this function";
}
j++;
size--;
}
//to check whether function is empty or not
bool isempty(){
if(rear==-1){
    return true;
}
else return false;
}
void print(){
int i;
cout<<"queue element ";
for(i=j;i<=rear;i++){                        //EQUATION 1
    cout<<arr[i];
}
cout<<endl;
}
//the last entered element or rear
int REAR(){
return arr[rear];
}
//find size of queue
int SIZE(){
return size;
}
//to find the front element of queue
int FRONT(){
//j is the index of front element             BY EQUATION 1;
return arr[j];
}
};
int main(){
queue q;
for(int i=1;i<6;i++){
q.enqueue(i);
q.print();
}
cout<<"the rear element of queue is  "<<q.REAR()<<endl;
cout<<"the front element of queue is " <<q.FRONT()<<endl;
cout<<"delete the element of queue "<<endl;

for(int i=1;i<5;i++){
q.dequeue();
q.print();
}
cout<<"the size of queue is "<<q.SIZE()<<endl;
return 0;
}
