#include <bits/stdc++.h>

using namespace std;

// Complete the factorial function below.
int factorial(int n) {
        if(n>1)
        {
            return n * factorial(n-1);
        }
        else 
        return 1;

}

int main()
{

    int n;
    cin >> n;
    int result = factorial(n);

    cout << result << "\n";

    return 0;
}

