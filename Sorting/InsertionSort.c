#include<stdio.h>
void main(){
    int n,arr[10];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }int j;
    for(int i=1;i<n;i++){
        int temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j=j-1;
        }arr[j+1]=temp;
    }
}
