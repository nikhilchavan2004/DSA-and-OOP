#include<iostream>
#include<string.h>
using namespace std;
class Student
{
int roll_number;
string name,dob;
string addr;
string licno;
string phn;
static int count;
public:
void getdata();
void display();
int search()
{
return roll_number;
}
void update_name();
void update_dob();
void update_addr();
void update_licno();
void update_phn();
};
int Student::count=0;
void Student::getdata()
{
count++;
roll_number=count;
cout<<"Enter the name of student:";
cin.ignore();
getline(cin,name);
cout<<"Enter the Date of birth of the student :";
cin>>dob;
cout<<"Enter the address of the student :";
cin.ignore();
getline(cin,addr);
cout<<"Enter the driving license number of the student :";
getline(cin,licno);
cout<<"Enter the phone number the student:";
cin.ignore();
getline(cin,phn);
}
void Student::display()
{
cout<<"Name of the student is "<<name<<endl;
cout<<"Roll number is "<<roll_number<<endl;
cout<<"Date of birth is "<<dob<<endl;
cout<<"The Address is "<<addr<<endl;
cout<<"Driving license number of the student is "<<licno<<endl;
cout<<"Phone number of student is "<<phn<<endl;
}
inline void Student::update_dob()
{
cout<<"Enter the updated Date of birth of student : ";
cin>>dob;
}
inline void Student::update_name()
{
cout<<"Enter the updated Name of student : ";
cin.ignore();
getline(cin,name);
}
inline void Student::update_addr()
{
cout<<"Enter the updated address of the student : ";
cin.ignore();
getline(cin,addr);
}
inline void Student::update_licno()
{
cout<<"Enter the updated license name of student : ";
cin>>licno;
}
inline void Student::update_phn()
{
    cout<<"Enter the updated Phone number of student : ";
cin>>phn;
}

int main()
{
Student s[10];
int i,j,n,op,key,del;
int flag,flag1,r,y,flags;
int modify,option;
cout<<"Enter the number of student data to be input: ";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"----------------------------"<<endl;
s[i].getdata();
cout<<"----------------------------"<<endl;
}
flag=1;
while (flag==1)
{
cout<<"---------MENU----------"<<endl;
cout<<"1:Display the data of student "<<endl;
cout<<"2:Search a student"<<endl;
cout<<"3:Update the data"<<endl;
cout<<"4:Delete a data of a student "<<endl;
cout<<"5:Exit"<<endl;
cout<<"ENTER YOUR CHOICE :"<<endl;
cin>>op;


switch(op)
   {
    case 1:
        for (i=0;i<n;i++)
        {
        cout<<"----------------------------"<<endl;
            s[i].display();
            cout<<"----------------------------"<<endl;
        }
        break;

    case 2:
        cout << "Enter the Roll number of the student to be searched: " ;
        cin >> key;
        flag1=0;
        for (i=0;i<n;i++)
        {
            r = s[i].search();
            if (r == key)
            {
                cout << "Match found" << endl;
                cout<<"----------------------------"<<endl;
                s[i].display();
                cout<<"----------------------------"<<endl;
                flag1 = 1;
            }
        }
        if (flag1 == 0)
        {
            cout << "Match not found" << endl;
        }
        break;
       
    case 3:
    cout<<"Enter the Roll number of student to updates the details: "<<endl;
    cin>>modify;
    flags=1;
    while(flags==1)
    {

    for(i=0;i<n;i++)
    {
    r=s[i].search();
    if(r==modify)
    {
    cout<<"---------MENU----------"<<endl;
            cout<<"1:Change the name "<<endl;
           cout<<"2:Change the Date of Birth"<<endl;
           cout<<"3:Change the Address of the student "<<endl;
           cout<<"4:Change the Driving license of the student "<<endl;
           cout<<"5:Change the Phone number of the student "<<endl;
           cout<<"6: Exit"<<endl;
           cout<<"ENTER YOUR CHOICE :"<<endl;
           cin>>option;
    switch(option)
    {
    case 1:
    s[i].update_name();
    cout<<"----------------------------"<<endl;
    s[i].display();
    cout<<"----------------------------"<<endl;
    break;
   
    case 2:
    s[i].update_dob();
    cout<<"----------------------------"<<endl;
    s[i].display();
    cout<<"----------------------------"<<endl;
       break;
       
    case 3:
    s[i].update_addr();
    cout<<"----------------------------"<<endl;
    s[i].display();
    cout<<"----------------------------"<<endl;
    break;
   
    case 4:
    s[i].update_licno();
    cout<<"----------------------------"<<endl;
    s[i].display();
    cout<<"----------------------------"<<endl;
    break;
   
    case 5:
    s[i].update_phn();
    cout<<"----------------------------"<<endl;
    s[i].display();
    cout<<"----------------------------"<<endl;
    break;
   
    case 6:
    flags=0;
    break;
   
    default:
    cout<<"Incorrect choice Please enter the appropiate choice ";
}
}
}
    }
    break;
   
    case 4:
    cout<<"The Roll number of student whose data should be delete: ";
    cin>>del;
   
    for(i=0;i<n;i++)
    {
    r=s[i].search();
    if(r==del)
    {
       for(j=i;j<n-1;j++)
       {
    s[j]=s[j+1];
    }
    n--;
}
}
for(i=0;i<n;i++)
{
   s[i].display();
   cout<<"----------------------------"<<endl;
}

break;

    case 5:
     cout<<"Thank You"<<endl;
    flag=0;
    break;
   
default:
    cout<<"Incorrect choice Please enter the appropiate choice ";

    }
}
}
