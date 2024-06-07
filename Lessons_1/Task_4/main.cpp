#include <iostream>

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
    cout << "Input operation\n";
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
    default:
        cout << "Error, try again";
        break;
    }
    return 0;
}
