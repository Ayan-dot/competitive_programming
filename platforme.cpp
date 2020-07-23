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

class Platform{
	int y;
	int x1;
	int x2;
	bool lreso = false;
	bool rreso = false;

public:
	Platform(int a, int b, int c){
		y=a;
		x1 = b;
		x2 = c;
	}
	int get_height(){
		return y;
	}
	int get_x1(){
		return x1;
	}
	int get_x2(){
		return x2;
	}
	void lReso(){
		lreso = true;
	}
	void rReso(){
			rreso = true;
		}
	bool get_l(){
		return lreso;
	}
	bool get_r(){
			return rreso;
		}


};

bool sortHe(Platform a, Platform b){
	return a.get_height()>b.get_height();
}

int main(){
	int numPlat;
	cin>>numPlat;
	vector<Platform> platforms;
	int counter = 0;
	int total=0;
	while(counter<numPlat){
		int temp1, temp2, temp3;
		cin>>temp1;
		cin>>temp2;
		cin>>temp3;
		platforms.push_back(Platform(temp1,temp2,temp3));
		counter++;
	}
	sort(platforms.begin(), platforms.end(), sortHe);

	for(int i = 0; i<platforms.size(); i++){
		int temp = 0;
		for(auto k: platforms){
			if(platforms[i].get_height()>k.get_height()){
				if(k.get_x1()<=platforms[i].get_x1()&&k.get_x2()>=platforms[i].get_x1()+0.5&&!platforms[i].get_l()){
					platforms[i].lReso();
					temp+=platforms[i].get_height()-k.get_height();

				}
				if(k.get_x2()>=platforms[i].get_x2()&&k.get_x1()<=platforms[i].get_x2()-0.5&&-!platforms[i].get_r()){

									platforms[i].rReso();
									temp+=platforms[i].get_height()-k.get_height();

								}
			}

		}
		if(!platforms[i].get_r()){

			temp+=platforms[i].get_height();
		}
		if(!platforms[i].get_l()){
					temp+=platforms[i].get_height();
				}
		total+=temp;
	}
	cout<<total;






	}


