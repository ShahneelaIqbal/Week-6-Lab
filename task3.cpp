#include <iostream>
using namespace std;

float discountAmount(float amount, string day, string month);

main()
{
    float amount;
    string day;
    string month;
    int answer;

    cout << "Enter amount:  ";
    cin >> amount;
    cout << "Enter day:  ";
    cin >> day;
    cout << "Enter month:  ";
    cin >> month;

    answer = discountAmount(amount, day, month);
    cout << "Payable amount is:  " << answer;
}

float discountAmount(float amount, string day, string month)
{
    float discount;
    int payable;

    if (day == "sunday" && (month == "october" || month == "march" || month == "august"))
    {
        discount = (amount * 10) / 100;
        payable = amount - discount;
    }

    else if (day == "monday" && (month == "novenber" || month == "december"))
    {
        discount = (amount * 5) / 100;
        payable = amount - discount;
    }

    else
    {
        payable = amount;
    }
    return payable;
}
