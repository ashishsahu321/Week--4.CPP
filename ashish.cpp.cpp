/* week 4 question 1a  and 1b implementation of stacks and queue using linked list  */


#include<iostream>
using namespace std;
class box{
    public:
//define class box containing the a data and a pointer of box type point to next box
int data;
box*ptr;
box(){
ptr=NULL;
}
};
class linklist{
    public:
box*head;
box*tail;
linklist(){
head=NULL;
tail=NULL;
}
void Insert(int value){
//insert element at first position
box*temp=new box;
temp->data=value;
if(head==NULL){
   head=temp;
}
else{
 tail->ptr=temp;
}
  tail=temp;
}

void insertat(int pos,int value){
int i=1;
box*current=head;
if(pos==1){
    box*temp=new box;
    temp->data=value;
    temp->ptr=head;
    head=temp;
}
else{
while(i<pos-1){
    i++;
    current=current->ptr;
}
box*temp=new box;
temp->data=value;
temp->ptr=current->ptr;
current->ptr=temp;
}
}

void delet(){
    box*temp=tail;
    box*current=head;
    while(current->ptr!=tail){
        current=current->ptr;
        }
        current->ptr=NULL;
        //update tail
        tail=current;
        delete temp;
}
void  deleteat(int pos){
    box*current=head;
    int i=1;
 if(pos==1){
    box*temp=head;
    head=NULL;
    head=temp->ptr;
    delete temp;
 }
else{
 while(i<pos-1){
 current=current->ptr;
 i++;
 }
 //now value of i is equal to position-1
 //current store the required box
 //1 2 3 4 5 6 7 8 9
 box*temp;
 temp=current->ptr;
 current->ptr=NULL;
 current->ptr=temp->ptr;

delete temp;
}
}
void display(){
 box*current=head;
 while(current!=NULL){
    cout<<current->data<<"   ";
current=current->ptr;
 }
 cout<<endl;
 }
void count(){
int i=1;
box*current=head;
while(current!=tail){
    i++;
    current=current->ptr;
}
cout<<"size of stack is  "<<i<<endl;
}
};
class stack{
public:
box*top;
linklist L;
stack(){
top=NULL;
}
void push(int value){
//insert at first
L.insertat(1,value);
top=L.head;
}
void pop(){
//delete the element at first position
L.deleteat(1);
//top=new_head
top=L.head;
}
bool isempty(){
if(top==NULL)return true;
else return false;
}
void sizes(){
 L.count();
}
void display(){
L.display();
}
};
class queue{
public:
linklist L;
box*front,*end;
 queue(){
front=NULL;
end=NULL;
}
void enqueue(int value){
L.insertat(1,value);
front=L.head;
end=L.tail;
}
void dequeue(){
box*current=L.head;
int i=1;
while(current->ptr!=L.tail){
    current=current->ptr;
    i++;
}
L.deleteat(i);
front=L.head;
end=L.tail;
}
void size(){
L.count();
}
bool isempty(){
if(front==NULL){
    return true;
}
else
return false;
}
void display(){
L.display();
}
};
int main(){
stack S;
for(int i=1;i<6;i++){
    S.push(i);
}
for(int i=1;i<6;i++){
S.display();
S.pop();
}
cout<<"The stack is empty is true or false "<<S.isempty()<<endl;
S.sizes();
cout<<"now queue implementation"<<endl;
queue q;
for(int i=1;i<6;i++){
q.enqueue(i);

}
for(int i=1;i<6;i++){
q.display();
q.dequeue();
}
q.size();
return 0;
}











