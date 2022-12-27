#include<stdio.h>
struct poly{
    int coeff;
    int exp;
}a[50],b[50],c[50];
void main(){
    int n,m,k;
    printf("Enter number of terms in equation 1");
    scanf("%d",&n);
    for(int k=0;k<n;k++){
        printf("Enter the degree");
        scanf("%d",&a[k].exp);
        printf("Enter the value in X^%d",a[k].exp);
        scanf("%d",&a[k].coeff);

    }
    printf("Enter number of terms in equation 2");
    scanf("%d",&m);
    for(int k=0;k<m;k++){
        printf("Enter the degree");
        scanf("%d",&b[k].exp);
        printf("Enter the value in X^%d",b[k].exp);
        scanf("%d",&b[k].coeff);
        
    }
    int flag=0,count=0;
    for(int i=0;i<n;i++){
        flag=0;
        for(int j=0;j<m;j++){
            if(a[i].exp==b[j].exp){
                int sum=a[i].coeff+b[j].coeff;
                c[i].exp=a[i].exp;
                c[i].coeff=sum;
                count=count+1;
                flag=1;
                break;
            }
        }if(flag==0){
            c[i].exp=a[i].exp;
            c[i].coeff=a[i].coeff;
            count=count+1;
        }
    }
    for(int i=0;i<n;i++){
        flag=0;
        for(int j=0;j<m;j++){
            if(a[j].exp==b[i].exp){
                flag=1;
                break;
            }
        }if(flag==0){
            c[count].exp=b[i].exp;
            c[count].coeff=b[i].coeff;
            count=count+1;
        }
    }
    
    for(int i=0;i<count-1;i++){
        printf("%dX^%d",c[i].coeff,c[i].exp);
        printf("+ ");
    }
}
