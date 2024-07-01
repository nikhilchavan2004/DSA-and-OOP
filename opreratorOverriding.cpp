#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imag;

public:
    Complex()//default constructor
    {
        real = 0;
        imag = 0;
    }
    Complex(int r, int i)//parametrised constructor
    {
        real = r;
        imag = i;
    }//operator overloading
    friend ostream &operator<<(ostream &o, Complex &);
    friend istream &operator>>(istream &i, Complex &);
    Complex operator+(Complex c)//overloading addition opertor
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    Complex operator-(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }
    Complex operator*(Complex c)
    {
        Complex temp;
        temp.real = (real * c.real) - (imag * c.imag);
        temp.imag = (real * c.imag) + (imag * c.real);
        return temp;
    }
    ~Complex()//destructor
    {
    }
};

istream &operator>>(istream &i, Complex &a)
{
    cout << "Enter real part : ";
    cin >> a.r
    
    
    eal;
    cout << "Enter imaginary part: ";
    cin >> a.imag;
    return i;
}
ostream &operator<<(ostream &o, Complex &a)
{
    cout << a.real << "+" << a.imag << "i" << endl;
    return o;
}

int main()
{
    Complex c4, c5, r2;//object declaration
    cin >> c4 >> c5;
    int temp = 1;
    while (temp == 1)
    { cout<<"Choose the operation you want to perform on complex numbers"<<endl;
        cout << " - - - - - - -Menu - - - - - - -" << endl
             << "1.Addition" << endl
             << "2.Substraction" << endl
             << "3.Multiplicaton" << endl
             << "4.End" << endl;
        int z;
        cout << "Enter the option" << endl;
        cin >> z;
        switch (z)
        {
        case 1:
            r2 = c4 + c5;
            cout<<"The additon is"<<endl;
            cout << r2;
            break;
        case 2:
            r2 = c4 - c5;
            cout<<"The subtraction is"<<endl;

            cout << r2;
            break;
        case 3:
            r2 = c4 * c5;
            cout<<"The multiplication is"<<endl;
            cout << r2;
            break;
        case 4:
            temp = 0;
            cout << "Thank you";
        }
    }
}