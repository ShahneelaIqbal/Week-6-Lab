#include <iostream>
using namespace std;
float lowestPrice(int kilometer, string period);

main()
{
  int kilometer;
  string period;
  float answer;

  cout << "Enter kilometers:  ";
  cin >> kilometer;
  cout << "Enter period:  ";
  cin >> period;

  answer = lowestPrice(kilometer, period);
  cout << "Price is:  " << answer;
}

float lowestPrice(int kilometer, string period)
{
  float price;

  if (kilometer >= 20 && kilometer <= 100)
  {
    price = kilometer * 0.09;
  }

  else if (kilometer > 100)
  {
    price = kilometer * 0.06;
  }

  if (kilometer < 20 && period == "day")
  {
    price = (kilometer * 0.79) + 0.70;
  }

  if (kilometer < 20 && period == "night")
  {
    price = (kilometer * 0.90) + 0.70;
  }
  return price;
}