#include <iostream>
#include <cstdio>
#include <string> 
#include <vector>
#include <sstream>

using namespace std;

vector<string> split(const string &s, char delim){
	stringstream ss(s);
	string iteam;
	vector<string> tokens;
	while(getline(ss,iteam,delim)){
		tokens.push_back(iteam);
	}

	return tokens;
}

int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	string horaIn, horaExp;
	vector<string> d1,d2;
	int h,m,s; 
	cin>> horaIn >> horaExp;

	d1 = split(horaIn,':');
	d2 = split(horaExp,':');
		
	s = stoi(d2[2]) - stoi(d1[2]);
	m = stoi(d2[1]) - stoi(d1[1]);
	h = stoi(d2[0]) - stoi(d1[0]);


	if(s < 0){
		s += 60;
		m -= 1;
	}

	if(m < 0){
		m += 60;
		h -= 1;
	}

	if(h < 0 || h+m+s ==  0){
		h += 24;
	}

	if(h < 10)
		cout<<"0"<<h<<":";
	else	
		cout<<h<<":";

	if(m < 10)
		cout<<"0"<<m<<":";
	else	
		cout<<m<<":";

	if(s < 10)
		cout<<"0"<<s;
	else	
		cout<<s;

	return 0;

}