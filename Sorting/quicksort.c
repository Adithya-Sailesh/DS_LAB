#include<stdio.h>
int a[10];
int part(int a[],int low,int high){
    int i=low;
    int j=high;
    int pivot=a[low];
    while (i<j)
    {
        while (a[i]<=pivot &&i<high)
        {
            i++;
        }
        while (a[j]>pivot)
        {
            j--;
        }
        if(low<high){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        
        
    }a[low]=a[j];
    a[j]=pivot;
    return j;
    
}
void quicksort(int a[],int low,int high){
    if(low<high){
          int p=part(a,low,high);
          quicksort(a,low,p-1);
          quicksort(a,p+1,high);
    }
  
}
void main(){
    int n;
    printf("Enter the number of elements =");
    scanf("%d",&n);
    printf("Enter the elemts in sorted manner");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    int m=n-1;
    quicksort(a,0,m);
    printf(" sorted manner");
    for(int i=0;i<n;i++){
        printf("%d \t",a[i]);

    }
}
