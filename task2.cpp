#include<iostream>
using namespace std;
void fibo(int number);
main()
{
   int number;
   cout<<"enter a number";
   cin>>number;
   fibo(number);
}
 void fibo(int number)
 {
    int num1 = 0;
    int num2 = 1;
    int next;
    cout<<num1<<","<<num2;
    for(int num=1; num<=number-2; num = num+1)
    {
        next = num1+num2;
        cout<<","<<next;
        num1 = num2;
        num2 = next;
    }
 }