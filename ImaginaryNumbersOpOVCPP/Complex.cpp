#include "Complex.h"
#include <iostream>
using namespace std;
Complex::Complex()
{
    real = 0;
    imag = 0;
}
void Complex::input()
{
    cout << "Enter real number: ";
    cin >> real;
    cout << "Enter Imaginary number: ";
    cin >> imag;
}
void Complex::Display()
{
     cout << "\nOutput Complex number:\n " << real << "+" << imag << "i\n";
}
Complex operator - (Complex c1, Complex c2)
{
    Complex c3;
    c3.real = c1.real - c2.real;
    c3.imag = c1.imag - c2.imag;

    return c3;
}
Complex operator + (Complex c1, Complex c2)
{
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;

    return c3;
}
Complex Complex::operator * (Complex c2)
{
    Complex c3;
    c3.real = (real * c2.real) - (imag * c2.imag);
    c3.imag = (imag * c2.real) + (real * c2.imag);

    return c3;
}
Complex Complex::operator / (Complex c2)
{
    Complex c3;
    c3.real = ((real * c2.real) + (imag * c2.imag))/((c2.real * c2.real) + (c2.imag * c2.imag));
    c3.imag = ((imag * c2.real) + (real * -c2.imag)) / ((c2.real * c2.real) + (c2.imag * c2.imag));

    return c3;
}


