//
// Created by User on 5/3/2024.
//

#include <iostream>
using namespace std;


int factorial(int number)
{
    if(number==0 || number==1)
        return 1;
    else
        return number * factorial(number-1);
}

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    int answer = factorial(number);
    cout << "Answer: " << answer;

    return 0;
}

