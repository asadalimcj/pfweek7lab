#include<iostream>
using namespace std;
int digit_sum(int number);

main()
{
   int num;
   cout<<"enter number";
   cin>>num;
   int num1 = digit_sum(num);
   cout<<num1;
}
  int digit_sum(int number)
  {
    int count = 0;
    while(number>0)
    {
       
       int rem = number%10;
       number = number/10;
       count = count+rem;
    }
    return count;
  }