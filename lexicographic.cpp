//============================================================================
// Name        : CCCsolutions.cpp
// Author      : Ayan Hafeez
// Version     :
// Copyright   : Ayan Hafeez's solutions for DMOJ 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>
#include <queue>
using namespace std;


int main() {
	int numChar;
	cin>>numChar;
	string s;
	cin>>s;
	string final = "";
	for(int i = 0; i<s.size(); i++){
		if(i==0){
		 final+=s[i];
		}
		else if((int)s[i]>(int)final[0]){
			
		final+=s[i];
		}
		else{
			final = s[i] + final;
		}
	}
	cout<<final;


}


