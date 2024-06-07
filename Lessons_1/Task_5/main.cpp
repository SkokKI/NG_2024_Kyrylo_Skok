#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    double number_a, number_b, number_c,root_1, root_2, discriminant;
    cout << "Input a\n";
    cin>>number_a;
    cout << "Input b\n";
    cin>>number_b;
    cout << "Input c\n";
    cin>>number_c;
    if (number_a == 0){
        root_1 = (-number_c)/number_b;
        cout<<"\nYour root ="<<root_1;
    }
    else{
        discriminant = pow(number_b,2) - 4*number_a*number_c;
        cout<< "Your discriminant = "<< discriminant<<"\n";
        if(discriminant<0){
            cout<<"This equation has no roots";
        }
        else if (discriminant == 0){
            root_1 = -number_b/(2*number_a);
            cout<<"Your root ="<<root_1;
        }
        else{
            root_1 = (-number_b-sqrt(discriminant))/(2*number_a);
            root_2 = (-number_b+sqrt(discriminant))/(2*number_a);
            cout<<"Your first root ="<<root_1<<"\n";
            cout<<"Your second root ="<<root_2;
        }
    }
    return 0;
}
