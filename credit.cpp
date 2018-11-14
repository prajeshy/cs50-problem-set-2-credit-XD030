#include <iostream>
using namespace std;
int main() {
  long int number;
  cout <<"請輸入你的信用卡卡號";
  cin >> number;
  int last = number % 10;
  int c = 0;
  int d, e, f, g;
  long num1 = number;
  for(int h = 0; h <= 13; h++) {
    num1 = num1 / 10;
  }
  d = num1;

  num1 = number;
  for(int h = 0; h <= 14; h++) {
    num1 = num1 / 10;
  }
  e = num1;

  num1 = number;
  for(int h = 0; h <= 9; h++) {
    num1 = num1 / 10;
  }
  f = num1;

  num1 = number;
  for(int h = 0; h <= 11; h++) {
    num1 = num1 / 10;
  }
  g = num1;

  if (number != 0) {
    for(int i = 1; i <= 15; i++) {
      if (i%2==1) {
        number = number / 10;
        int a = number % 10;
        a = a*2;
      if (a>=10) a = a/10 + a%10;
      c = a + c;
      } else {
        number = number / 10;
        int b = number % 10;
        c = c + b;
      }
   } 

    c =10-c%10;
    if (c==10) c = 0;
  
    if (last==c) {
      cout <<"是正確卡號\n";
      if (e==4)
        cout <<"Visa Card.\n";
      else if (g==4)
        cout <<"Visa Card\n";
      else if (d >= 51 && d <= 55)
        cout <<"Master Card\n";
      else if (f >= 222100 && f <= 272099)
        cout <<"Master Card\n";
      else 
        cout <<"其他卡\n";
    } else {
      cout <<"不是正確卡號\n";
    }
  }
}
