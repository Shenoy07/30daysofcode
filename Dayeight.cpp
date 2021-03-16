#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    string name;
    long num;
    cin>>n;
    cin.ignore();
    map <string, long> Map;
    for(int i=0;i<n;i++){
        cin>>name;
        cin>>num;
        Map[name] = num;
        
    }
while(cin>>name){
            if(Map.find(name) != Map.end())
            {
        cout<<name<<"="<<Map.find(name)->second<<endl;
        }
        else
        {
        cout<<"Not found"<<endl;
        }  
}
        
    return 0;
}
