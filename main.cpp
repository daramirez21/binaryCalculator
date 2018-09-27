#include <iostream>
#include <stdlib.h>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::stringstream;
using std::string;

void mainMenu(char level);
void returnMenu(char choice);
void binConvMenu(char subLevel);
void subMenu2(char subLevel);
void subMenu3(char subLevel);
void exit();

long convDec2Bin(int num);
long convBin2Dec(int num);




int main()
{
    mainMenu('0');
}


void mainMenu(char level)
{
    system("CLS");
    if (level == '0'){
        do{
            cout << "Main Menu\n\n"
                    "1 Binary Converter\n" // ?
                    "2 Binary Calculator\n"
                    "3 Binary to ASCII Converter\n"
                    "4 Exit\n"
                    ">> ";
            cin >> level;
            system("CLS");
        }while(level != '1' && level != '2' && level != '3' && level != '4');

        switch (level){
        case '1':
            binConvMenu('0');
            break;

        case '2':
            subMenu2('0');
            break;

        case '3':
            subMenu3('0');
            break;

        case '4':
            exit();
        }
    }else{exit();}
}

void binConvMenu(char subLevel)
{
    int num = 0, bin = 0;
    char choice;
    string strChoice;
    system("CLS");
    if (subLevel == '0'){
        do{
            cout << "You are in: Binary Converter\n"
                    "What do you want to convert?\n\n"
                    "1 Decimal to Binary\n"
                    "2 Binary to Decimal\n\n"
                    "(r) Return to Main Menu\n"
                    ">> ";
            cin >> subLevel;
            system("CLS");
        }while(subLevel != '1' && subLevel != '2' && subLevel != '3' && subLevel != 'r');

        switch(subLevel){
        case '1':

            do{
                cout << "Decimal to Binary\n\n"
                        "Enter a number to convert\n"
                        "(e) return to previous menu.\n"
                        "(r) return to main menu\n"
                        ">> ";
                cin >> strChoice;
                    if (strChoice != "e" && strChoice != "r"){
                        stringstream toInt(strChoice);
                        toInt >> num;
                    }
                system("CLS");
                }while(strChoice != "e" && num <= 1 && strChoice != "r");

            if (strChoice == "e"){
                binConvMenu('0');
            }
            else if (strChoice == "r"){
                mainMenu('0');
            }
            else{
                bin = convDec2Bin(num);
                cout << "\n\n" << num << " decimal is equal to " << bin << " in binary\n\n" << endl;
                if (bin > 0){
                    do{
                        cout << "What do you want to do?\n"
                                "(e) Convert Again\n"
                                "(r) Return to Main Menu\n"
                                "(q) Quit\n"
                                ">> ";
                        cin >> choice;
                        system("CLS");
                    } while (choice != 'e' && choice != 'r' && choice != 'q');

                    switch (choice){
                    case 'e':
                        binConvMenu('0');
                        break;

                    case 'r':
                        mainMenu('0');
                        break;

                    case 'q':
                        exit();
                        break;

                    default:
                        cout << "You shouldn't be here!" << endl;
                        break;
                    }
                }
                else{
                    exit();
                }
            }
            break;

        case '2':
            exit();
            break;

        case 'r':
            returnMenu('r');
            break;
        }
    }
}

void subMenu2(char subLevel)
{
    if (subLevel == '0'){
        do{
            cout << "You are in: Binary Calculator\n"
                    "What do you want to calculate?\n\n"
                    "1 Binary Addition\n"
                    "2 Binary Subtraction\n\n"
                    "(r) Return to Main Menu\n"
                    ">> ";
            cin >> subLevel;
            system("CLS");
        }while(subLevel != '1' && subLevel != '2' && subLevel != '3' && subLevel != 'r');

        switch(subLevel){
        case '1':
            exit();
            break;

        case '2':
            exit();
            break;

        case '3':
            exit();
            break;

        case 'r':
            returnMenu('r');
            break;

        default:
            cout << "You shouldn't be here!" << endl;
            break;
        }
    }
}

void subMenu3(char subLevel)
{
    if (subLevel == '0'){
        do{
            cout << "You are in: Binary to ASCII Converter\n"
                    "What do you want to convert?\n\n"
                    "1 Binary Addition\n"
                    "2 Binary Subtraction\n\n"
                    "(r) Return to Main Menu\n"
                    ">> ";
            cin >> subLevel;
            system("CLS");
        }while(subLevel != '1' && subLevel != '2' && subLevel != '3' && subLevel != 'r');

        switch(subLevel){
        case '1':
            exit();
            break;

        case '2':
            exit();
            break;

        case '3':
            returnMenu('r');
            break;

        default:
            cout << "You shouldn't be here!" << endl;
            break;
        }
    }
}

void returnMenu(char choice)
{
    if (choice == 'r'){ // if user chose to back to main mainMenu
        mainMenu('0');
    }
    else if (choice == 'q'){ // if user chose to quit the program
        exit();
    }
}

// Binary to Decimal Conversion
long convDec2Bin(int num){
    long binNum = 0;
    int rem, i = 1;

    while(num > 0){
        rem = num % 2;
        num = num / 2;
        binNum = binNum + rem * i;
        i = i * 10;
    }
    return binNum;
}

// Decimal to Binary Conversion
long convBin2Dec(int num){
    long decNum = 0;
    int rem, b = 1;

    while(num > 0){
        rem = num % 10;
        decNum = decNum + rem * b;
        b = b * 2;
        num = num / 10;
    }
    return num;
}

void exit()
{
    system("CLS");
        cout << "=============" << endl;
        cout << "= Exiting...=" << endl;
        cout << "=============" << endl;
}
