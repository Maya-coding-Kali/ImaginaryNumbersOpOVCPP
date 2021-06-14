// ImaginaryNumbersOpOVCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Complex.h"
#include <iostream>
using namespace std;

int main()
{
    
    Complex c1, c2, c3;

    int choice = 0;
    cout << "Enter the first complex number\n";
    c1.input();
    cout << "\nEnter the first complex number";
    c2.input();
    c1.Display();
    c2.Display();
    while (choice < 5)
    {
        cout << "1. Add\n2. Sub\n3. Mult\n4. Div\n5. Exit\n";
        cin >> choice;
        if (choice == 1)
        {
            c3 = c1 + c2;
            cout << "\nAddition";
            c3.Display();

        }


        else if (choice == 2)
        {
            c3 = c1 - c2;
            cout << "\nSub";
            c3.Display();
        }
        else if (choice == 3)
        {
            c3 = c1 * c2;
        cout << "\nMultiply";
        c3.Display();
        }
        else if (choice == 4)
        {
            c3 = c1 / c2;
            cout << "\nDivision";
            c3.Display();
           
        }
       
    }



    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
