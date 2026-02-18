/*
Name: Trevor Romano
Course: CIS150
Lab: Lab 05
Description: Calculates and displays average smoothie receipt amount using a for loop.
Date: 2026-02-18
*/

#include <iostream>
#include <iomanip>

using namespace std;

double calculateAverage(double totalAmount, int receiptCount);

int main()
{
    // Store receipt details and summary totals.
    int receiptCount = 0;
    double receiptAmount = 0.0;
    double totalAmount = 0.0;
    double averageAmount = 0.0;

    cout << "Enter number of receipts: ";
    cin >> receiptCount;

    for (int receiptNumber = 1; receiptNumber <= receiptCount; receiptNumber += 1)
    {
        // Read each receipt and add it to the running total.
        cout << "Enter amount for receipt #" << receiptNumber << ": $";
        cin >> receiptAmount;
        totalAmount += receiptAmount;
    }

    averageAmount = calculateAverage(totalAmount, receiptCount);

    cout << fixed << setprecision(2);
    cout << "Number of receipts: " << receiptCount << endl;
    cout << "Total: $" << totalAmount << endl;
    cout << "Average: $" << averageAmount << endl;

    return 0;
}

double calculateAverage(double totalAmount, int receiptCount)
{
    // Avoid division by zero when no receipts are entered.
    if (receiptCount == 0)
    {
        return 0.0;
    }

    return totalAmount / receiptCount;
}
