#include <iostream>
using namespace std;

int isGreater(int num1, int num2, int num3);

main()
{
    int num1;
    int num2;
    int num3;
    int answer;

    cout << "Enter first number:  ";
    cin >> num1;
    cout << "Enter second number:  ";
    cin >> num2;
    cout << "Enter third number:  ";
    cin >> num3;

    answer = isGreater(num1, num2, num3);

    if (answer == 0)
    {
        cout << "Invalid input" << endl;
    }

    else
    {
        cout << "Greater number is:  " << answer << endl;
    }
}

int isGreater(int num1, int num2, int num3)
{
    int greatest;

    if (num1 > num2 && num1 > num3)
    {
        greatest = num1;
    }

    else if (num2 > num1 && num2 > num3)
    {
        greatest = num2;
    }

    else if (num3 > num2 && num3 > num1)
    {
        greatest = num3;
    }

    else
    {
        greatest = 0;
    }
    return greatest;
}
