#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	int residuo = 0;
	ll tam1, tam2;
	string a,b;
	string res;
	getline(cin,a);
	getline(cin,b);

	tam1 = a.size();
	tam2 = b.size(); 

	while(1){
		if(tam1 >= 0 )
			-- tam1;
		if(tam2 >= 0)
			-- tam2;
		
		if(tam1 == -1 && tam2 == -1 && residuo == 1){
			res.insert(res.begin(),residuo + '0' );
			break;
		}

		if(tam1 == -1 && tam2 == -1)
			break;

		int a1 = (tam1 >= 0)?(a[tam1]-'0'):0;
		int b1 = (tam2 >= 0)?(b[tam2]-'0'):0;
		int cont = a1 + b1 + residuo; 

		if(cont >= 10){
			residuo = 1;
			res.insert(res.begin(),(cont % 10) + '0' );
		} else {
			residuo = 0;
			res.insert(res.begin(),cont + '0');
		}

	}

	cout<<res;
	return 0;
}