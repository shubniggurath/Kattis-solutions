#include <iostream>
#include <cstdio>
#include <string>

using namespace std;


int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	int cont = 1, aux_cont;
	string palabra, numeros,casos;
	string teclado[10] ={" ","abc","def","ghi",
	"jkl","mno","pqrs","tuv","wxyz"};
	getline(cin, casos);
	aux_cont = stoi(casos);

	while(aux_cont --){
		getline(cin,palabra);
		for(int x = 0; x < palabra.size(); x++){
			for (int y = 0; y < 10; y++){
				for (int z = 0; z < teclado[y].size(); z++){
					if (palabra[x] == teclado[y][z]){
						if(('0'+(y+1)) == (numeros[numeros.size()-1]) && !numeros.empty())
							numeros.push_back(' ');
						if(palabra[x] == ' ' && numeros[numeros.size()-1] == '0')
							numeros.push_back(' ');

						for(int aux = 0; aux <= z;aux ++){
							(palabra[x] == ' ')?numeros.push_back('0'+y):numeros.push_back('0'+(y+1));
						}
					}
				}
			}
		}

		cout<<"Case #"<< cont <<": "<<numeros<<"\n";
		numeros.clear();
		cont ++;
	}

	return 0;
}