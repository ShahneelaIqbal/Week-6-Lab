#include <iostream>
using namespace std;

char calculate(int number);

main()
{
    char answer;

    int number;
    cout << "Enter number:  ";
    cin >> number;

    answer = calculate(number);
    cout << "Grade is:  " << answer;
}

char calculate(int number)
{
    char grade;
    if (number < 50)
    {
        grade = 'F';
    }
    else if (number >= 50 && number <= 60)
    {
        grade = 'E';
    }

    else if (number >= 61 && number <= 70)
    {
        grade = 'D';
    }

    else if (number >= 71 && number <= 80)
    {
        grade = 'C';
    }

    else if (number >= 81 && number <= 85)
    {
        grade = 'B';
    }

    else
    {
        grade = 'A';
    }

    return grade;
}