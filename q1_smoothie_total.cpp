/*
Name: Trevor Romano.
Course: CIS150.
Lab: Lab 05.
Description: Totals smoothie sales and prints one sales message.
Date: 2026-02-17.
*/

#include <iostream>

using namespace std;

void printSalesMessage(int totalSold);

int main()
{
    // store each receipt count and the running total
    int receiptSmoothies = 0;
    int totalSold = 0;

    cout << "enter smoothies sold for each receipt 9999 to stop" << endl;
    cin >> receiptSmoothies;

    while (receiptSmoothies != 9999)
    {
        // add this receipt to the daily total
        totalSold += receiptSmoothies;

        cout << "enter smoothies sold for each receipt 9999 to stop" << endl;
        cin >> receiptSmoothies;
    }

    cout << "total smoothies sold " << totalSold << endl;
    printSalesMessage(totalSold);

    return 0;
}

void printSalesMessage(int totalSold)
{
    // choose one message based on total sales
    if (totalSold > 250)
    {
        cout << "another record setting sales day" << endl;
    }
    else if (totalSold >= 100)
    {
        cout << "the advertising is really starting to help" << endl;
    }
    else
    {
        cout << "maybe we need add some different flavors" << endl;
    }
}
