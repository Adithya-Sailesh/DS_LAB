#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *lc,*rc;
};
struct node *root=NULL;
struct node *insert(struct node *root,int val){
    struct node *new;
    if(root==NULL){
        new=(struct node *)malloc(sizeof(struct node));
        new->lc=NULL;
        new->rc=NULL;
        new->data=val;
        root=new;
        return root;
    }
    else if(val<root->data){
        root->lc=insert(root->lc,val);

    }
    else{
        root->rc=insert(root->rc,val);
    }
    return root;
}
void display(struct node *root){
    if(root!=NULL){
        printf(" %d ",root->data);
        display(root->lc);
        display(root->rc);
    }
}
struct node *search(struct node *root,int val){
    if(root==NULL){
        printf("Element not found");
    }
    else if(root->data==val){
        printf("Element found");
        return root;
    }
    else if(val<root->data){
        root->lc=search(root->lc,val);
    }
    else{
        root->lc=search(root->lc,val);
    }
    return root;
}
struct node *findmin(struct node *root){
    struct node *ptr;
    ptr=root;
    while (ptr!=NULL && ptr->lc)
    {
        ptr=ptr->lc;
    }
    return ptr;
    
}
struct node *delete(struct node *root,int val){
    if(root==NULL){
        printf("Root to delete not found");
        return root;

    }
    else if(val<root->data){
        root->lc=delete(root->lc,val);
    
    }
    else if (val>root->data)
    {
        root->rc=delete(root->rc,val);
    }
    else{
        if(root->lc==NULL && root->rc==NULL){
            free(root);
            root=NULL;
            return root;
        }
        else if(root->lc==NULL){
            struct node *temp=root;
            root=root->rc;
            free(root);
            
        }
        else if(root->rc==NULL){
            struct node *temp=root;
            root=root->lc;
            free(root);
        }
        else{
            struct node *temp=findmin(root->rc);
            root->data=temp->data;
            root->rc=delete(root->rc,temp->data);
        }
        return root;
    }
    
}
void main(){
    while(1){
        int ch,val;
        printf("1 for insertion \n 2 for searching \n 3 for deletion \n 4 for dislay");
        scanf("%d",&ch);
        if(ch==1){
            printf("enter the value to insert");
            scanf("%d",&val);
            root=insert(root,val);
        }
        else if(ch==2){
            printf("enter the value to search");
            scanf("%d",&val);
            search(root,val);
        }
        else if(ch==3){
            printf("enter the value to delete");
            scanf("%d",&val);
            delete(root,val);
        }
        else if(ch==4){
            display(root);
        }
        else{
            printf("Wrong choice");
        }
    }
}
