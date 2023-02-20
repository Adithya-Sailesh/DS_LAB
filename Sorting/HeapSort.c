#include<stdio.h>

void display(int a[],int n){
    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
}
void heapify(int a[],int n,int i){
    int l=2*i+1;
    int r=(2*i)+2;
    int largest=i;
    if(l<n && a[largest]<a[l]){
        largest=l;
    }
    if(r<n && a[largest]<a[r]){
        largest=r;
    }
    if(largest!=i){
        int temp=a[i];
        a[i]=a[largest];
        a[largest]=temp;
        heapify(a,n,largest);
    }
}
void buildmax(int a[],int n){
    for(int i=(n/2)-1;i>=0;i--){
        heapify(a,n,i);
    }
}
void heapsort(int a[],int n){
    buildmax(a,n);
    for(int i=n-1 ;i>=0;i--){
        int temp=a[0];
        a[0]=a[i];
        a[i]=temp;
        heapify(a,i,0);
    }
}
void main(){
    int a[10],n;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Befor sortinh\n");
    display(a,n);
    printf("\nAfter sorting\n");
    heapsort(a,n);
    display(a,n);
}
