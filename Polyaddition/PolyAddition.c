#include<stdio.h>
void main(){
    int a[100],b[100],c[100],n,m,big;
    printf("Enter the degree of first polynomial =");
    scanf("%d",&n);
    for(int i=n;i>=0;i--){
        printf("Enter the coefficient of %d",i,"=");
        scanf("%d",&a[i]);
    }
    printf("Enter the degree of Second polynomial =");
    scanf("%d",&m);
    for(int i=m;i>=0;i--){
        printf("Enter the coefficient of %d",i,"=");
        scanf("%d",&b[i]);
    }
    if(m>n){
        big=m;
    }
    else{
        big=n;
    }
    for(int i=big;i>=0;i--){
        c[i]=a[i]+b[i];
    }
    printf("Sum of polynomials");
    for(int i=big;i>=0;i--){
        printf("%dX^%d",c[i],i);
        printf("+");
    }
}
