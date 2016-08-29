#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int numCasos, tamCaso;
    vector<string> v;
    cin>> numCasos;
    while(numCasos --){
        bool bandera = true;
        int tam_aux;
        cin>>tamCaso;
        tam_aux = tamCaso;

        while(tamCaso --){
            string datos;
            cin>> datos;
            v.push_back(datos);
        }

        sort(v.begin(), v.end());

        for(int c = 0; c < tam_aux - 1; c++){
            string aux = v[c+1].substr(0,v[c].size());
            if(v[c] == aux){
                cout<<"NO\n";
                bandera = false;
                c = tam_aux;
            }
        } 

        if(bandera)
            cout<<"YES\n";
        v.clear();
    }
    return 0;
}