#include <iostream>

using namespace std;

int main()
{
    string user_line;
    int num_word = 0;
    char prev_letter = ' ';
    cout << "Input your line" << endl;
    getline(cin, user_line);
    for(int symb_counter = 0; symb_counter < user_line.length(); symb_counter++){
        if(toupper(user_line[symb_counter]) >= 'A' && toupper(user_line[symb_counter]) <= 'Z'){
            if(toupper(prev_letter) >= 'A' && toupper(prev_letter) <= 'Z'){
            }
            else{
                num_word++;
            }
        }
            prev_letter = user_line[symb_counter];
    }
    cout << "Number of words in your line: " << num_word << endl;
    return 0;
}
