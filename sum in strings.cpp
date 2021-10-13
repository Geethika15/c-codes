#include <iostream>
#include<string.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    string s;
    cin>>s;
    long long sum=0;
    for(int i=0;i<s.length();i++)
    {
      sum=sum+(int)s[i]-48;
    }
    cout<<sum;
    }