#include<stdio.h>
#include<stdlib.h>
#define MAX 6
struct Node{
    int data;
    struct Node *next;
};
 int isfull(struct Node **top){
 if(*top == MAX-1)
    return 1;
    else
    return 0;
 }
 int isempty(struct Node **top){
 if(*top == NULL)
    return 1;
 else
    return 0;
 }
void push(int value,struct Node **top){
    struct Node *nn=(struct Node*)malloc(sizeof(struct Node));
    nn->data=value;
    nn->next=NULL;

    if(*top == NULL && !isfull(top)){
        *top=nn;
    }else if(!isfull(top)){
        nn->next=*top;
     *top=nn;
    }else{
        printf("Stack is full\n");
    }
}
void pop(struct Node **top){
    if(*top==NULL && isempty(top)){
        printf("Stack is empty\n");
        return;
    }else if(!isempty(top)){
       struct Node *temp=*top;
       *top=(*top)->next;
        free(temp);
    }
}
void display(struct Node *top){
    struct Node *temp=top;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main(){
    struct Node *top=NULL;
    push(5,&top);
    push(1,&top);
    push(6,&top);
    push(9,&top);    
    pop(&top);
    display(top);
    return 0;
}