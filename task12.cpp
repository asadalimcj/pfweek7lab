#include<iostream>
using namespace std;
int hcf(int number1, int number2);
int lcm(int number1, int number2);
main()
{
    int number1,number2;
    cout<<"enter number ";
    cin>>number1;
    cout<<"enter second number";
    cin>>number2;
    int gcd = hcf(number1, number2);
    cout<<"the gcd is :"<<gcd<<endl;

    int LCM = lcm(number1, number2)/gcd;
    cout<<"the LCM is :"<<LCM<<endl;


}
  int hcf(int number1, int number2)
  {
     int gcd;
     for(int count = 1; count<=number1; count=count+1)
     {
        if(number1%count==0 && number2%count==0)
        {
            gcd = count;
            
        }
        
     }
         return gcd;
  }
    int lcm(int number1, int number2)
    {
        int lcm;
        lcm = (number1*number2);
        return lcm;

    }