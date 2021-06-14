#pragma once
#include <iostream>
using namespace std;
using std::cout;
using std::cin;

class Complex
{
protected:
    float real;
    float imag;
public:
    void input();
    void Display();
    friend Complex operator +(Complex c1, Complex c2);
    friend Complex operator -(Complex c1, Complex c2);
    Complex operator *(Complex c2);
    Complex operator /(Complex c2);
    Complex();
  
    


};

