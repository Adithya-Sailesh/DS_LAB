#include<stdio.h>
void merge(int a[],int low,int mid,int high){
    int i=low; int j=mid+1;int k=low;int b[10];
    while(i<=mid && j<=high){
        if(a[i]>=a[j]){
            b[k]=a[j];
            k++;j++;
        }
        else{
            b[k]=a[i];
            k++;i++;
        }
    }
    if(i<=mid){
        while(i<=mid){
            b[k]=a[i];
            k++;i++;
        }
    }
    if(j<=high){
        while(j<=high){
            b[k]=a[j];
            k++;j++;
        }
    }
    for(int i=0;i<=high;i++){
        a[i]=b[i];
    }
}
void mergesort(int a[],int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
    
}
void main(){
    int n,a[10];
    printf("Enter the number of elements =");
    scanf("%d",&n);
    printf("Enter the elemts");
    for(int k=0;k<n;k++){
        scanf("%d",&a[k]);
    }
    mergesort(a,0,n-1);
    printf("-----------------Sorted Array--------\n");
    for(int i=0;i<n;i++){
        printf("%d \t",a[i]);
    }
}
