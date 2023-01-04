#include<stdio.h>
void main(){
    int a[10][3],b[10][3],row,col,m,n;
    printf("Enter the number of rows =");
    scanf("%d",&row);
    a[0][0]=row;
    printf("Enter the number of Columns =");
    scanf("%d",&col);
    a[0][1]=col;
    printf("Enter the number of Non-zero elements=");
    scanf("%d",&m);
    a[0][2]=m;
    for(int i=1;i<=m;i++){
        printf("Enter the values in(row,col,value)");
        scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
    }
    b[0][0]=a[0][1],b[0][1]=a[0][0],b[0][2]=a[0][2];
    int k=1;
    for(int i=0;i<a[0][1];i++){
        for(int j=1;j<=a[0][2];j++){
            if(a[j][1]==i){
                b[k][0]=i;
                b[k][1]=a[j][0];
                b[k][2]=a[j][2];
                k=k+1;
            }
        }
    }
    printf("Row \t Column \t Value \n");
    for(int i=0;i<=m;i++){
        for(int j=0;j<3;j++){
            printf("%d",a[i][j]);
            printf(" \t ");
        }printf("\n");
    }
    printf("--------------------------------------------------------------------------------\n");
    printf("Row \t Column \t Value \n");
    for(int i=0;i<=m;i++){
        for(int j=0;j<3;j++){
            printf("%d",b[i][j]);
            printf(" \t ");
        }printf("\n");
    }   }