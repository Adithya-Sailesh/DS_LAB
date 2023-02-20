#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head=NULL;
void display(){
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
void addF(int value){
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=value;
    new->next=NULL;
    new->prev=NULL;
    if(head==NULL){
        head=new;
    }
    else{
        new->next=head;
        head->prev=new;
        head=new;
    }
}
void addB(int value){
    struct node *new,*temp;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=value;
    new->next=NULL;
    new->prev=NULL;
    
    if(head==NULL){
        head=new;
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new;
        new->prev=temp;
    }
    
}
void add(int value,int nexto){
    struct node *new,*temp;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=value;
    new->next=NULL;
    new->prev=NULL;
    if(head==NULL){
        printf("No element to insert after");
    }
    else{
        temp=head;
        while(temp->next!=NULL &&temp->data!=nexto){
            temp=temp->next;
        }
        if(temp->next==NULL){
            printf("NEXTO not found");
        }
        else{
            struct node *ptr;
            ptr=temp->next;
            temp->next=new;
            new->next=ptr;
            ptr->prev=new;
            new->prev=temp;
        }
    }
}
void deletef(){
    if(head==NULL){
        printf("No item to delete");
    }
    else{
        struct node *temp;
        temp=head->next;
        temp->prev=NULL;
        head=temp;
    }
}
void deleteB(){
    struct node *temp,*ptr;
    temp=head;
    if(head==NULL){
        printf("No item to delete");
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        ptr=temp->prev;
        ptr->next=NULL;
    }
}
void deleteany(int value){
    if(head==NULL){
        printf("Element not found");
    }
    else{
        struct node *temp,*ptr,*nex;
        temp=head;
        while(temp->next!=NULL && temp->data!=value){
            temp=temp->next;
        }
        if(temp->next==NULL){
            printf("element not found");
        }
        else{
            ptr=temp->prev;
            nex=temp->next;
            ptr->next=nex;
            nex->prev=ptr;
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
