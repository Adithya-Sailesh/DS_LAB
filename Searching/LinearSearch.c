#include<stdio.h>
void main(){
    int arr[10];
    int n,x;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int flag=0;
    printf("Enter the searching element");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            flag=1;
            printf("elemet found at index %d",i);
            break;
        }
    }
    if(flag==0){
        printf("Element not found");
    }
}
