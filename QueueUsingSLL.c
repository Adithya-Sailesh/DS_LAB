#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head;
void push(int value){
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=value;
    new->next=NULL;
    if(head==NULL){
        head=new;
    }else{
        new->next=head;
        head=new;
    }
}
void pop(){
    struct node *temp,*prev;
    temp=head;
    if(head==NULL){
        printf("Queue is already empty");

    }else{
        while(temp->next!=NULL){
            prev=temp;
            temp=temp->next;
        }prev->next=NULL;

    }
}
void display(){
    struct node *temp;
    temp=head;
    printf("------------------------------------------------------------------------");
    if(head==NULL){
        printf("No element to print");
    }else{
        while(temp!=NULL){
            printf("%d \t",temp->data);
            temp=temp->next;
        }
    }printf("------------------------------------------------------------------------");
}
void main(){
    printf(" 1 for enqueue \n 2 for dequque \n 3 for display");
    int flag=0;
    while(flag==0){
        int ch,value;
        printf(" \n enter the choice");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\n Enter the value");
            scanf("%d",&value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            break;
        }
    }
}