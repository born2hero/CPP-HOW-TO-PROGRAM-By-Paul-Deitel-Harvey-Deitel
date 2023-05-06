/*
(Parking Charges) A parking garage charges a $2.00 minimum fee to park for up to three
hours. The garage charges an additional $0.50 per hour for each hour or part there of in excess of three
hours. The maximum charge for any given 24-hour period is $10.00. Assume that no car parks for
longer than 24 hours at a time. Write a program that calculates and prints the parking charges for each
of three customers who parked their cars in this garage yesterday. You should enter the hours parked
for each customer. Your program should print the results in a neat tabular format and should calculate
and print the total of yesterday’s receipts. The program should use the function calculateCharges to
determine the charge for each customer. Your outputs should appear in the following format:
Car         Hours           Charge
1           1.5             2.0
2           4.0             2.50
3           24.0            10.00
TOTAL       29.5            14.50
*/

#include <iostream>
#include <iomanip>

float calculateCharges(float hourToPark)
{
    float charges{2}, totalCharge;
    if (hourToPark > 3)
    {
        charges = charges + (hourToPark - 3) * (0.5f);
    }
    if (charges > 10)
    {
        charges = 10;
    }
    totalCharge = totalCharge + charges;
    return charges;
}

int main()
{
    float hoursToPark, hoursToPark1, hoursToPark2;
    std::cout << "Enter the three data for hours: ";
    std::cin >> hoursToPark >> hoursToPark1 >> hoursToPark2;

    std::cout << std::setw(4) << "Car" << std::setw(10) << "Hours" << std::setw(15) << "Charge"
              << "\n";

    std::cout << std::setw(4) << "1" << std::setw(10) << hoursToPark << std::setw(15) << calculateCharges(hoursToPark)
              << "\n";

    std::cout << std::setw(4) << "2" << std::setw(10) << hoursToPark1 << std::setw(15) << calculateCharges(hoursToPark1)
              << "\n";

    std::cout << std::setw(4) << "3" << std::setw(10) << hoursToPark2 << std::setw(15) << calculateCharges(hoursToPark2)
              << "\n";
}