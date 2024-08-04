#include <iostream>

using namespace std;

int main()
{
    int stars_in_rows[5] = {0, 0, 0, 0, 0};
    int max_value = 0;
    int columns = 5;
    for(int stars_in_row = 0; stars_in_row < 5; stars_in_row++){
        cout << "Enter amount in " << stars_in_row + 1 << " row: ";
        cin >> stars_in_rows[stars_in_row];
        max_value = max_value < stars_in_rows[stars_in_row] ? stars_in_rows[stars_in_row] : max_value;
    }
    for(int row = 0; row < max_value; row++){
        for(int column = 0; column < columns; column++){
            if(stars_in_rows[column] > row){
                cout << '*';
            }
            else{
                cout << ' ';
            }
        }
        cout << endl;
    }
}
