#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    double base,hight,area;
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter hight: ";
    cin>>hight;

    area = 0.5*base*hight;

    cout<<"Area of triangle= "<<area;
    getch();
}
