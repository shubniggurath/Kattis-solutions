#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	int numDatos,dato, maximoMin, cont = 0, cont2 = 0;
	cin>>numDatos>> maximoMin;

	while(numDatos --){
		cin >> dato;
		cont += dato;
		if(cont > maximoMin)
			break;

		cont2 ++;
	}

	cout<<cont2;

	return 0;
}