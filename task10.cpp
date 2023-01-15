#include <iostream>
using namespace std;

float price(string product, float quantity, string city);

main()
{
    string product;
    float quantity;
    string city;
    float answer;

    cout << "Enter product name:  ";
    cin >> product;
    cout << "Enter amount of product:  ";
    cin >> quantity;
    cout << "Enter city name:  ";
    cin >> city;

    answer = price(product, quantity, city);

    cout << "Price is:  " << answer << endl;
}

float price(string product, float quantity, string city)
{
    float total;

    if (product == "coffee" && city == "sofia")
    {
        total = quantity * 0.50;
    }

    else if (product == "water" && city == "sofia")
    {
        total = quantity * 0.80;
    }

    else if (product == "beer" && city == "sofia")
    {
        total = quantity * 1.20;
    }

    else if (product == "sweets" && city == "sofia")
    {
        total = quantity * 1.45;
    }

    else if (product == "peanuts" && city == "sofia")
    {
        total = quantity * 1.60;
    }

    else if (product == "coffee" && city == "plovdiv")
    {
        total = quantity * 0.40;
    }

    else if (product == "water" && city == "plovdiv")
    {
        total = quantity * 0.70;
    }

    else if (product == "beer" && city == "plovdiv")
    {
        total = quantity * 1.15;
    }

    else if (product == "sweets" && city == "plovdiv")
    {
        total = quantity * 1.30;
    }

    else if (product == "peanuts" && city == "plovdiv")
    {
        total = quantity * 1.50;
    }

    else if (product == "coffee" && city == "varna")
    {
        total = quantity * 0.45;
    }

    else if (product == "water" && city == "varna")
    {
        total = quantity * 0.70;
    }

    else if (product == "beer" && city == "varna")
    {
        total = quantity * 1.10;
    }

    else if (product == "sweets" && city == "varna")
    {
        total = quantity * 1.35;
    }

    else if (product == "peanuts" && city == "varna")
    {
        total = quantity * 1.55;
    }
    else
    {
    }
    return total;
}
