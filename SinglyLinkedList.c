#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head;
void InsertF(int value){
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    new ->data=value;
    if(head==NULL){
        head=new;
        head->next=NULL;
        printf("Test winn");
    }
    else{
        new->next=head;
        head=new;
    }
}
void InsertB(int value){
    struct node *new,*temp;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=value;
    if(head==NULL){
        head=new;
        head->next=NULL;
    }
    else{
        temp=head;
        while(temp->next==NULL){
            temp=temp->next;
        }
        temp->next=new;
    }
}
void DeleteF(){
    struct node *temp;
    if (head==NULL){
        printf("No Elements to delete");
    }
    else{
        temp=head;
        head=temp->next;
        free(temp);
    }
   
}
void DeleteB(){
    struct node *temp,*prev;
    if(head==NULL){
        printf("No Elements to delete");
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
    }
}
void display(){
    struct node *temp;
    temp=head;
    printf("---------------------------------------------------------------------------\n");
    if(head==NULL){
        printf("No Elements");
    }
    else{
        while(temp!=NULL){
            printf("%d \t",temp->data);
            temp=temp->next;
        }
    }
    printf("\n------------------------------------------------------------------------------\n");
}

void main(){
    int flag=0;
    while(flag==0){
        int ch,data;
        printf("\n 1 for insert front \n 2 for back \n 3 for display \n 4 for delete front \n 5 for delete back \n 6 for exit");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter the element");
                scanf("%d",&data);
                InsertF(data);
                break;
            case 2:
                printf("Enter the element");
                scanf("%d",&data);
                InsertB(data);
                break;
            case 3:
                display();
                break;
            case 4:
                DeleteF();
                break;
                
            case 5:
                DeleteB();
                break;
            case 6:
                flag=1;
                break;
            default:
                printf("Wrong Choice");
                break;    
        }
    }

}
