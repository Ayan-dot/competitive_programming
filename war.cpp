

#include <iostream>
#include <bits/stdc++.h>
#include <queue>
using namespace std;


int main() {
	vector<int> larry;
	vector<int> opponent;
	int cardNum;
	int counter = 0;
	int counter2 = 0;
	bool battleactive = false;
	int battles = 0;
	cin>>cardNum;
	while(counter<cardNum){
		int temp;
		cin>>temp;
		larry.push_back(temp);
		counter++;
	}
	while(counter2<cardNum){
		int temp2;
			cin>>temp2;
			opponent.push_back(temp2);
			counter2++;
		}

	for(int i = 0; i<larry.size(); i++){
		if(larry[i]==opponent[i]){
			if(!battleactive){
		
				battles++;
				battleactive=true;
			}
		}
		else{
			if(battleactive){
				battleactive = false;
			}
		}

	}
	cout <<battles;




}


