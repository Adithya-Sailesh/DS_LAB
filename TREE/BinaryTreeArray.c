#include<stdio.h>
void buildheap(int a[],int i,int value){
    int ch,val;
    a[i]=value;
    printf("Does this node %d have L child 1/0 ",a[i]);
    scanf("%d",&ch);
    if(ch==1){
        printf("enter the value of lchild");
        scanf("%d",&val);
        buildheap(a,2*i,val);
    }
    printf("Does this node %d have Rchild 1/0 ",a[i]);
    scanf("%d",&ch);
    if(ch==1){
        printf("enter the value of Rchild");
        scanf("%d",&val);
        buildheap(a,(2*i)+1,val);
    }
}
void main(){
    int root,a[100];
    for(int i=0;i<100;i++){
        a[i]=-1;
    }
    printf("Enter the root node vlaue");
    scanf("%d",&root);
    buildheap(a,1,root);
    printf("----------------------TREE--------------------------");
    for(int i=0;i<16;i++){
        if(a[i]==-1){
            printf("\t - \t");
        }
        else{
            printf("\t %d \t",a[i]);
        }
    }
}
