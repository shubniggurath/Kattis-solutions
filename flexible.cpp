#include <iostream>
#include <cstdio>
#include <unordered_set>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	unordered_set<int> aux;
	int a,b,dato;
	vector<int> datos, resultado ;
	cin >> a >> b;

	datos.push_back(0); 
	while(b --){
		cin >> dato;
		datos.push_back(dato);
	}
	datos.push_back(a); 

	for(int x = 0; x < datos.size(); x++){
		for(int y = x+1; y < datos.size(); y++){
			aux.insert(datos[y] - datos[x]);
		}
	}

	resultado.assign(aux.begin(), aux.end());
	sort(resultado.begin(), resultado.end());

	for(int x = 0; x < resultado.size(); x++)
		cout<<resultado[x]<<" ";

	return 0;
}