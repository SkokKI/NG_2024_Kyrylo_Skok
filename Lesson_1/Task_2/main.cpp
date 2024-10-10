#include <iostream>

using namespace std;

int main()
{
    double first_num = 0;
    double second_num = 0;
    char math_operattion = ' ';
    cout << "Input first number" << endl;
    cin >> first_num;
    cout << "Input second number" << endl;
    cin >> second_num;
    cout << "Input math opperation" << endl;
    cin >> math_operattion;
    switch (math_operattion) {
    case '+':
        cout << "Your result = " << first_num + second_num;
        break;
    case '-':
        cout << "Your result = " << first_num - second_num;
        break;
    case '*':
        cout << "Your result = " << first_num * second_num;
        break;
    case '/':
        if (second_num != 0){
        cout << "Your result = " << first_num / second_num;
        }
        else{
            cout << "Error, you cant division on 0";
        }
        break;
    default:
        cout << "Error, your math opperation or numers is unccorect";
        break;
    }
    cout << endl;
    return 0;
}
