#include <iostream>

using namespace std;

int main()
{
    int bank_accounts [10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    bool activity = true;
    while(activity == true){
    int money = 0;
    int sum_accounts = 0;
    int bank_account_num = 0;
    int choose_user = 0;
    int min_max_res = bank_accounts[0];
    cout << "Choose opperation\n"
            "1.Addition money or subtraction money\n"
            "2.Display sum\n"
            "3.Display minimal value in bank\n"
            "4.Display maximal value in bank\n"
            "5.Stop\n";
    cin >> choose_user;
    switch(choose_user){
    case 1:
        cout << "Input numer of bank account\n";
        cin >> bank_account_num;
        bank_account_num --;
        cout << "Input how much money you want addition or subtration on account\n";
        cin >> money;
        cout << "Choose opperation"
                 "1.addition money\n"
                 "2.subtration money\n";
        cin >> choose_user;
        if(choose_user == 1){
            bank_accounts[bank_account_num] += money;
        }
        else if(choose_user == 2){
            bank_accounts[bank_account_num] -= money;
        }
        else{
            cout << "Error";
        }
        break;
    case 2:
        for(int counter_accounts = 0; counter_accounts < 10; counter_accounts++){
            sum_accounts += bank_accounts [counter_accounts];
        }
        cout << "Sum of accounts = " << sum_accounts << endl;
        break;
    case 3:
        for(int counter_min_values = 0; counter_min_values < 10; counter_min_values++){
            if(min_max_res > bank_accounts [counter_min_values]){
                min_max_res = bank_accounts [counter_min_values];
                bank_account_num = counter_min_values;
        }
        }
        cout << bank_account_num << " Minimal value of accounts = " << min_max_res << endl;
        break;
    case 4:
        for(int counter_max_values = 0; counter_max_values < 10; counter_max_values++){
            if(min_max_res < bank_accounts [counter_max_values]){
                min_max_res = bank_accounts [counter_max_values];
                bank_account_num = counter_max_values;
        }
        }
        cout << bank_account_num << " Maximal value of accounts = " << min_max_res << endl;
        break;
    case 5:
        activity = false;
        break;
    default:
        cout << "Error";
        break;
    }
    system("pause");
    system("cls");
    }
    return 0;
}
