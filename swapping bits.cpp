#include<bits/stdc++.h>

using namespace std;

int main()
{
  int a,b;
  
  cout<<"Enter the two number is "<<endl;
  cin>>a>>b;
  
  a=a^b;
  b=a^b;
  a=a^b;
 
  cout<<"After swapping the number is:"<<a<<b<<endl;
    return 0;
}