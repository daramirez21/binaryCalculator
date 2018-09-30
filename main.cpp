#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <bitset>

using std::cin;
using std::cout;
using std::endl;
using std::stringstream;
using std::string;
using std::bitset;

void mainMenu(string level);
void binConvMenu(string subLevel);
void subMenu2(string subLevel);
void subMenu3(string subLevel);
int exit();

long convDec2Bin(int num);
long convBin2Dec(int num);

int main()
{
    mainMenu("0");

}


void mainMenu(string level)
{
    system("CLS");
    if (level == "0"){
        do{
            cout << "Main Menu\n\n"
                    "1 Binary Converter\n" // ?
                    "2 Binary Calculator\n"
                    "3 Binary to ASCII Converter\n"
                    "(q) Quit\n"
                    ">> ";
            cin >> level;
            system("CLS");
        } while (level != "1" && level != "2" && level != "3" && level != "q");

        if (level == "1"){
            binConvMenu("0");
        }
        else if (level == "2"){
            subMenu2("0");
        }
        else if (level == "3"){
            subMenu3("0");
        }
        else if (level == "q"){
            exit();
        }
        else {
            cout << "You shouldn't be here!" << endl;
        }
    }
    else {
            cout << "You shouldn't be here!" << endl;
    }
}

void binConvMenu(string subLevel)
{
    int num = 0, bin = 0, deci = 0;
    string choice;

    if (subLevel == "0"){
        system("CLS");
        do{
            cout << "You are in: Binary Converter\n"
                    "What do you want to convert?\n\n"
                    "1 Decimal to Binary\n"
                    "2 Binary to Decimal\n"
                    "(r) Return to Main Menu\n"
                    ">> ";
            cin >> subLevel;
            system("CLS");
        } while (subLevel != "1" && subLevel != "2" && subLevel != "3" && subLevel != "r");

        while (subLevel == "1"){
            system("CLS");
            do {
                cout << "Decimal to Binary\n\n"
                        "Enter a number to convert in binary\n"
                        "(e) Return to Previous Menu\n"
                        "(r) Return to Main Menu\n"
                        ">> ";
                cin >> choice;
                    if (choice != "e" && choice != "r"){
                        stringstream toInt(choice);
                        toInt >> num;
                    }
                    else {
                        cout << "You shouldn't be here!" << endl;
                    }
                system("CLS");
                } while (choice != "e" && num <= 0 && choice != "r");

            if (choice == "e"){
                binConvMenu("0");
            }
            else if (choice == "r"){
                mainMenu("0");
            }
            else {
                system("CLS");
                bin = convDec2Bin(num);
                cout << "\n\n" << num << " decimal is equal to " << bin << " in binary\n\n" << endl;
                do{
                    cout << "What do you want to do?\n"
                            "(t) Convert Again\n"
                            "(e) Return to Binary Converter Menu\n"
                            "(r) Return to Main Menu\n"
                            "(q) Quit\n"
                            ">> ";
                    cin >> choice;
                    system("CLS");
                } while (choice != "t" && choice != "e" && choice != "r" && choice != "q");

                if (choice == "t"){
                    binConvMenu("1");
                }
                else if (choice == "e"){
                    binConvMenu("0");
                }
                else if (choice == "r"){
                    mainMenu("0");
                }
                else if (choice == "q"){
                    exit();
                }
                else {
                    cout << "You shouldn't be here!" << endl;
                }
            }
        }

        while (subLevel == "2"){
            system("CLS");
            do {
                cout << "Binary to Decimal\n\n"
                        "Enter a number to convert in decimal\n"
                        "(e) Return to Previous Menu\n"
                        "(r) Return to Main Menu\n"
                        ">> ";
                cin >> choice;
                    if (choice != "e" && choice != "r"){
                        stringstream toInt(choice);
                        toInt >> num;
                    }
                    else {
                        cout << "You shouldn't be here!" << endl;
                    }
                system("CLS");
                } while (choice != "e" && num <= 0 && choice != "r");

            if (choice == "e"){
                binConvMenu("0");
            }
            else if (choice == "r"){
                mainMenu("0");
            }
            else {
                system("CLS");
                deci = convBin2Dec(num);
                cout << "\n\n" << num << " decimal is equal to " << deci << " in decimal\n\n" << endl;
                do{
                    cout << "What do you want to do?\n"
                            "(t) Convert Again\n"
                            "(e) Return to Binary Converter Menu\n"
                            "(r) Return to Main Menu\n"
                            "(q) Quit\n"
                            ">> ";
                    cin >> choice;
                    system("CLS");
                } while (choice != "t" && choice != "e" && choice != "r" && choice != "q");

                if (choice == "t"){
                    binConvMenu("2");
                }
                else if (choice == "e"){
                    binConvMenu("0");
                }
                else if (choice == "r"){
                    mainMenu("0");
                }
                else if (choice == "q"){
                    exit();
                }
                else {
                    cout << "You shouldn't be here!" << endl;
                }
            }
        }

        while (subLevel == "r"){
            mainMenu("0");
        }
    }

    else {
        cout << "You shouldn't be here!" << endl;
    }
}

void subMenu2(string subLevel)
{
    if (subLevel == "0"){
        do{
            cout << "You are in: Binary Calculator\n"
                    "What do you want to calculate?\n\n"
                    "1 Binary Addition\n"
                    "2 Binary Subtraction\n\n"
                    "(r) Return to Main Menu\n"
                    ">> ";
            cin >> subLevel;
            system("CLS");
        } while (subLevel != "1" && subLevel != "2" && subLevel != "3" && subLevel != "r");

        if (subLevel == "1"){
            exit();
        }
        else if (subLevel == "2"){
            exit();
        }
        else if (subLevel == "3"){
            exit();
        }
        else if (subLevel == "r"){
            mainMenu("0");
        }
        else {
            cout << "You shouldn't be here!" << endl;
        }
    }
}

void subMenu3(string subLevel)
{
    if (subLevel == "0"){
        do{
            cout << "You are in: Binary to ASCII Converter\n"
                    "What do you want to convert?\n\n"
                    "1 Binary Addition\n"
                    "2 Binary Subtraction\n\n"
                    "(r) Return to Main Menu\n"
                    ">> ";
            cin >> subLevel;
            system("CLS");
        } while (subLevel != "1" && subLevel != "2" && subLevel != "3" && subLevel != "r");

        if (subLevel == "1"){
            exit();
        }
        else if (subLevel == "2"){
            exit();
        }
        else if (subLevel == "3"){
            exit();
        }
        else if (subLevel == "r"){
            mainMenu("0");
        }
        else {
            cout << "You shouldn't be here!" << endl;
        }
    }
}

// Binary to Decimal Conversion
long convDec2Bin(int num){
    long binNum = 0;
    int rem, i = 1;

    while (num > 0){
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

    while (num > 0){
        rem = num % 10;
        decNum = decNum + rem * b;
        b = b * 2;
        num = num / 10;
    }
    return num;
}

int exit()
{
    system("CLS");
        cout << "=============" << endl;
        cout << "= Exiting...=" << endl;
        cout << "=============" << endl;
    return 0;
}
