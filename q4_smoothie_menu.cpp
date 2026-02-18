/*
Name: Trevor Romano.
Course: CIS150.
Lab: Lab 05.
Description: Processes smoothie menu choices with do-while and switch.
Date: 2026-02-18.
*/

#include <iostream>
#include <string>

using namespace std;

void displayMenu(int &selection);

int main()
{
    // set starting smoothie values
    string flavor = "strawberry";
    string size = "small";
    bool addSprinkle = false;
    int selection = 0;

    do
    {
        // show current smoothie before menu
        cout << "current selection " << size << " " << flavor << " ";
        if (addSprinkle)
        {
            cout << "with sprinkles" << endl;
        }
        else
        {
            cout << "without sprinkles" << endl;
        }

        displayMenu(selection);

        // update order from selected option
        switch (selection)
        {
            case 1:
                cout << "enter new flavor" << endl;
                cin >> flavor;
                break;
            case 2:
                size = "small";
                break;
            case 3:
                size = "large";
                break;
            case 4:
                addSprinkle = true;
                break;
            case 5:
                break;
            default:
                break;
        }

    } while (selection != 5);

    cout << "thank you for your order of " << size << " " << flavor << " ";
    if (addSprinkle)
    {
        cout << "with sprinkles" << endl;
    }
    else
    {
        cout << "without sprinkles" << endl;
    }

    return 0;
}

void displayMenu(int &selection)
{
    do
    {
        // print menu and ask for a valid choice
        cout << "Smoothie Options:" << endl;
        cout << "1: Change the flavor." << endl;
        cout << "2: Change size to small." << endl;
        cout << "3: Change size to large." << endl;
        cout << "4: Add sprinkles." << endl;
        cout << "5: Exit." << endl;
        cout << "Please enter your choice (1-5):" << endl;

        cin >> selection;

        if (selection < 1 || selection > 5)
        {
            cout << "please enter a number from 1 to 5" << endl;
        }

    } while (selection < 1 || selection > 5);
}
