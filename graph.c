#include<stdio.h>
#include<stdlib.h>
int g[10][10],visited[20],q[20],v,e,source,front=-1,rear=-1;
void enqueue(int item){
    if(front==-1 &&rear==-1){
        front=rear=0;
        q[rear]=item;
    }
    else{
        rear=rear+1;
        q[rear]=item;
    }
}
int dequeue(){
    if(front==-1 && rear==-1){
        return -1;
    }
    else if(front==rear){
        int val=q[front];
        front=rear=-1;
        return val;
    }
    else{
        return q[front--];
    }
}
void dfs(int s){
    int i;
    visited[s]=1;
    printf("V%d ->",s);
    for(i=1;i<=v;i++){
        if(g[s][i]==1 &&visited[i]==0){
            dfs(i);
        }
    }
}
void bfs(int s){
    int i;
    visited[s]=1;
    printf("V%d ->",s);
    enqueue(s);
    while(front!=-1)
    {
        s=dequeue();
        for(i=1;i<=v;i++){
             if(g[s][i]==1 &&visited[i]==0){
                 visited[i]=1;
                    printf("V%d ->",i);
                    enqueue(i);
        }
        }
    }
    
}
void main(){
    int v1,v2;
    printf("Enter the number of vertices");
    scanf("%d",&v);
    for(int i=1;i<=v;i++){
        for(int j=1;j<=v;j++){
            g[i][j]=-1;
        }
    }
    printf("Enter the number of edges");
    scanf("%d",&e);
    for(int i=1;i<=e;i++){
        printf("Enter the vertices");
        scanf("%d %d",&v1,&v2);
        g[v1][v2]=1;
        g[v2][v1]=1;
    }
    for(int i=1;i<=v;i++){
        visited[i]=0;
    }
    printf("Enter the number of source");
    scanf("%d",&source);
    printf("------------DFS------");
    dfs(source);
    for(int i=1;i<=v;i++){
        visited[i]=0;
    }
    printf("Enter the number of source");
    scanf("%d",&source);
    printf("------------DFS------");
    bfs(source);
}
