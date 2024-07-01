#include <iostream>
using namespace std;
#define SIZE 10
class OBST
{
    int p[SIZE];
    int w[SIZE][SIZE];
    int c[SIZE][SIZE];
    int a[SIZE];
    int r[SIZE][SIZE];
    int q[SIZE];
    int n;

public:
    void get_data()
    {
        int i;
        cout << "\n Optimal Binary Search Tree \n";
        cout << "\n Enter the number of nodes";
        cin >> n;
        cout << "\n Enter the data as…\n";
        for (i = 1; i <= n; i++)
        {
            cout << "\n a[" << i << "]";
            cin >> a[i];
        }
        for (i = 1; i <= n; i++)
        {
            cout << "\n p[" << i << "]";
            cin >> p[i];
        }
        for (i = 0; i <= n; i++)
        {
            cout << "\n q[" << i << "]";
            cin >> q[i];
        }
    }
int minv(int i,int j){
    int m;
    int k;
    int  min=32000;
    for(m=r[i][j-1];m<=r[i+1][j];i++){
        if((c[i][m-1]+c[m][j])<min){
            min =c[i][m-1]+c[m][j];
            k=m;
                    }
                    
    }return k;
}
void build(){
    int m,k;
    for(int i=0;i<=n;i++){
        w[i][i]=q[i];
       r[i][i]=c[i][i]=0;
    w[i][i+1]=q[i]+q[i+1]+p[i+1];
    r[i][i+1]=i+1;
    c[i][i+1]=q[i]+q[i+1]+p[i+1];  
      }
    w[n][n]=q[n];
r[n][n]=c[n][n]=0;
for(m=2;m<=n;m++){
    for( int i=0;i<=n-m;i++){
          w[i][j]=w[i][j-1]+q[i]+p[i];
    k=minv(i,j);
    c[i][j]=w[i][j]+c[i][k-1]+c[k][j]; 
   r[i][j]=k;
    }
}
}
void bst(){
    int i,j ,k;
    int queue[20],front=-1,rear=-1;
    cout<<r[0][n];
    cout<<c[0][n];
    queue[++rear]=0;
     queue[++rear]=n;
     for(front!=rear){
        i= queue[++front];
        j= queue[++front];
        k=r[i][j];
        cout<<k;     }
        if(r[i][k-1]!=0){
            cout<<r[i][j-1];
     queue[++rear]=i;
     queue[++rear]=k-1;

        }
        else
{
    cout<<"\t\t";
}  if(r[k][j]!=0){
            cout<<r[k][j];
     queue[++rear]=k;
     queue[++rear]=j;
  if(r[i][k-1]!=0){
            cout<<r[i][j-1];
     queue[++rear]=i;
     queue[++rear]=k-1;

        }        else
{
    cout<<"\t\t";}


        };
}int main(){
    OBST o;
    o.get_data();
    o.bst();
    

}