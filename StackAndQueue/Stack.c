#include<stdio.h>
#define size 5
int a[size];
int top=-1;
void push(int data){
    if(top==size){
        printf("Stack Full\n");
    }
    else if(top==-1){
        top=0;
        a[top]=data;
    }
    else{
        top=top+1;
        a[top]=data;
    }
}
void pop(){
    if(top==-1){
        printf("No elements to delete\n");
    }
    else{
        int del=a[top];
        printf("Deleted element is %d \n",del);
        top=top-1;
    }
}
void display(){
    printf("-----------------------------------------------------------------------------\n");
    if(top==-1){
        printf("No elemets to delete\n");
    }
    else{
        for(int i=0;i<=top;i++){
            printf("%d \t",a[i]);
        }
    }printf("\n");
    printf("----------------------------------------------------------------------------\n");
}
void main(){
    
    while(1){
        printf(" 1 For Push \n 2 for pop \n 3 for display \n 4 for Exit");
        int ch,data;
        scanf("%d",&ch);
        if(ch==1){
            printf("Enter the value to push");
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
        else{
            printf("wrong choice");
        }
    }
}
