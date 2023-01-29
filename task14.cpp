#include<iostream>
using namespace std;
float money(int age, int price, int price1);

main()
{
    int age, price, price1;
    cout<<"enter your age";
    cin>>age;
    cout<<"enter price of machine:";
    cin>>price;
    cout<<"enter toy price:";
    cin>>price1;
    int new_price = money(age, price, price1);
    
    if(new_price>0)
    {
        cout<<"yes:"<<endl<<"you have :"<<new_price;
    }
    else if(new_price<0)
    {
        cout<<"no"<<endl<<"you need:"<<-1*new_price;
    }


}
float money(int age, int price, int price1)
{
  int net_price;
    int toy = 0;
    int money = 0;
    int rem;
      int count = 1;
  for(int n=1; n<=age; n = n+1)
  {
  
    rem = n%2;
    if(rem==0)
    {

        money = (money+(count*10))-1;
        count = count+1;
        
    }
    if(rem!=0)
    {
        toy = toy+1;
    }


  }
  int toy_price = toy*price1;
  int total_price = toy_price+money;
  net_price = total_price-price;
  return net_price;
}