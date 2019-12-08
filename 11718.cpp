#include <iostream>
using namespace std;

int main(){
	char c;
    
    while(true){
		c = getchar();
		if(c == EOF) break;
		putchar(c);
	}
}