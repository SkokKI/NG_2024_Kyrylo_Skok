#include <iostream>

using namespace std;

int main()
{
    int size = 0;
    int counter = 1;
    int spaces = 0;
    cout << "Input size of tree\n";
    cin >> size;
    spaces = size;
    for(int i = 1; i < size + 1; i++){
        spaces--;
        for (int k = 0; k < spaces; k++){
            cout << " ";
        }
        for(int j = 0; j < counter; j++){
            cout << "*";
        }
        counter += 2;
        cout << endl;
    }
    spaces = size;
    for (int k = 0; k < spaces - 1; k++){
        cout << " ";
    }
    cout << "*";
    cout << endl;
    return 0;
}
