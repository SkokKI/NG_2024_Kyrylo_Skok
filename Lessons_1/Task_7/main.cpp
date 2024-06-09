#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double N;
    double x;
    double y;
    double result;
    cout<<"Input N(radius)\n";
    cin>> N;
    cout<<"Input x(Point x of stalker)\n";
    cin>> x;
    cout<<"Input y(Point y of stalker)\n";
    cin>> y;
    x = pow(x,2);
    y = pow(y,2);
    x = sqrt(x);
    y = sqrt(y);
    if(N<x||N<y){
        cout<<"Error";
    }
    else{
        result = x+y;
        cout<<result;
    }
    return 0;
}
