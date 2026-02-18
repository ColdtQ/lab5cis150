/*
Name: Trevor Romano.
Course: CIS150.
Lab: Lab 05.
Description: Prints a custom box using two helper functions.
Date: 2026-02-18.
*/

#include <iostream>

using namespace std;

void printBorderLine(char borderChar, int width);
void printMiddleSection(char sideChar, int width, int height);

int main()
{
    // read box settings from the user
    char borderChar = 'X';
    char sideChar = '!';
    int boxWidth = 0;
    int boxHeight = 0;

    cout << "enter top and bottom character" << endl;
    cin >> borderChar;

    cout << "enter side character" << endl;
    cin >> sideChar;

    cout << "enter width" << endl;
    cin >> boxWidth;

    cout << "enter height" << endl;
    cin >> boxHeight;

    if (boxWidth <= 0 || boxHeight <= 0)
    {
        cout << "width and height must be greater than zero" << endl;
        return 0;
    }

    // print box lines in order
    printBorderLine(borderChar, boxWidth);
    printMiddleSection(sideChar, boxWidth, boxHeight);

    if (boxHeight > 1)
    {
        printBorderLine(borderChar, boxWidth);
    }

    return 0;
}

void printBorderLine(char borderChar, int width)
{
    int currentColumn = 0;

    while (currentColumn < width)
    {
        // print one border character
        cout << borderChar;
        currentColumn += 1;
    }

    cout << endl;
}

void printMiddleSection(char sideChar, int width, int height)
{
    int middleRowCount = height - 2;
    int currentRow = 0;

    while (currentRow < middleRowCount)
    {
        // print left side then inside spaces
        cout << sideChar;

        int middleSpaceCount = width - 2;
        int currentSpace = 0;

        while (currentSpace < middleSpaceCount)
        {
            cout << " ";
            currentSpace += 1;
        }

        if (width > 1)
        {
            cout << sideChar;
        }

        cout << endl;
        currentRow += 1;
    }
}
