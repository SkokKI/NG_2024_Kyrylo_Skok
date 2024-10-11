#include <iostream>

using namespace std;

int main()
{
    double first_num = 0;
    double second_num = 0;
    double result = 0;
    char math_operattion = ' ';
    cout << "Input first number" << endl;
    cin >> first_num;
    cout << "Input second number" << endl;
    cin >> second_num;
    cout << "Input math opperation" << endl;
    cin >> math_operattion;
    switch (math_operattion) {
    case '+':
        result = first_num + second_num;
        break;
    case '-':
        result =  first_num - second_num;
        break;
    case '*':
        result =  first_num * second_num;
        break;
    case '/':
        if (second_num != 0){
        result =  first_num / second_num;
        }
        else{
            cout << "Error, you cant division on 0";
        }
        break;
    default:
        cout << "Error, your math opperation or numers is unccorect";
        break;
    }
    cout << "Your result = " << result;
    cout << endl;
    return 0;
}
