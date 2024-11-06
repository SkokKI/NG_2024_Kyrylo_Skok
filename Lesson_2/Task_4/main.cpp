#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string user_line;
    const int array_len = 128;
    int letters_array [array_len];
    for(int num_array_counter = 0; num_array_counter < array_len; num_array_counter++){
        letters_array[num_array_counter] = 0;
    }
    cout << "Input your line" << endl;
    getline(cin, user_line);
    for(int line_counter = 0; line_counter < user_line.length(); line_counter++){
        letters_array[line_counter];
        if(isalpha(toupper(user_line[line_counter])) == true){
            letters_array[user_line[line_counter]]++;
        }
    }
    for(int letters_counter = 0; letters_counter < array_len; letters_counter++){
        if(letters_array[letters_counter] != 0){
            cout << char(letters_counter) << " was used " << letters_array[letters_counter] << " times" << endl;
        }
    }
    return 0;
}
