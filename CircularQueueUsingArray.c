#include<stdio.h>
#define size 6
int arr[size],front=-1,rear=-1;
void enqueue(int data){
    if(front==(rear+1)%size){
        printf("Queue is full");
    }
    else if(front==-1 && rear==-1){
        front=0,rear=0;
        arr[rear]=data;
        rear=(rear+1)%size;
    }
    else{
        arr[rear]=data;
        rear=(rear+1)%size;
    }
}
void dequeue(){
    if(front==-1 && rear==-1){
        printf("Empty Queue");
    }
    else if(front==rear){
        int del=arr[front];
        printf("delted item %d",del);
        front=rear=-1;
    }
    else{
        int del=arr[front];
        printf("delted item %d",del);
        front=(front+1)%size;
    }
}
void display(){
    if (front ==-1 && rear ==-1){
        printf("No elements");
    }
    else{
        if(front<rear){
            printf("---------------------------------------------------------------------------------------------\n");
            for(int i =front;i<rear;i++){
                printf("%d \t ",arr[i]);
            }
            printf("\n---------------------------------------------------------------------------------------------\n");
            }
        else{
            printf("---------------------------------------------------------------------------------------------\n");
            for(int i =front;i<size-1;i++){
                printf("%d \t ",arr[i]);
            }
            for(int i=0;i<rear;i++){
                printf("%d \t ",arr[i]);
            }
            printf("\n---------------------------------------------------------------------------------------------\n");
            }
        }
        }
    


void main(){
    int flag=0;
    while(flag==0){
        int ch,data;
        printf("\n 1 for enqueue \n 2 for dequeue \n 3 for display \n 4 for exit");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter the element");
                scanf("%d",&data);
                enqueue(data);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                flag=1;
                break;
            default:
                printf("Wrong Choice");
                break;    
        }
    }

}