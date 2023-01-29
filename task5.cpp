#include<iostream>
using namespace std;
int digt(int number, int digit);
main()
{
    int number, digit;
    cout<<"enter number";
    cin>>number;
    int num1 = digt(number, digit);
    cout<<num1;

}
 int digt(int number,int digit)
 {
    int remain = 0;
    while(number>0)
    {
        remain = remain+1;
        number = number/10;
        
    }
    return remain;
 }