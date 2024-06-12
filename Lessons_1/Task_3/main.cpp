#include <iostream>

using namespace std;

int main()
{
    int salary = 0;
    cout << "How much do you earn?\n";
    cin>> salary;
    if(salary < 1000){
        cout << "Work more";
    }
    if(salary > 1000000){
        cout << "Yep, you are milionarie";
    }
    if(salary > 999){
            cout << "Well working";
    }
    return 0;
}
