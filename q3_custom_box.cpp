/*
Name: Trevor Romano
Course: CIS150
Lab: Lab 05
Description: Prints a custom box using separate functions for border and middle sections.
Date: 2026-02-17
*/

#include <iostream>

using namespace std;

void printBorderLine(char borderChar, int width);
void printMiddleSection(char sideChar, int width, int height);

int main()
{
    // Gather box settings from the user
    char borderChar = 'X';
    char sideChar = '!';
    int boxWidth = 0;
    int boxHeight = 0;

    cout << "Enter top/bottom character: ";
    cin >> borderChar;

    cout << "Enter side character: ";
    cin >> sideChar;

    cout << "Enter width: ";
    cin >> boxWidth;

    cout << "Enter height: ";
    cin >> boxHeight;

    if (boxWidth > 0 && boxHeight > 0)
    {
        // Print top border, middle rows, and bottom border.
        printBorderLine(borderChar, boxWidth);
        printMiddleSection(sideChar, boxWidth, boxHeight);
        if (boxHeight > 1)
        {
            printBorderLine(borderChar, boxWidth);
        }
    }

    return 0;
}

void printBorderLine(char borderChar, int width)
{
    int currentColumn = 0;

    while (currentColumn < width)
    {
        // Print one border character per column.
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
        // Start each middle row with the left side character.
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
