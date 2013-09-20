//
//  main.cpp
//  C++ HW Thing 1.5 - GCD
//
//  Created by William Holt on 9/19/13.
//  Copyright (c) 2013 William Holt. All rights reserved.
//

#include <iostream>
using namespace std;

int gcd(int num1, int num2)
{
    if(num1 == 0 || num2 == 0) return num1+num2; // base case
    return gcd(num2,num1%num2);
}


int main(int argc, const char * argv[])
{

    int gcdnum1;
    int gcdnum2;

    cout << "Mash in a couple of numbers: ";
    cin >> gcdnum1;
    cin >> gcdnum2;
    cout << "GCD is " << gcd(gcdnum1, gcdnum2);

}
