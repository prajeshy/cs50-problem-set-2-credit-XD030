#include <iostream>
using namespace std;
int Fun(long int,int);
int main() {
  long int number;
  cout <<"請輸入你的信用卡卡號";
  cin >> number;
  int last = number % 10;
  int c = 0;
  long int num1 = number;

  int NumD = Fun(num1,13);
  int NumE = Fun(num1,14);
  int NumF = Fun(num1,9);
  int NumG = Fun(num1,11);


  if (number != 0) 
  {
    for(int i = 1; i <= 15; i++) 
    {
      if (i%2==1) 
      {
        number = number / 10;
        int a = number % 10;
        a = a*2;
      if (a>=10) a = a/10 + a%10;
      c = a + c;
      } else 
      {
        number = number / 10;
        int b = number % 10;
        c = c + b;
      }
    } 
    c =10-c%10;
    if (c==10) c = 0;
  
    if (last==c) 
    {
      cout <<"是正確卡號\n";
      if (NumE==4)
        cout <<"Visa Card.\n";
      else if (NumG==4)
        cout <<"Visa Card\n";
      else if (NumD >= 51 && NumD <= 55)
        cout <<"Master Card\n";
      else if (NumF >= 222100 && NumF <= 272099)
        cout <<"Master Card\n";
      else 
        cout <<"其他卡\n";
    } else 
    {
      cout <<"不是正確卡號\n";
    }
  }
}


int Fun(long int num,int loopCnt)
{
  for(int h = 0; h <= loopCnt; h++) 
  {
  num = num / 10;
  }
  return num;
}
