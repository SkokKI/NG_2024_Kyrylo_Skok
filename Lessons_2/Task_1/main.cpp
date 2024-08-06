#include <iostream>

using namespace std;

int main()
{
    int bank_accounts [10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int money = 0;
    int sum_accounts = 0;
    int bank_account_num = 0;
    int choose_user = 0;
    while(true){
        cout << "Enter your bank account\n";
        cin >> bank_account_num;
        cout << "Do you want add or minus your money from bank account?\n1.Add money\n2.Minus money\n";
        cin >> choose_user;
        cout << "How much money?\n";
        cin >> money;
        if (bank_account_num > 10 || bank_account_num < 1 || money < 0){
            cout << "Error\n";
        }
        else{
            bank_account_num -= 1;
            if(choose_user == 1){
                bank_accounts[bank_account_num] += money;
            }
            else if(choose_user == 2){
                bank_accounts[bank_account_num] -= money;
            }
            else{
                cout << "Error\n";
            }
        }
        int min_max_res = bank_accounts[0];
        cout << "If you want see on sum of every bank accounts, display all bank accounts or max&min value on bank accounts\nEnter your variant\n1.Sum\n2.Max/min\n3.All accounts\n";
        cin >> choose_user  ;
        switch (choose_user){
            case 1:
                //Display sum of every bank accounts
                for(int counter_accounts = 0; counter_accounts < 10; counter_accounts++){
                    sum_accounts += bank_accounts [counter_accounts];
                }
                cout << "Sum of accounts = " << sum_accounts << endl;
                break;
            case 2:
                //Display maximal value on bank accounts
                for(int counter_max_values = 0; counter_max_values < 10; counter_max_values++){
                    if(min_max_res < bank_accounts [counter_max_values]){
                        min_max_res = bank_accounts [counter_max_values];
                        bank_account_num = counter_max_values;
                    }
                }
                //Display minimal value on bank accounts
                cout << "Numer of account " << bank_account_num + 1 << " Maximal value of accounts = " << min_max_res << endl;
                for(int counter_min_values = 0; counter_min_values < 10; counter_min_values++){
                    if(min_max_res > bank_accounts [counter_min_values]){
                        min_max_res = bank_accounts [counter_min_values];
                        bank_account_num = counter_min_values;
                    }
                }
                cout << "Numer of account " << bank_account_num + 1 << " Minimal value of accounts = " << min_max_res << endl;
                break;
            case 3:
                //Display every bank accounts
                for(int counter_bank_accounts = 0; counter_bank_accounts < 10; counter_bank_accounts++){
                    cout << counter_bank_accounts + 1 << "." << bank_accounts[counter_bank_accounts] << "\n";
                }
                break;
            default:
               cout << "Error";
               break;
        }
    }
    return 0;
}

