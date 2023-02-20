#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}p;
struct node *head=NULL;
void display(){
    struct node *temp;
    temp=head;
    printf("\n------------------------------------Linked List---------------------------------------\n");
    if(head==NULL){
        printf("No Elements");

    }
    else{
        while(temp!=NULL){
            printf("%d \t",temp->data);
            temp=temp->next;
        }
    }
    printf("\n-----------------------------------------------------------------------------------------\n");
}
void addF(int value){
    struct node *new=(struct node *)malloc(sizeof(struct node));
    new->data=value;
    new->next=NULL;
    if(head==NULL){
        head=new;
    }
    else{
        new->next=head;
        head=new;
    }
}
void addB(int value){
    struct node *new=(struct node *)malloc(sizeof(struct node));
    new->data=value;
    new->next=NULL;
    if(head==NULL){
        head=new;
    }
    else{
       struct node *temp;
       temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new;
    }
}
void add(int value,int nexto){
    struct node *temp=head;
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=value;
    new->next=NULL;
    
    if(head==NULL){
        printf("No elements to search");
    }
    else{
        while (temp->data!=nexto && temp->next!=NULL)
        {
            temp=temp->next;
        }
        if(temp->next==NULL){
            printf("Nexto element not found");
        }
        else{
            new->next=temp->next;
            temp->next=new;

        }
        
    }
    
}
void deletef(){
    struct node *temp;
    temp=head;
    if(head=NULL){
        printf("No elements to delete");

    }else{
        head=temp->next;
    }
}
void deleteB(){
    if(head==NULL){
        printf("No elements to delete");

    }
    else{
        struct node *temp;
        temp=head;
        struct node *prev;
        while(temp->next!=NULL){
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
    }
}
void deleteany(int value){
    struct node *temp;
    temp=head;
    if(head==NULL){
        printf("No item to delete");
    }
    else{
        struct node *prev;
        while (temp->data!=value && temp->next!=NULL)
        {   prev=temp;
            temp=temp->next;
        }
        if(temp->next==NULL){
            printf("Element not found");
        }
        else{
            prev->next=temp->next;
        }
        
    }
}
void main(){
    int ch,value,nexto;
    while(1){
        printf(" 1 For insert front \n 2 for insert back \n 3 for insert after \n 4 for delete front \n 5 for delete back \n 6 for delete element \n 7 for dispaly \n 8 for exit \n ");
        scanf("%d",&ch);
        if(ch==1){
            printf("enter the value =");
            scanf("%d",&value);
            addF(value);
        }
        else if(ch==2){
            printf("enter the value =");
            scanf("%d",&value);
            addB(value);
        }
        else if(ch==3){
            printf("enter the value =");
            scanf("%d",&value);
            printf("enter the next to=");
            scanf("%d",&nexto);
            add(value,nexto);
        }
        else if(ch==4){
            deletef();
        }
        else if(ch==5){
            deleteB();
        }
        else if(ch==6){
            printf("Enter the value to be deleted");
            scanf("%d",&value);
            deleteany(value);
        }
        else if(ch==7){
            display();
        }
        else if(ch==8){
            printf("\n------------------------Program Exited-----------------------------------------\n");
            break;
        }
        else{
            printf("Wrong Choice");
        }
    }
}

