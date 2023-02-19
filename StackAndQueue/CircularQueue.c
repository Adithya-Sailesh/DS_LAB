#include<stdio.h>
#define size 5
int a[size];
int front=-1,rear=-1;
void enqueue(int data){
    if(front==(rear+1)%size){
        printf("Queue is alread full");
    }
    else if(front==-1 &&rear==-1){
        front=rear=0;
        a[rear]=data;
    }
    else{
        rear=(rear+1)%size;
        a[rear]=data;
    }
}
void dequeue(){
    printf("front=%d rear=%d",front,rear);
    if(front==-1 && rear==-1){
        printf("No elements to delete");
    }
    else if(front==rear){
        int de=a[front];
        printf("Element dele%d",de);
        front=rear=-1;
    }
    else{
        int del=a[front];
        printf("Element deleted%d",del);
        front=(front+1)%size;
        

    }
}
void display(){
    if(front==-1 && rear==-1){
        printf("Noelements to display");
    }
    else if(front<rear){
        for(int i=front;i<=rear;i++){
            printf("%d \t",a[i]);
        }
    }
    else{
        for(int i=front;i<size;i++){
            printf("%d \t",a[i]);
        }
        for(int i=0;i<=rear;i++){
            printf("%d \t",a[i]);
        }
    }
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
