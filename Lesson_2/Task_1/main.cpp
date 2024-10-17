#include <iostream>

using namespace std;

int main()
{
    const int array_len = 5;
    int users_num [array_len] = {0, 0, 0, 0, 0};
    int arrays_counter = 0;
    for(; arrays_counter < array_len; arrays_counter++){
        cout << "Input " << arrays_counter + 1 << " number\n";
        cin >> users_num[arrays_counter];
    }
    arrays_counter = 0;
    for(; arrays_counter < array_len; arrays_counter++){
        cout << users_num[arrays_counter] << ",";
    }
    return 0;
}
