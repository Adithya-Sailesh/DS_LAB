#include<stdio.h>
void main(){
    int arr[10];
    int n,x;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the sorted array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the searching element");
    scanf("%d",&x);
    int flag=0,low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            flag=1;
            printf("Element found at index %d",mid);
            break;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }if(flag==0){
        printf("Elemnt Not Found");
    }
}
