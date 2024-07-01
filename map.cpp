 #include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	string name;
	int pop;
	map<string,int> states;
	map<string,int>::iterator iter;
	/*for(int j=0;j<4; j++)
	{
		cout<<"Enter State : ";
		cin>>name;
		cout<<"Enter Population : ";
		cin>>pop;
		states.insert(pair<string,int>(name,pop));
	}
	cout<<"Enter state to check : ";
	cin>>name;
	if(states.find(name)!=states.end())
	{
		pop = states[name];
		cout<<"Population : "<<pop<<endl;
	}
	else cout<<"\nState not present : ";
	for(iter = states.begin(); iter != states.end(); iter++)
		cout<<iter -> first<<"\t"<< iter -> second;*/
	int num, flag = 1, ch;
	while(flag == 1)
	{
		cout<<"<---------------Welcome to code--------------->"<<endl;
		cout<<"<-------------------Menu---------------------->"<<endl;
		cout<<"1. Create Record \n2. Display \n3. Search \n4. Exit"<<endl;
		cout<<"Enter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1 :cout<<"Enter how many record you want to enter : ";
				cin>>num;
				for(int j=0;j<num; j++)
				{
					cout<<"Enter State : ";
					cin>>name;
					cout<<"Enter Population : ";
					cin>>pop;
					states.insert(pair<string,int>(name,pop));
				}
				break;
			case 2 :cout<<"States \tPopulation"<<endl;
				for(iter = states.begin(); iter != states.end(); iter++)
				cout<<iter -> first<<"\t"<< iter -> second<<endl;
				break;
			case 3 :cout<<"Enter state to check : ";
				cin>>name;
				if(states.find(name)!=states.end())
				{
					pop = states[name];
					cout<<"Population : "<<pop<<endl;
				}
				else cout<<"\nState not present : ";
				break;
			case 4 :cout<<"Thanks for using program."<<endl;
				flag = 0;
				break;
		}
	}
	return 0;
}
