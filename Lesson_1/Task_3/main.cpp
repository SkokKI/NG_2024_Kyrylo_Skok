#include <iostream>

using namespace std;

int main()
{
    double salary;
    cout << "How much do you earn?\n";
    cin >> salary;
    if (salary < 1000){
        cout << "Work more!";
    }
    if (salary > 999){
        if (salary > 999999){
            cout << "Yep, you`re millionaire";
            return 0;
        }
        cout << "You are great";
    }
}
