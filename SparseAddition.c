#include<stdio.h>
void main(){
    int m,n,o,p,q,r,k=1,s=1,t=1;
    int a[10][3],b[10][3],c[10][3];
    printf("Enter the number of rows in first sparse matrix");
    scanf("%d",&m);
    printf("Enter the number of columnsows in first sparse matrix");
    scanf("%d",&n);
    printf("Enter the number of no zero elements in sparse matrix");
    scanf("%d",&o);
    a[0][0]=m;a[0][1]=n;a[0][2]=o;
    for(int i=1;i<=o;i++){
        printf("Enter the triplet number %d",i);
        scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
    }
    printf("Enter the number of rows in Second sparse matrix");
    scanf("%d",&p);
    printf("Enter the number of columnsows in Second sparse matrix");
    scanf("%d",&q);
    printf("Enter the number of no zero elements in sparse matrix");
    scanf("%d",&r);
    b[0][0]=p;b[0][1]=q;b[0][2]=r;
    for(int u=1;u<=r;u++){
        printf("Enter the triplet number %d",u);
        scanf("%d%d%d",&b[u][0],&b[u][1],&b[u][2]);
    }
    c[0][0]=m;c[0][1]=n;
    printf("------------------------------------SPARSE MATRIX A------------------------------------------------------\n");
    for(int i=0;i<=o;i++){
        printf("%d \t %d \t %d ",a[i][0],a[i][1],a[i][2]);
        printf("\n");
    }
    printf("-----------------------------------------------------------------------------------------------------------\n");
    printf("------------------------------------SPARSE MATRIX A------------------------------------------------------\n");
    for(int i=0;i<=r;i++){
        printf("%d \t %d \t %d ",b[i][0],b[i][1],b[i][2]);
        printf("\n");
    }
    printf("-----------------------------------------------------------------------------------------------------------\n");
    if(m!=p || n!=q){
        printf("Cannot add");
        
    }
    else{
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[s][0]==i && a[s][1]==j && b[t][0]==i && b[t][1]==j){
                    c[k][0]=i;
                    c[k][1]=j;
                    c[k][2]=a[s][2]+b[t][2];
                    k=k+1;s=s+1;t=t+1;
                }
                else if(a[s][0]==i && a[s][1]==j){
                    c[k][0]=i;
                    c[k][1]=j;
                    c[k][2]=a[s][2];
                    k=k+1;s=s+1;
                }
                else if(b[t][0]==i && b[t][1]==j){
                    c[k][0]=i;
                    c[k][1]=j;
                    c[k][2]=b[t][2];
                    k=k+1;t=t+1;
                }
                else{

                }
            }
        }
    }
    c[0][2]=k-1;
    printf("New Matrix is ");
    for(int i=0;i<=k;i++){
        printf("%d \t %d \t %d ",c[i][0],c[i][1],c[i][2]);
        printf("\n");
    }
}