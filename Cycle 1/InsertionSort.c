#include <stdio.h>
void main(){
    int arr[10],i=0,n,curr,j;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        curr=arr[i];
        j=i-1;
        
        while(arr[j]>curr && j>=0){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=curr;
    }
    for(i=0;i<n;i++){
        printf("%d  " ,arr[i]);
    }
}
