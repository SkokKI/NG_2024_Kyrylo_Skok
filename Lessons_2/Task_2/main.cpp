#include <iostream>

using namespace std;

int main()
{
    int values[20];
    int value = 0;
    int max_values = 0;
    int number_counter = 0;
    char space = ' ';
    for(int array_counter = 0; array_counter < 20; array_counter++){
        values[array_counter] = 0;
    }
    for(int array_counter = 0; array_counter < 20; array_counter++){
        cout << "Input your value: ";
        cin >>  value;
        values[array_counter] = value;
        if(value == 0){
            break;
        }
        number_counter++;
        if(max_values < values[array_counter]){
            max_values = values[array_counter];
        }
    }
    for(int string_counter = 0; string_counter < number_counter; string_counter++){
        for(int space_counter = 0; space_counter < (max_values - values[string_counter]) / 2; space_counter++){
            cout << space;
        }
        for(int star_counter = 0; star_counter < values[string_counter]; star_counter++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
