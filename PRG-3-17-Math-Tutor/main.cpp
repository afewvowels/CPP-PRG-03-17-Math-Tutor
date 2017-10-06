//
//  main.cpp
//  PRG-3-17-Math-Tutor
//
//  Created by Keith Smith on 10/6/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a program that can be used as a math tutor for a young student. The program
//  should display two random numbers to be added, such as
//   247
//  +129
//  ----
//  The program should then pause while the student works on the problem. When the
//  student is ready to check the answer, he or she can press a key and the program will
//  display the correct solution.

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 999;
    
    int intNumber1;
    int intNumber2;
    
    int intNumberGuess;
    int intNumberSum;
    
    unsigned seed = time(0);
    
    srand(seed);
    
    intNumber1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    intNumber2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    
    intNumberSum = intNumber1 + intNumber2;
    
    cout << setw(4) << right << intNumber1 << endl;
    cout << "+" << setw(3) << right << intNumber2 << endl;
    cout << "----" << endl;
    cin >> intNumberGuess;
    cout << setw(4) << right << intNumberSum << endl;
    
    return 0;
}



