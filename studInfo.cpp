#include <bits/stdc++.h>
using namespace std;
class tel
{
public:
    int rollno, roll1;
    char name[10];
    char div;
    char address[20];
    void ac()
    {
        cout << "\nEnter Roll Number : ";
        cin >> rollno;
        cout << "Enter the Name : ";
        cin >> name;
        cout << "Enter the Division:";
        cin >> div;
        cout << "Enter the Address:";
     
        cin >> address;
    } 
    void ac1(){
        cout<<"enter modify rollno";
        cin>>rollno;
    }
 void ac2(){
        cout<<"enter modify name";
        cin>>name;
    }
int getr(){
        return rollno;
    }
    void show()
{
    cout<<"shoeinh all";
    cout<<name<<rollno<<address;
}};
int main(){
    tel t1;
    int roll,rec,i,j,add,n1,st,x,ch;
    char name[20],name20[20],y,z;
   int  count =0;
   fstream f,g;
   do{
    cout<<"1.insert 2.show ,3.edit,4.delete";
    cout<<"enter hte choice";
    cin>>ch;
    switch (ch)
    {
    case 1:
          f.open("student.txt" ,ios::out);
          x:
         t1.ac();
         f.write((char*)&t1,(sizeof(t1)));
         cout<<"add more";
         if(z=='y')
         goto x;
         else {
        f.close();

            break;
    }
    case 2:
         f.open("student.txt" ,ios::in);
         f.read((char*)&t1,(sizeof(t1)));
            while(f){
                t1.show();
                 f.write((char*)&t1,(sizeof(t1)));
            }
         
         f.close();
         break;
   case 3:
        cout<<"enter te recode to be searched";
        cin>>rec;
         f.open("student.txt" ,ios::in|ios::out);
         f.read((char*)&t1,(sizeof(t1))) ;   
         while (f)
         {
            if(rec==t1.rollno){
                cout<<"rec found";
                add =f.tellg();
                f.seekg(0,ios::beg);
                 st =f.tellg();
                 n1=(add-st)/(sizeof(t1));
                 f.seekp((n1-1)*(sizeof(t1)),ios::beg);
                 t1.ac();
                   f.write((char*)&t1,(sizeof(t1)));

                 f.close();
                 count++;
                 break;
            }         f.read((char*)&t1,(sizeof(t1))) ;   
         }
      case 4:
      cout<<"enter roll to be deleted";
      cin>>roll;
           f.open("student.txt" ,ios::in);
           g.open("temp.txt" ,ios::out);
              f.read((char*)&t1,(sizeof(t1))) ;
              while (!f.eof())
              {
                if(t1.getr()!=roll)
                      g.write((char*)&t1,(sizeof(t1)));

                    f.read((char*)&t1,(sizeof(t1))) ;
                

              }
              f.close();
              g.close();
              remove("student.txt");
              rename("temp.txt","student.txt");
               break;         
  
   }}
   while(ch!=5);
   return 0;
}