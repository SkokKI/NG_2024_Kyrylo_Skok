#include <iostream>

using namespace std;

int main()
{
    int size;
    int c = 1;
    int spaces;
    cout<<"Input size of tree\n";
    cin>>size;
    spaces = size;
    for(int i = 1; i<size+1; i++){
        spaces --;
        for (int k = 0; k<spaces;k++){
            cout<<" ";
        }
        for(int j =0;j<c;j++){
            cout<<"*";
        }
        c +=2;
        cout<<endl;
    }
    spaces = size;
    for (int k = 0; k<spaces-1;k++){
        cout<<" ";
    }
    cout<<"*";
    cout<<endl;
    return 0;
}
