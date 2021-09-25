//
// Created by HN on 24.09.2021.
//

#include "pw_generation.h"

pw_generation::pw_generation(){
    srand(time(NULL));
}

void pw_generation::input(){

    cout << "Passwort-Generator" << endl;
    cout << "Bitte gib die gewuenschte Laenge ein: (1-99)" << endl;
    cin>>_length;
    while(1){
        if(cin.fail() || _length < 1 || _length > 99)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"Error: Ungueltige Eingabe"<<endl;
            cout << "Bitte gib die gewuenschte Laenge ein: (1-99)" << endl;
            cin>>_length;
        }
        if(!cin.fail()){
            break;
        }
    }
    cin.clear();
    cout << "Soll das Passwort Sonderzeichen enthalten? (1/0):" << endl;
    cin>>_special;
    while(1){
        if(cin.fail() || _special < 0 || _special > 1)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"Error: Ungueltige Eingabe"<<endl;
            cout << "Soll das Passwort Sonderzeichen enthalten? (1/0):" << endl;
            cin>>_special;
        }
        if(!cin.fail()){
            break;
        }
    }
}
void pw_generation::createPassword(){
    char pw[101] = {0};
    char cap_letter[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char low_letter[] = {"abcdefghijklmnopqrstuvwxyz"};
    char special[] = {"!@#$%^&*"};
    char number[] = {"0123456789"};
    int table = 0;

    input();

    for(int i = 0; i < _length; i++)
    {
        table = rand() % 4;
        if(table == 0)
        {
            pw[i] = cap_letter[rand() % 25];
        }
        else if(table == 1)
        {
            pw[i] = low_letter[rand() % 25];
        }
        else if(table == 2 && _special == 0)
        {
            int temp = rand() % 3;

            if(temp == 0)
            {
                pw[i] = cap_letter[rand() % 25];
            }
            else if(temp == 1)
            {
                pw[i] = low_letter[rand() % 25];
            }
            else if(temp == 2)
            {
                pw[i] = number[rand() % 9];
            }
        }
        else if(table == 2)
        {
            pw[i] = special[rand() % 7];
        }
        else if(table == 3)
        {
            pw[i] = number[rand() % 9];
        }
    }
    cout << "Dein Passwort lautet:" << endl;
    for(int c = 0; c < _length; c++)
    {
        cout << pw[c];
    }
    cout << endl << endl;
}