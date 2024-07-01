#include<iostream>
#include <bits/stdc++.h>
#define size 5
using namespace std;
class graph
{
private:
int m, n;
public:
void add_path(int* , int* );
void adj_matrix(int arr[size][size] , int , int );
void print_matrix(int arr[size][size]);
};
void graph::add_path(int* m, int* n)
{
for (int i = 0; i < size; i++)
{
for (int j = 0; j < size; j++)
{
}
}
}
void graph::adj_matrix(int matrix[size][size], int m, int n)
{


matrix[m][n]=1;
}
void graph::print_matrix(int matrix[size][size])
{
cout<<" ";
for (int c = 0; c < size; c++)
{
cout<<" "<<"C"<<c;
}
cout<<endl;
for (int i = 0; i < size; i++) //checking matrix
{
cout<<"R"<<i<<" ";
for (int j = 0; j < size; j++)
{
cout<<matrix[i][j]<<" ";
}
cout<<endl;
}
}
int main()
{
int m, n;
char ch;
int matrix[size][size];
for (int i = 0; i < size; i++) //initializing matrix
{
for (int j = 0; j < size; j++)
{
matrix[i][j] = 0;
}
}
graph obj;
obj.print_matrix(matrix);
do
{
cout<<"0. Ahmednagar"<<endl;
cout<<"1. Pune"<<endl;
cout<<"2. Mumbai"<<endl;
cout<<"3. Nashik"<<endl;
cout<<"4. Satara"<<endl;
cout<<"Enter city codes to add path: ";
cin>>m>>n;
//path(m, n);
obj.adj_matrix(matrix, m, n);
cout<<"Add more paths?? (y/n): ";
cin>>ch;
}
while(ch=='y');
obj.print_matrix(matrix);
return 0;
}