#include<iostream>

using namespace std;

int main()
{
int x, n;
int b=0;

cin >>n;
int i=0;
int max=0;
while(n!=0)
{
x=n%2;
n=n/2;

if(x==1)
{
b += 1;
if(b>max)
max = b;
}
if(x==0)
{
b=0;
}
}


cout<<max;
return 0;
}
