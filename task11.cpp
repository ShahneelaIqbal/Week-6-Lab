#include <iostream>
#include <cmath>
using namespace std;

int daysForVolleyball(string year, int holiday, int weekendInHome);

main()
{
    string year;
    float holiday;
    float weekendInHome;
    int answer;

    cout << "Enter year:  ";
    cin >> year;
    cout << "Enter number of holidays:  ";
    cin >> holiday;
    cout << "Enter number of weekend:  ";
    cin >> weekendInHome;

    answer = daysForVolleyball(year, holiday, weekendInHome);
    cout << answer << endl;
}

int daysForVolleyball(string year, int holiday, int weekendInHome)
{

    float weekendInSofia = 48 - weekendInHome;
    float playInSofia = (weekendInSofia * 3) / 4;
    float playInHoliday = (holiday * 2) / 3;
    float total = playInSofia + playInHoliday;
    float playWholeYear = total + weekendInHome;

    if (year == "normal")
    {
        playWholeYear = floor(playWholeYear);
    }

    if (year == "leap")
    {
        playWholeYear = playWholeYear + ((15 * playWholeYear) / 100);
        playWholeYear = floor(playWholeYear);
    }
    return playWholeYear;
}