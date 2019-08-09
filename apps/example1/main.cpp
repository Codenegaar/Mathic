#include <mathic/mathic.hpp>

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    double a, b;
    char opr;
    Mathic mathic;
    
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter an operator: ";
    cin >> opr;

    switch(opr)
    {
        case '+':
            cout << mathic.add(a, b) << endl;
            break;
            
        case '*':
        case 'x':
        case 'X':
            cout << mathic.mul(a, b) << endl;
            break;
            
        default:
            cout << "Invalid operator" << endl;
            return 1;
    }
    
    return 0;
}
