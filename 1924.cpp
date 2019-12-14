#include <iostream>
using namespace std;

int main(){
    int x, y, i, day, sum;
    cin >> x >> y;

    for(i=1; i<x; i++)
    {
        if(i==2)
            sum += 28;
        else if((i==4)||(i==6)||(i==9)||(i==11))
            sum += 30;
        else
            sum += 31;
    }
    sum += y;
    day = sum % 7;

    switch(day)
    {
        case 0: cout << "SUN"; break;
        case 1: cout << "MON"; break;
        case 2: cout << "TUE"; break;
        case 3: cout << "WED"; break;
        case 4: cout << "THU"; break;
        case 5: cout << "FRI"; break;
        case 6: cout << "SAT"; break;
    }
    return 0;
}