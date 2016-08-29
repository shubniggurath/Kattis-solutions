#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	unsigned long long x,y;
	while(cin>>x>>y){
		if(x>y)
			cout<< x - y <<"\n";
		else
			cout<< y - x <<"\n";
	}
	return 0;
}