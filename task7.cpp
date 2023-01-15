#include <iostream>
using namespace std;

float discountAmount(string day, string month, float amount);

main()
{
   string day;
   string month;
   float amount;

   cout << "Enter amount:  ";
   cin >> amount;
   cout << "Enter month:  ";
   cin >> month;
   cout << "Enter day:  ";
   cin >> day;

   float answer = discountAmount(day, month, amount);
   cout << "Payable amount is:  " << answer;
}

float discountAmount(string day, string month, float amount)

{
   int discount;
   int payable;

   if (day == "sunday" && (month == "october" || month == "march" || month == "august"))
   {
      discount = (amount * 10) / 100;
      payable = amount - discount;
   }

   else if (day == "monday" && (month == "december" || month == "november"))
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