#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	string dato,res;
	cin>> dato;
	int cont = 0;

	for(int x = 0; x < dato.size(); x++){
		if(dato[x] != '<'){
			res.push_back(dato[x]);
		} else{
			if(!res.empty())
				res.pop_back();
		}

	}
	cout<< res;

	return 0;
}