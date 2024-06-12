#include <iostream>

using namespace std;

int main()
{
    int size = 0;
    int counter = 1;
    int spaces = 0;
    cout << "Input size of tree\n";
    cin >> size;
    spaces = size - 1;
    for(int counter_strings = 1; counter_strings < size + 1; counter_strings++){
        for (int counter_spaces = 0; counter_spaces < spaces; counter_spaces++){
            cout << " ";
        }
        for(int counter_stars = 0; counter_stars < counter; counter_stars++){
            cout << "*";
        }
        spaces--;
        counter += 2;
        cout << endl;
    }
    spaces = size;
    for (int counter_spaces = 0; counter_spaces < spaces - 1; counter_spaces++){
        cout << " ";
    }
    cout << "*";
    cout << endl;
    return 0;
}
