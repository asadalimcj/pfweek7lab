#include<iostream>
using namespace std;
int digit(int number1, int dig);
main()
{
    int number, dig;
    cout<<"enter number";
    cin>>number;
    cout<<"enter digit :";
    cin>>dig;
    int num1 = digit(number, dig);
    cout<<num1;

}
 int digit(int number, int dig)
 {
    int remain = 0;
    while(number>0)
    {
        int rem = number%10;
        number = number/10;
        if(rem==dig)
        {
        remain = remain+1;
        }
         
    }
    return remain;
 }