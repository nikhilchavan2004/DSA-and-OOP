#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream o;
    string write;
    int k;
    char c;

    o.open("data1.txt");

    do
    {
        getline(cin, write);
        o << write << endl;
        cout << "Press 1 for more information writeup or press any key to end" << endl;
        cin >> k;
        cin.get();
    } while (k == 1);
    o.close();

    ifstream i;
    i.open("data1.txt");
    int cnt = 0, vcnt = 0, nl = 0;
    while (i.get(c))
    {
        cout << c;
        cnt++;
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            vcnt++;
        }
        if (c == '\n')
        {
            nl++;
        }
    }
    i.close();
    cout << endl;
    cout << "new line            " << nl << endl;
    cout << "vowels are          " << vcnt << endl;
    cout << "count of characters " << cnt << endl;

    return 0;
}
