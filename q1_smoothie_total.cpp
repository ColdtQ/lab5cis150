/*
Name: Trevor Romano
Course: CIS150
Lab: Lab 05
Description: Counts smoothie sales using sentinel-controlled input and prints a sales message.
Date: 2026-02-18
*/

#include <iostream>

using namespace std;

void printSalesMessage(int totalSold);

int main()
{
    // Keep track of one receipt at a time and our running total.
    int receiptSmoothies = 0;
    int totalSold = 0;

    cout << "Enter number of smoothies sold for each receipt (9999 to stop): ";
    cin >> receiptSmoothies;

    while (receiptSmoothies != 9999)
    {
        // Add each receipt to today's smoothie count.
        totalSold += receiptSmoothies;
        cout << "Enter number of smoothies sold for each receipt (9999 to stop): ";
        cin >> receiptSmoothies;
    }

    cout << "Total smoothies sold: " << totalSold << endl;
    printSalesMessage(totalSold);

    return 0;
}

void printSalesMessage(int totalSold)
{
    // Pick a message based on how strong sales were.
    if (totalSold > 250)
    {
        cout << "Another record setting sales day!" << endl;
    }
    else if (totalSold >= 100)
    {
        cout << "The advertising is really starting to help" << endl;
    }
    else
    {
        cout << "Maybe we need add some different flavors." << endl;
    }
}
