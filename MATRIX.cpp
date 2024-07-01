#include <iostream>
#include <stdlib.h>
using namespace std;

int cost[10][10], i, j, k, n, qu[10], front, rear, v, visit[10], visited[10];
int stk[10], top, visit1[10], visited1[10];

int main()
{
    int m;
    cout << "Enter number of vertices : ";
    cin >> n;
    cout << "Enter number of edges : ";
    cin >> m;
cout<<"entewrcvhrte edges";
for(k=0;k<=m;k++){
    cin>>i>>j;
    cost[i][j]=1;
     cost[j][i]=1;
    }
for(i=0;i<=n;i++){
    for(j=0;j<=n;j++){
        cout<<" "<<cost[i][j];
    }cout<<endl;
}
cout<<"enter satarting vertex";
cin>>v;
visited[v]=1;
k=1;
while(k<n){
    for(j=1;j<=n;j++)
        if(cost[v][j]!=0 &&visited[v]!=1 &&visit[v]!=1){
            visit[j]=1;
            qu[++rear]=j;
        
        
    }v=qu[++front];
        cout<<v;
        k++;
visit[v]=0;
visited[v]=1;
}
cout<<"enter satarting vertex";
cin>>v;
visited[v]=1;
k=1;
while(k<n){
    for(j=1;j<=n;j++)
        if(cost[v][j]!=0 &&visited1[v]!=1 &&visit1[v]!=1){
            visit1[j]=1;
            stk[top]=j;
            top++;
        }
        
    v=stk[--top];
        cout<<v;
        k++;
visit[v]=0;
visited[v]=1;
}

return 0;}
