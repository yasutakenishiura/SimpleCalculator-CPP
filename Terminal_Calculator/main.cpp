#include <iostream>
#include <cmath>

void return_result(double);

using namespace std;

int main (){
    char op;
    double firstnum;
    double secondnum;
    double result;

    cout << "======CALCULATOR======" << endl;
    cout << endl;

    cout << "Enter either (+ - * /)" << endl;
    cin >> op;

    cout << "Enter the first number" << endl;
    cin >> firstnum;
    cout << "Enter the second number" << endl;
    cin >> secondnum;

    switch (op)
    {
    case '+':
        result = firstnum + secondnum;
        return_result(result);
        break;

    case '-':
        result = firstnum - secondnum;
        return_result(result);
        break;

    case '*':
        result = firstnum * secondnum;
        return_result(result);
        break;

    case '/':
        result = firstnum / secondnum;
        return_result(result);
        break;
    }

    return 0; 
}

void return_result(double result)
{
    cout << "the result of operation is: " << result;
}