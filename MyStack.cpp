#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <iomanip>
using namespace std;

#include "class_Stack.cpp"

int main()
{
    cout<<"\nLet's start working on stack: ";
    cout<<"\n0. Exit\n1. Stack(implemented based on array)\n2. Stack(implemented based on linked list)\n";
    cout<<"Please enter choice: ";
    int n;
    cin>>n;
    switch (n)
    {
    case 0:
        break;
    case 1:
        stack_arr();
        break;
    case 2:
        stack_list();
        break;
    default:
        cout<<"Invalid Choice";
        break;
    }
    return 0;
}
