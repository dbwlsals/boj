#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    int a, b;
    for(int i=0; i<num; i++){
        cin >> a >> b;
        cout << a+b << endl;
    }
    return 0;
}