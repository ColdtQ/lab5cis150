/*
Name: Trevor Romano.
Course: CIS150.
Lab: Lab 05.
Description: Calculates average smoothie receipt amount.
Date: 2026-02-17.
*/

#include <iostream>
#include <iomanip>

using namespace std;

double calculateAverage(double totalAmount, int receiptCount);

int main()
{
    // store receipt input and summary values
    int receiptCount = 0;
    double receiptAmount = 0.0;
    double totalAmount = 0.0;
    double averageAmount = 0.0;

    cout << "enter number of receipts" << endl;
    cin >> receiptCount;

    if (receiptCount < 0)
    {
        cout << "receipt count cannot be negative" << endl;
        return 0;
    }

    for (int receiptNumber = 1; receiptNumber <= receiptCount; receiptNumber += 1)
    {
        // ask for one valid receipt amount
        do
        {
            cout << "enter amount for receipt " << receiptNumber << endl;
            cin >> receiptAmount;

            if (receiptAmount < 0.0)
            {
                cout << "receipt amount cannot be negative" << endl;
            }

        } while (receiptAmount < 0.0);

        totalAmount += receiptAmount;
    }

    averageAmount = calculateAverage(totalAmount, receiptCount);

    cout << fixed << setprecision(2);
    cout << "number of receipts " << receiptCount << endl;
    cout << "total " << totalAmount << endl;
    cout << "average " << averageAmount << endl;

    return 0;
}

double calculateAverage(double totalAmount, int receiptCount)
{
    // avoid divide by zero
    if (receiptCount == 0)
    {
        return 0.0;
    }

    return totalAmount / receiptCount;
}
