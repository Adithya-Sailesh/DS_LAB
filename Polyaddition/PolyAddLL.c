#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    int exp;
    struct node *next;
}p,q,r;
struct node *ph=NULL;
struct node *qh=NULL;
struct node *rh=NULL;
void display(struct node *head){
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%dX^%d + ",temp->data,temp->exp);
        temp=temp->next;
    }
}
void add(){
    printf("Test ready");
    struct node *t1,*t2,*t3,*ptr;
    t1=ph;
    t2=qh;
    t3=rh;
    while(t1!=NULL && t2!=NULL){
            struct node *new;
            new=(struct node *)malloc(sizeof(struct node));
            new->next=NULL;
        if(t1->exp==t2->exp){
            printf("teq");
            new->data=t1->data+t2->data;
            new->exp=t1->exp;
            t1=t1->next;
            t2=t2->next;
        }
        else if(t1->exp>t2->exp){
            printf("tew");
            new->data=t1->data;
            new->exp=t1->exp;
            t1=t1->next;
        }
        else{
            printf("tee");
            new->data=t2->data;
            new->exp=t2->exp;
            t2=t2->next;
        }
        if(rh==NULL){
            rh=new;
            ptr=rh;
            ptr->next=NULL;
            
        }
        else{
            ptr->next=new;
            ptr=new;
            
        }
    }
    while(t1!=NULL){
            printf("ter");
         struct node *new,*ptr;
            new=(struct node *)malloc(sizeof(struct node));
            new->next=NULL;
            new->data=t1->data;
            new->exp=t1->exp;
            t1=t1->next;
        if(rh==NULL){
            rh=new;
            ptr=rh;
            ptr->next=NULL;
            
        }
        else{
           ptr->next=new;
            ptr=new;
            
        }
    }
    while(t2!=NULL){
        printf("tet");
            struct node *new;
            new=(struct node *)malloc(sizeof(struct node));
            new->next=NULL;
            new->data=t2->data;
            new->exp=t2->exp;
            t2=t2->next;
        if(rh==NULL){
             rh=new;
            ptr=rh;
            ptr->next=NULL;
            
        }
        else{
           ptr->next=new;
            ptr=new;
            
        }
        
    }
    //display
    struct node *temp;
    temp=rh;
    while(temp!=NULL){
        printf("%dX^%d + ",temp->data,temp->exp);
        temp=temp->next;
    }
    
}
void main(){
    int n,m;
    printf("Enter the number of terms in first polynomail");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        struct node *new,*ptr;
        new=(struct node *)malloc(sizeof(struct node));
        new->next=NULL;
        printf("enter the coeff ");
        scanf("%d",&new->data);
        printf("enter the exp");
        scanf("%d",&new->exp);
        if(ph==NULL){
            ph=new;
            ptr=ph;
            ptr->next=NULL;
        }
        else{
            ptr->next=new;
            ptr=new;
        }
    }
    
    printf("Enter the number of terms in second polynomail");
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        struct node *new,*ptr;
        new=(struct node *)malloc(sizeof(struct node));
        new->next=NULL;
        printf("enter the coeff and exp");
        scanf("%d %d",&new->data,&new->exp);
        if(qh==NULL){
            qh=new;
            ptr=qh;
            ptr->next=NULL;

        }
        else{
           ptr->next=new;
            ptr=new;
        }
    }
    display(ph);
    printf("\n");
    display(qh);
    add();
    

}
