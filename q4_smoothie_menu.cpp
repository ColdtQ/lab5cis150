/*
Name: Trevor Romano
Course: CIS150
Lab: Lab 05
Description: Menu-driven smoothie customization using do-while loops and a switch statement.
Date: 2026-02-18
*/

#include <iostream>
#include <string>

using namespace std;

void displayMenu(int &selection);

int main()
{
    // Start with a default smoothie selection.
    string flavor = "YourFavorite";
    string size = "Small";
    bool addSprinkle = false;
    int selection = 0;

    do
    {
        // Show current order details before each menu choice.
        cout << "Current Selection: " << size << " " << flavor << " ";
        if (addSprinkle)
        {
            cout << "With Sprinkles" << endl;
        }
        else
        {
            cout << "Without Sprinkles" << endl;
        }

        displayMenu(selection);

        switch (selection)
        {
            // Apply the user's selected customization option.
            case 1:
                cout << "Enter new flavor: ";
                cin >> flavor;
                break;
            case 2:
                size = "Small";
                break;
            case 3:
                size = "Large";
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

    cout << "Thank you for your order of: " << size << " " << flavor << " ";
    if (addSprinkle)
    {
        cout << "With Sprinkles" << endl;
    }
    else
    {
        cout << "Without Sprinkles" << endl;
    }

    return 0;
}

void displayMenu(int &selection)
{
    do
    {
        // Show current order details before each menu choice.
        cout << "Smoothie Options" << endl;
        cout << "1. Change the flavor" << endl;
        cout << "2. Change size to small" << endl;
        cout << "3. Change size to large" << endl;
        cout << "4. Add Sprinkles" << endl;
        cout << "5. Exit" << endl;
        cout << "Please Enter your Choice (1-5): ";

        cin >> selection;

        if (!cin)
        {
            // Recover from non-numeric input and ask again.
            cin.clear();
            char clearChar = '\0';
            do
            {
                cin.get(clearChar);
            } while (clearChar != '\n' && cin);
            selection = 0;
        }

    } while (selection < 1 || selection > 5);
}
