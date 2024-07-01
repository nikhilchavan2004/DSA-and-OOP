#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v ={1,2,3,4};
    v.push_back(5);
    cout<<v.size()<<endl;
    v.push_back(6);
    cout<<v.size()<<endl;
    v.pop_back();
cout<<v.size()<<endl;
vector <int>::iterator it;
it= v.begin();
cout<<endl<<*it;


}