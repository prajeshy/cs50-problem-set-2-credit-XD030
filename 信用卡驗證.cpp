#include <iostream>
using namespace std;
int main() {
  long int number;
  cout <<"請輸入你的信用卡卡號";
  cin >> number;
  int last = number % 10;
  int c = 0;
  int d = number / 100000000000000;
  int e = number / 1000000000000000;
  int f = number / 10000000000;
  int g = number / 1000000000000;
  if (number != 0){
   for(int i = 1; i <= 15; i++)
  {
    if (i%2==1) {
      number = number / 10;
      int a = number % 10;
      a = a*2;
      if (a>=10)a = a/10+a%10;
      c = a + c;
    } else {
      number = number / 10;
      int b = number % 10;
      c = c + b;
    }
  } 
   c =10-c%10;
   if (c==10)c = 0;
    if (last==c) {
     cout <<"是正確卡號\n";
      if(10 - number % 10 != last && 10 - number % 10 != 10 && number != e && number != g && number != d && number !=f)
      cout <<"假卡";
      else if (e==4)
      cout <<"Visa Card";
      else if (g==4)
      cout <<"Visa Card";
      else if (d >= 51 && d <= 55)
      cout <<"Master Card";
      else if (f >= 222100 && f <= 272099)
      cout <<"Master Card";
  else 
  cout <<"其他信用卡";
   }
   } else {
     cout <<"不是正確卡號\n";
   }
  }

