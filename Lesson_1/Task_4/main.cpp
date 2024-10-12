#include <iostream>

using namespace std;

int main()
{
    char space = ' ';
    string stars_string = "*";
    int user_choise = 0;
    cout << "Input your nummer \n";
    cin >> user_choise;
    int num_of_space = user_choise - 1;
    for(int string_counter = 0; string_counter < user_choise; string_counter++){
        for(int space_counter = num_of_space; space_counter > 0; space_counter--){
            cout << space;
        }
        cout << stars_string;
        stars_string += "**";
        cout << endl;
        num_of_space -= 1;
    }
    for(int space_counter = user_choise - 1; space_counter > 0; space_counter--){
        cout << space;
    }
    cout << '*';
    cout << endl;
    return 0;
}
