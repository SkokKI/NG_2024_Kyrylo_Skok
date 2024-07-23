#include <iostream>

using namespace std;

int main()
{
    int salary = 0;
    cout << "How much do you earn?" << endl;
    cin >> salary;
    if(salary > 999){
        if(salary > 1000000){
            cout << "Yep, you are milionarie";
            return 0;
        }
        cout << "Well working";
        return 0;
    }
    if(salary < 1000){
        cout << "Work more";
        return 0;
    }
    cout << "Well working";
    return 0;
}
