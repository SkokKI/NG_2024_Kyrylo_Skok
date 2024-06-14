#include <iostream>

using namespace std;

int main()
{
    char sentence[256] = "";
    int words_counter = 1;
    char first_letter = ' ';
    char second_letter = ' ';
    char space = ' ';
    cout << "Input your sentences" << endl;
    cin.getline(sentence, 256);
    for(int letters_counter = 0; letters_counter < sizeof(sentence); letters_counter++){
        first_letter = sentence[letters_counter];
        second_letter = sentence[letters_counter + 1];
        if(first_letter == space && second_letter != space){
            words_counter++;
        }
    }
    cout << words_counter;
    return 0;
}
