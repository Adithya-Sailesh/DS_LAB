#include<stdio.h>
#define size 5
int a[size];
int front=-1,rear=-1;
void enqueue(int data){
    if(rear==size-1){
        printf("Already full");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        a[rear]=data;
    }
    else{
        rear=rear+1;
        a[rear]=data;
    }
}
void dequeue(){
    if(front==-1 && rear==-1){
        printf("No elements to delete");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        int del=a[front];
        printf("Deleted item is=%d",del);
        front=front+1;
    }
}
void display(){
    printf("-----------------------------------------------------------------------------------\n");
    if(front==-1 && rear==-1){
        printf("No elemts to display \n");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("%d \t",a[i]);
        }
    }
    printf("-----------------------------------------------------------------------------------\n");
}
void main(){
     while(1){
        printf(" 1 For enqueue \n 2 for dequeue \n 3 for display \n 4 for Exit");
        int ch,data;
        scanf("%d",&ch);
        if(ch==1){
            printf("Enter the value to enqueue");
            scanf("%d",&data);
            enqueue(data);
        }
        else if(ch==2){
            dequeue();
        }
        else if(ch==3){
            display();
        }
        else if( ch==4){
            printf("--------------------------------PROGRAM EXITED--------------------------------------------\n");
            break;
        }
        else{
            printf("wrong choice");
        }
    }
}