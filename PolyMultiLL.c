#include<stdio.h>
#include<stdlib.h>
struct node{
    int coeff;
    int exp;
    struct node *next;
};
struct node *ph=NULL;
struct node *qh=NULL;
struct node *rh=NULL;
void display(struct node *head){
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d X^ %d+",temp->coeff,temp->exp);
        temp=temp->next;
    }
}
void multi(){
    struct node *p,*q,*r,*ptr;
    p=ph;
    q=qh;
    r=rh;
    while(p!=NULL){
        q=qh;
        while(q!=NULL){
            struct node *new;
            new=(struct node *)malloc(sizeof(struct node));
            new->next=NULL;
            new->coeff=p->coeff*q->coeff;
            new->exp=p->exp+q->exp;
            
            q=q->next;
            if(rh==NULL){
                
                rh=new;
                ptr=rh;
                ptr->next=NULL;
                
            }
            else{
                ptr->next=new;
                ptr=new;
            }
        }p=p->next;
    }
    printf("\n ------------------PRODUCT IS-----------------\n");
    struct node *temp;
    temp=rh;
    while(temp!=NULL){
        printf("%d X^ %d+",temp->coeff,temp->exp);
        temp=temp->next;
    }
    p=ph;
    while(p!=NULL){
        struct node *prev,*adj;
        prev=p;
        adj=p->next;
        while(adj!=NULL){
            if(p->exp==q->exp){
                p->coeff=p->coeff+adj->coeff;
                prev->next=adj->next;
                adj=prev->next;
            }
            else{
                prev=adj;
                adj=adj->next;
            }

        }p=p->next;
    }
    printf("\n ------------------PRODUCT Removal-----------------\n");
    struct node *te;
    temp=rh;
    while(te!=NULL){
        printf("%d X^ %d+",te->coeff,te->exp);
        te=te->next;
    }
}
void main(){
    int n,m;
    printf("Enter the number of terms in first polynomial");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        struct node *new,*end;
        new=(struct node *)malloc(sizeof(struct node));
        new->next=NULL;
        printf("Enter the coeff and exp");
        scanf("%d %d",&new->coeff,&new->exp);
        if(ph==NULL){
            ph=new;
            end=ph;
            end->next=NULL;
        }
        else{
            end->next=new;
            end=new;
        }
    }
    printf("Enter the number of terms in second polynomial");
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        struct node *new,*end;
        new=(struct node *)malloc(sizeof(struct node));
        new->next=NULL;
        printf("Enter the coeff and exp");
        scanf("%d%d",&new->coeff,&new->exp);
        if(qh==NULL){
            qh=new;
            end=qh;
            end->next=NULL;
        }
        else{
            end->next=new;
            end=new;
        }
    }
    display(ph);
    printf("\n");
    display(qh);
    multi();
    
}
