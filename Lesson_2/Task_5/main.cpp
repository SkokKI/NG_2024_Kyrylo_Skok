#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string user_line;
    int num_word = 0;
    char prev_letter = ' ';
    char curr_letter = ' ';
    cout << "Input your line" << endl;
    getline(cin, user_line);
    for(int symb_counter = 0; symb_counter < user_line.length(); symb_counter++){
        curr_letter = toupper(user_line[symb_counter]);
        if(isalpha(curr_letter) == true && isalpha(prev_letter) != true){
            num_word++;
        }
            prev_letter = curr_letter;
    }
    cout << "Number of words in your line: " << num_word << endl;
    return 0;
}
