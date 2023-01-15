#include <iostream>
using namespace std;

float vip(float budget, string category, int numberOfPeople);

main()
{
    float budget;
    string category;
    int numberOfPeople;
    float answer;

    cout << "Enter budget:  ";
    cin >> budget;
    cout << "Enter category:  ";
    cin >> category;
    cout << "Enter number of people:  ";
    cin >> numberOfPeople;

    answer = vip(budget, category, numberOfPeople);
    if (answer > 0)
    {
        cout << "Yes! You have " << answer << " QR left" << endl;
    }

    if (answer < 0) 
    {
        answer = -answer;
        cout << "Not enough money! You need " << answer << " QR" << endl;
    }
}

float vip(float budget, string category, int numberOfPeople)
{
    float percentage;
    float remainingPrice;
    float ticket;

    if ((numberOfPeople >= 1 && numberOfPeople <= 4) && category == "vip")
    {
        percentage = (budget * 75) / 100;
        remainingPrice = budget - percentage;
        ticket = numberOfPeople * 499.99;
    }

    else if ((numberOfPeople >= 5 && numberOfPeople <= 9) && category == "vip")
    {
        percentage = (budget * 60) / 100;
        remainingPrice = budget - percentage;
        ticket = numberOfPeople * 499.99;
    }

    else if ((numberOfPeople >= 10 && numberOfPeople <= 25) && category == "vip")
    {
        percentage = (budget * 50) / 100;
        remainingPrice = budget - percentage;
        ticket = numberOfPeople * 499.99;
    }

    else if ((numberOfPeople >= 25 && numberOfPeople <= 49) && category == "vip")
    {
        percentage = (budget * 40) / 100;
        remainingPrice = budget - percentage;
        ticket = numberOfPeople * 499.99;
    }

    else if (numberOfPeople >= 50 &&  category == "vip")
    {
        percentage = (budget * 25) / 100;
        remainingPrice = budget - percentage;
        ticket = numberOfPeople * 499.99;
    }

    else if ((numberOfPeople >= 1 && numberOfPeople <= 4) && category == "normal")
    {
        percentage = (budget * 75) / 100;
        remainingPrice = budget - percentage;
        ticket = numberOfPeople * 249.99;
    }

    else if ((numberOfPeople >= 5 && numberOfPeople <= 9) && category == "normal")
    {
        percentage = (budget * 60) / 100;
        remainingPrice = budget - percentage;
        ticket = numberOfPeople * 249.99;
    }

    else if ((numberOfPeople >= 10 && numberOfPeople <= 25) && category == "normal")
    {
        percentage = (budget * 50) / 100;
        remainingPrice = budget - percentage;
        ticket = numberOfPeople * 249.99;
    }

    else if ((numberOfPeople >= 25 && numberOfPeople <= 49) && category == "normal")
    {
        percentage = (budget * 40) / 100;
        remainingPrice = budget - percentage;
        ticket = numberOfPeople * 249.99;
    }

    else if ((numberOfPeople >= 50) && category == "normal")
    {
        percentage = (budget * 25) / 100;
        remainingPrice = budget - percentage;
        ticket = numberOfPeople * 249.99;
    }
    float amountLeft = remainingPrice - ticket;
    return amountLeft;
}

