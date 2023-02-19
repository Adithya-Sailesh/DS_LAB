#include<stdio.h>
#define size 5
int a[size];
int front=-1,rear=-1;
void push(int data){
    if(front==0 && rear==size-1){
        printf("Already FUll Queue");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        a[front]=data;
    }
    else if(front>0){
        front=front-1;
        a[front]=data;
    }
    else{
        for(int i=rear;i>=front;i--){
            a[i+1]=a[i];
        }rear=rear+1;
        a[front]=data;
    }
}
void pop(){
     if(front==-1 && rear==-1){
        printf("No elements to delete");
    }
    else if(front==rear){
        int del=a[front];
        printf("Deleted item is %d",del);
        front=rear=-1;
    }
    else{
        int del=a[front];
        printf("Deleted item is=%d",del);
        front=front+1;
    }
}
void inject(int data){
    if(front==0 && rear==size-1){
        printf("Already FUll Queue");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        a[front]=data;
    }
    else if(rear<size){
        rear=rear+1;
        a[rear]=data;
    }
    else{
        for(int i=front;i<=rear;i++){
            a[i-1]=a[i];
        }
        front=front-1;
        a[rear]=data;
    }
}
void reject(){
    if(front==-1 && rear==-1){
        printf("No elements to delete");
    }
    else if(front==rear){
        int del=a[front];
        printf("Deleted item is %d",del);
        front=rear=-1;
    }
    else{
        int del=a[rear];
        printf("Deleted item is=%d",del);
        rear=rear-1;
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
        printf(" 1 For push \n 2 for pop \n 3 for display \n 4 for Exit \n 5 for inject \n 6 for reject");
        int ch,data;
        scanf("%d",&ch);
        if(ch==1){
            printf("Enter the value to enqueue");
            scanf("%d",&data);
            push(data);
        }
        else if(ch==2){
            pop();
        }
        else if(ch==3){
            display();
        }
        else if( ch==4){
            printf("--------------------------------PROGRAM EXITED--------------------------------------------\n");
            break;
        }
        else if(ch==5){
             printf("Enter the value to enqueue");
            scanf("%d",&data);
            inject(data);
        }
        else if(ch==6){
            reject();
        }
        else{
            printf("Wrong choice");
        }
    }
}
