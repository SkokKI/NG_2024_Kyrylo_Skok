#include <iostream>

using namespace std;

int main()
{
    int size = 0;
    int start_size = 0;
    cout << "Input size of tree\n";
    cin >> start_size;
    for(int counter_strings = 1; counter_strings <= start_size; counter_strings++){
        size = start_size;
        for(int counter_space = 0; counter_space < size - counter_strings; counter_space++){
            cout << " ";
        }
        for(int counter_stars = 0; counter_stars < counter_strings * 2 - 1; counter_stars++){
            cout << "*";
        }
        cout << endl;
    }
    for(int counter_space = 0; counter_space < size - 1; counter_space++){
        cout << " ";
    }
    cout << "*";
    cout << endl;
    return 0;
}
