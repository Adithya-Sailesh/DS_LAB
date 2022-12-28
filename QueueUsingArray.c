#include<stdio.h>
#define size 10
int arr[size],front=-1,end=-1;
void push(int data){
    if(front==-1 && end ==-1){
        front=0,end=0;
        arr[end]=data;
        end=end+1;
    }
    else if(end==size-1){
        printf("Queue is full");
    }
    else{
        arr[end]=data;
        end=end+1;
    }
}
void pop(){
    if (front==-1 && end==-1){
        printf("No item to delete");
    }
    else{
        int del=arr[front];
        front=front+1;
    }
    
}
void display(){
    printf("---------------------------------------------------------------------------------------------\n");
    for(int i =front;i<end;i++){
        printf("%d \t ",arr[i]);
    }
    printf("\n---------------------------------------------------------------------------------------------\n");
}
void main(){
    int flag=0;
    while(flag==0){
        int ch,data;
        printf("\n 1 for push \n 2 for pop \n 3 for display \n 4 for exit");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter the element");
                scanf("%d",&data);
                push(data);
                break;
            case 2:
                pop();
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