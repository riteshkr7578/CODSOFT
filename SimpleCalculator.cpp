// C++ Program to Make a Simple Calculatr
#include <iostream>
using namespace std;

int main(){
    float num1, num2;
    char op;

    cout << "Enter operator: +, -, *, /: ";
    cin >> op;
    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    
    switch(op){
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        
        default:
            cout << "Operator is not valid";
            break;
    }
    return 0;
}