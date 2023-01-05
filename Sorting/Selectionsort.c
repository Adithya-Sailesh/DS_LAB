#include<stdio.h>
void main(){
    int n,arr[10];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }int pos;
    for(int i=0;i<n-1;i++){
        pos=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                pos=j;
            }
        }if(pos!=i){
            int temp=arr[i];
            arr[i]=arr[pos];
            arr[pos]=temp;

        }
    }
    printf("Sorted List is");
    for(int i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
}
