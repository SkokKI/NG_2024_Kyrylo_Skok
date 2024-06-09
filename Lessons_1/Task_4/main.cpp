#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int first_num = 0;
    int second_num = 0;
    char operation;
    cout << "Input first numer\n";
    cin >> first_num;
    cout << "Input second numer\n";
    cin >> second_num;
    cout << "Input operation(+,-,*,/,s(square),r(root))\n";
    cin >> operation;
    switch (operation) {
    case '+':
        cout << first_num+second_num;
        break;
    case '-':
        cout << first_num-second_num;
        break;
    case '*':
        cout<< first_num*second_num;
        break;
    case '/':
        cout << first_num/second_num;
        break;
    case 's':
        cout << "Square of first number = " << pow(first_num, 2 ) << "\nSquare of second number = " << pow(second_num, 2);
        break;
    case 'r':
        cout << "Root of first number = " << sqrt(first_num)<< "\nSquare of second number = " << sqrt(second_num);
        break;
    default:
        cout << "Error, try again";
        break;
    }
    return 0;
}
