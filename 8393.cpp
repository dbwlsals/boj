#include <iostream>
using namespace std;

int main(){
    int n, i;
    int sum=0;
    cin >> n;

    for(i=1; i<=n; i++)
    {
        sum += i;
    }
    cout << sum;
}