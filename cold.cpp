#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	int tem, numcasos, cont = 0;
	
	cin >> numcasos;

	while(numcasos --){
		cin >> tem;
		if(tem < 0)
			cont ++;
	}

	cout<< cont;
	return 0;
}