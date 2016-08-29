#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#define matrizChar char **

using namespace std;

void datosIniciales(string palabra, vector<string> matriz, matrizChar resultado){
	int tam = matriz.size(), cont = 0;
	for (int i = 0; i < tam; i++)
	{
		for (int j = 0; j < tam; j++)
		{
			if(matriz[i][j] == '.'){
				resultado[i][j] = palabra[cont];
				cont ++;
			}
		}
	}
}

void rotar1(int contEspacios, string palabra, vector<string> matriz, matrizChar resultado){
	int tam = matriz.size(),cont = contEspacios;
	for(int i = 0; i <tam; i++){
		for(int j = 1; j <= tam; j++)
		{
			if(matriz[tam-j][i] == '.'){
			 	resultado[i][j-1] = palabra[cont];
			 	cont ++;
			}
		}
	}
}

void rotar2(int contEspacios, string palabra, vector<string> matriz, matrizChar resultado){
	int tam = matriz.size(),cont = (contEspacios * 2) ;
	for(int i = tam - 1, aux_x = 0 ; i >= 0; i--, aux_x ++){
		for(int j = 0; j < tam; j++)
		{
			if(matriz[i][(tam-1)-j] == '.'){
			 	resultado[aux_x][j] = palabra[cont];
			 	cont ++;
			}
		}
	}
}

void rotar3(int contEspacios, string palabra, vector<string> matriz, matrizChar resultado){
	int tam = matriz.size(), cont = (contEspacios*3);
	for(int i = tam - 1, aux_x = 0 ; i >= 0 ; i--, aux_x ++){
		for(int j = 0; j < tam; j++)
		{
			if(matriz[j][i] == '.'){
			 	resultado[aux_x][j] = palabra[cont];
			 	cont ++;
			}
		}
	}
}


int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	int num, contEspacios = 0, cont = 0;
	string aux, cadena;
	vector<string> matriz;
	matrizChar resultado;

	cin>>num;
	resultado = new char *[num];
	while(num --){
		cin>> aux;
		resultado[cont] = new char[num];
		for(int x = 0 ;x< aux.size();x++)
			(aux[x] == '.')?contEspacios++:contEspacios;
		
		matriz.push_back(aux);
		cont ++;
	}
	cin >> aux;

	datosIniciales(aux, matriz, resultado);
	rotar1(contEspacios, aux, matriz, resultado);
	rotar2(contEspacios, aux, matriz, resultado);
	rotar3(contEspacios, aux, matriz, resultado);

	for(int i = 0; i < cont; i++){
		for (int j = 0; j < cont; j++)
		{
			if(resultado[i][j] != 0 ){
				cadena += resultado[i][j];
			}else{
				cout<<"invalid grille";
				return 0;
			}
		}
	}
	cout<< cadena;

	return 0;
}