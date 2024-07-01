#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	ofstream o;
	string info;
	int ch;
	char c;
	o.open("data.txt");
	do
	{
		getline(cin,info);
		o<<info<<endl;
		cout<<"Enter more ";
		cin>>ch;
		cin.get();
	}while(ch==1);
	o.close();
	
	ifstream i;
	i.open("data.txt");
	while(i.get(c))
	{
		cout<<c;
	}
	i.close();
	return 0;
}