#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class item
{
	private :
		int id;
		string name;
		float price;
	
	public :
		void getdata()
		{
			cout<<"Enter the ID : ";
			cin>>id;
			cout<<"Enter the Name : ";
			cin>>name;
			cout<<"Enter the price : ";
			cin>>price;
		}
		void putdata()
		{
			cout<<id<<"\t"<<name<<"\t"<<price<<endl;
		}
		friend bool compid(item i1,item i2);
		friend bool compname(item i1,item i2);
		friend bool compprice(item i1,item i2);
		friend bool operator==(item i1,int val);
};
bool compid(item i1,item i2)
{
    return (i1.id < i2.id);
}
bool compname(item i1,item i2)
{
    return (i1.name < i2.name);
}
bool compprice(item i1,item i2)
{
    return (i1.price < i2.price);
}
bool operator==(item i1,int val)
{
    
    return (i1.id == val);
}
int main()
{
	vector<item> v;
	vector<item>:: iterator i;
	item l;
	item l1,l2;
 	
    int flag = 1,ch;
    while(flag == 1)
    {
        cout<<"<---------------Welcome to code--------------->"<<endl;
		cout<<"<-------------------Menu---------------------->"<<endl;
		cout<<"1. Create Record \n2. Display \n3. Sort \n4. Search \n5. Exit"<<endl;
		cout<<"Enter your choice : ";
		cin>>ch;
		switch(ch)
		{
		   case 1:	for(int j=0; j<4; j++)
	                {
	                	l.getdata();
	                	v.push_back(l);
	                }
	                break;
	       case 2:  cout<<"Display Record"<<endl;
	                cout<<"ID \tName \tPrice"<<endl;
	                for(i=v.begin(); i!=v.end(); i++)
	                {
	                	i -> putdata();
	                }
	                break;  
	       case 3:  int d;
	                cout<<"Sorting based on (1. ID / 2. Name / 3. Price) : ";
	                cin>>d;
	                switch(d)
	                {
	                    case 1: sort(v.begin(),v.end(),compid);
	                             for(i=v.begin();i!=v.end();i++)
                                {
                                    i->putdata();
                                }
                                break;
                        case 2: sort(v.begin(),v.end(),compname);
                                for(i=v.begin();i!=v.end();i++)
                                {
                                    i->putdata();
                                }
                                break;
                        case 3: sort(v.begin(),v.end(),compprice);
                                for(i=v.begin();i!=v.end();i++)
                                {
                                    i->putdata();
                                }
                                break;
                        default:cout<<"Please fill correct choice : "<<endl;
                                break;
	                }
	                break;
	        case 4: int val;
	                cout<<"Enter the item code to be search : ";
	                cin>>val;
	                find(i=v.begin(),i=v.end(),val);
	                if(i == v.end())
	                {
	                    cout<<"Item doesn't found"<<endl;
	                }
	                else
	                    i->putdata();
	                break;
	        case 5: cout<<"Thanks for using program."<<endl;
	                flag = 0;
	                break;
	        default:cout<<"Enter the correct choice."<<endl;
	                break;
		}
  	}
	return 0;
}