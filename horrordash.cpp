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
	#include <stack>
	using namespace std;
	int main(){
		int lines;
		cin>>lines;
    int counter = 0;
		while(counter<lines){
			int runners;
			int maxspeed = 0;
			cin>>runners;
			while(runners--){
				int sped;
				cin>>sped;
				if(sped>maxspeed){
					maxspeed = sped;
				}
			}
			cout<<"Case "<<counter+1<<": "<<maxspeed<<"\n";
      counter++;
		}
	}



