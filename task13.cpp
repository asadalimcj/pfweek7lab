#include<iostream>
using namespace std;
void print_per(int number);

main()
{
    int number;
    cout<<"enter number :";
    cin>>number;
    print_per(number);



}
  void print_per(int number)
  {
    int rem = 0;
    int rem1 = 0;
    int rem2 = 0;
    int rem3 = 0;
    int rem4 = 0;

    int num;
    for(int n=1; n<=number; n = n+1)
    {
    
    
    cin>>num;
    if(num<200)
    {
        rem = rem+1;
    
    }
    
    if(num>=200 && num<400)
    {
        rem1 = rem1+1;
    
    }

    if(num>=400 && num<600)
    {
        rem2 = rem2+1;
    
    }

    if(num>=600 && num<800)
    {
        rem3 = rem3+1;
    
    }

    if(num>=800)
    {
      rem4 = rem4+1;
    
    }   
    }
    float per = (rem*100)/number;
    cout<<"the nember in 200:"<<per<<"%"<<endl;

    
    float per1 = (rem1*100)/number;
    cout<<"the nember in 400:"<<per1<<"%"<<endl;

    float per2 = (rem2*100)/number;
    cout<<"the nember in 600:"<<per2<<"%"<<endl;

    float per3 = (rem3*100)/number;
    cout<<"the nember in 800:"<<per3<<"%"<<endl;
    
    float per4 = (rem4*100)/number;
    cout<<"the nember in more than 800:"<<per4<<"%"<<endl;


    
    
  }