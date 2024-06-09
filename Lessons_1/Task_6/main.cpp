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
    for(int counter_1 = 1; counter_1 < size + 1; counter_1++){
        spaces--;
        for (int counter_2 = 0; counter_2 < spaces; counter_2++){
            cout << " ";
        }
        for(int counter_3 = 0; counter_3 < counter; counter_3++){
            cout << "*";
        }
        counter += 2;
        cout << endl;
    }
    spaces = size;
    for (int counter_2 = 0; counter_2 < spaces - 1; counter_2++){
        cout << " ";
    }
    cout << "*";
    cout << endl;
    return 0;
}
