#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int a;
    double b;
    string y;
    // Read and save an integer, double, and String to your variables.
    cin>>a;
    cin>>b;
    cin.ignore();
    getline(cin,y);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    a +=i;
    d +=b;
    // Print the sum of both integer variables on a new line.
    cout<<a<<endl;
    
    
    // Print the sum of the double variables on a new line.
    cout<<std::fixed<<std::setprecision(1)<<d<<endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    s=s+y;
    
cout<<s;
    return 0;
}
