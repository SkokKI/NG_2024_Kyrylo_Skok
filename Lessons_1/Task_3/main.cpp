#include <iostream>

using namespace std;

int main()
{
    int salary = 0;
    cout << "How much do you earn?" << endl;
    cin >> salary;
    if(salary > 999){
        if(salary > 999999){
            cout << "Yep, you are milionarie, but you are great";
            return 0;
        }
        cout << "Well working";
    }
    if(salary < 1000){
        cout << "Work more";
    }
    cout<< ", but you are great";
}
