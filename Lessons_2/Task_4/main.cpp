#include <iostream>

using namespace std;

int main()
{
    char sentence[256] = "";
    int words_counter = 0;
    int words_num = 0;
    char first_letter = ' ';
    char second_letter = ' ';
    cout << "Input your sentences" << endl;
    cin.getline(sentence, 256);
    for(int letters_counter = 0; letters_counter < sizeof(sentence); letters_counter++){
        first_letter = sentence[letters_counter];
        second_letter = sentence[letters_counter + 1];
        if(first_letter >= 'a' && first_letter <= 'z' || first_letter >= 'A' && first_letter <= 'Z' ){
            words_counter = 0;
        }
        words_counter++;
        if(words_counter == 2){
            words_num++;
        }
    }
    cout << words_num;
    return 0;
}
