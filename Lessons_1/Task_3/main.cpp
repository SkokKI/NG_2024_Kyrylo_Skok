#include <iostream>

using namespace std;

int main()
{
    int salary;
    cout << "How much do you earn?\n";
    cin>> salary;
    if(salary<1000){
        cout<<"Work more";
    }
    else if(salary>1000000){
        cout<<"Yep, you are milionarie";
    }
    else{
        cout<<"Well working";
    }
    return 0;
}
