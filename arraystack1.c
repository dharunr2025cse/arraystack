#include<stdio.h>
#define MAX 6

int stack[MAX],top=-1;
 int isfull(){
 if(top==MAX-1)
    return 1;
    else
    return 0;
 }
 int isempty(){
 if(top == -1)
    return 1;
 else
    return 0;
 }
 void push(int value){
 if(!isfull()){
    top++;
    stack[top]=value;
 }
 }
 void pop(){
 int del;
 if(!isempty())
 {
     del = stack[top];
     top--;
 }return del;
 }
 void peek(){
 int p;
 if(!isempty()){
    p=stack[top];
 }return p;
 }
void display(){
int i;
if(!isempty()){
    for(i=top;i>=0;i--){
        printf("%d",stack[i]);
    }
}
}
int main(){
push(5 );
push(1 );
push(6 );
push(9 );
pop();
display();
peek();
return 0;
}
