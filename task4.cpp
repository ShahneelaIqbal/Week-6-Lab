#include <iostream>
using namespace std;

string title(int age, char gender);

main()
{
    int age;
    char gender;
    string answer;

    cout << "Enter age:  ";
    cin >> age;
    cout << "Enter gender:  ";
    cin >> gender;

    answer = title(age, gender);
    cout << "Title is:  " << answer;
}

string title(int age, char gender)
{
    string check;
    if (age >= 16 && gender == 'm')
    {
        check = "Mr.";
    }

    else if (age < 16 && gender == 'm')
    {
        check = "Master";
    }

    else if (age >= 16 && gender == 'f')
    {
        check = "Ms.";
    }

    else if (age < 16 && gender == 'f')
    {
        check = "Miss";
    }

    else
    {
        check = "invalid";
    }
    return check;
}