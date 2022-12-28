#include<stdio.h>
#define size 10 
int top=-1,arr[size];
void push(int data){
    if(top==size){
        printf("Stack Full");
    }
    else{
        top++;
        arr[top]=data;
    }
}
void pop(){
    if(top==-1){
        printf("No item to delete");
    }
    else{
        int del=arr[top];
        printf("Deleted item %d",del);
        top=top-1;
    }
}
void display(){
    printf("---------------------------------------------------------------------------------------------\n");
    printf("Elements are :\n \n");
    for(int i=top;i>=0;i--){
        printf("%d \t",arr[i]);
    }
    printf("\n----------------------------------------------------------------------------------------------\n");
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