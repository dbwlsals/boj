#include <iostream>
using namespace std;

int main(){
    int num, temp;
    int sum=0;
    char a;

    cin >>num;
    cin.get();

    for(int i=0; i<num; i++)
    {
        cin.get(a);
        temp=a-'0';
        sum+=temp;
    }
    cout << sum << endl;
}