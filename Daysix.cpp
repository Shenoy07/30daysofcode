#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   


string s;

int n;

cin>>n;
while(n--){
cin>>s;


//cout<<s.length()<<endl;
//char yo[s.length()];

//strncpy(yo, s.c_str());
 string even;
 string odd;
for(int i = 0;i < s.length();i++)
{
	if(i%2 == 0)
	{
		even = even+s[i];		
	}
	else if(i%2!= 0)
	{
		odd= odd+s[i];
	}

}
cout<<even<<" "<<odd<<endl;

}


    return 0;
}

