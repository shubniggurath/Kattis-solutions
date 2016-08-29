#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	int cont, datos, ini = 0, incidencias = 0;
	vector<int> VecDatos;
	vector<int> acomulados;
	
	cin >> cont;

	while(cont --){
		cin>> datos;
		VecDatos.push_back(datos);
	}

	cont = 0;
	sort(VecDatos.begin(), VecDatos.end());

	for(int x = 1; x < VecDatos.size(); x++){
		if(VecDatos[x] == VecDatos[x-1] + 1){
			cont ++;
		} else if(VecDatos[x] != VecDatos[x-1] + 1) {
			if(cont == 0){
				cout<< VecDatos[x-1]<<" ";
			} else if(cont == 1){
				cout<< VecDatos[x-2]<<" "<<VecDatos[x-1]<<" ";
				cont = 0;
			} else if(cont > 1){
				cout<< VecDatos[ini]<<"-"<<VecDatos[x-1]<<" ";
				cont = 0;
			}

			ini = x;
		} 
	}

	if(cont == 0){
		cout<< VecDatos[VecDatos.size() - 1];
	} else if(cont == 1){
		cout<< VecDatos[VecDatos.size() - 2]<<" "<<VecDatos[VecDatos.size() - 1];
	}else if(cont > 1){
		cout<< VecDatos[ini]<<"-"<<VecDatos[VecDatos.size() - 1];
	}

	return 0;
}