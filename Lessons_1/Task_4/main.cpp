#include <iostream>

using namespace std;

int main()
{
    int result,first_num,second_num;
    char operation;
    cout << "Input first numer\n";
    cin >> first_num;
    cout << "Input second numer\n";
    cin >> second_num;
    cout << "Input operation\n";
    cin >> operation;
    switch (operation) {
    case '+':
        result = first_num+second_num;
        cout<<result;
        break;
    case '-':
        result = first_num-second_num;
        cout<<result;
        break;
    case '*':
        result = first_num*second_num;
        cout<<result;
        break;
    case '/':
        result = first_num/second_num;
        cout<<result;
        break;
    default:
        cout << "Error, try again";
        break;
    }
    return 0;
}
