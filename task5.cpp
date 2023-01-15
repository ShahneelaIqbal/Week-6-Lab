#include <iostream>
using namespace std;
float totalIncome(int rows, int columns, string screening);

main()
{
    int rows;
    int columns;
    string screening;
    float answer;

    cout << "Enter screen type:  ";
    cin >> screening;
    cout << "Enter number of rows:  ";
    cin >> rows;
    cout << "Enter number of columns:  ";
    cin >> columns;

    answer = totalIncome(rows, columns, screening);
    cout << "Income is:  " << answer;
}

float totalIncome(int rows, int columns, string screening)
{
    float income;
    int seats;

    seats = rows * columns;

    if (screening == "premiere")
    {
        income = (seats * 12.00);
    }

    if (screening == "normal")
    {
        income = (seats * 7.50);
    }

    if (screening == "discount")
    {
        income = (seats * 5.00);
    }
    return income;
}
