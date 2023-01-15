#include <iostream>
using namespace std;

string same(int num1, int num2, int num3);

main()
{
    int num1;
    int num2;
    int num3;
    string answer;

    cout << "Enter a number:  ";
    cin >> num1;
    cout << "Enter a number:  ";
    cin >> num2;
    cout << "Enter a number:  ";
    cin >> num3;

    answer = same(num1, num2, num3);
    cout << answer;
}

string same(int num1, int num2, int num3)
{
    string reply;

    if ((num1 == num2) && (num2 == num3))
    {
        reply = "Yes";
    }

    else
    {
        reply = "No";
    }
    return reply;
}