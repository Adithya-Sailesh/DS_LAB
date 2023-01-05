#include<stdio.h>
void main(){
    int arr[10];
    int n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
                if(arr[j]<arr[i]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
        }
    }
    printf("Sorted List is");
    for(int i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
}
