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

string isPossible(stack<int> x){
	stack<int> branch;

	stack<int> lake;
	stack<int> temp;
	string output = "Y";
	lake.push(0);
	int num = 0;
	while(!x.empty()){
		if(x.top()-lake.top()!=1){
			if(!branch.empty()){
			if(branch.top()-lake.top()!=1&&x.top()>branch.top()){
				output = "N";
				break;
			}
			else if(branch.top()-lake.top()==1&&!branch.empty()){
				lake.push(branch.top());
				branch.pop();

			}
			else if(x.top()<branch.top()){
				branch.push(x.top());
				x.pop();
			}}
			else{
				branch.push(x.top());
								x.pop();
			}
		}

		else{
			lake.push(x.top());
			x.pop();
		}

	}
	return output;
}
int main() {
	int tests;
	cin>>tests;
	int counter = 0;
	stack<int> numbers;
	vector<stack<int>> answers;
	vector<string> ans;
	while(counter<tests){
		int temp;

		cin>>temp;
		int counter2 = 0;
		while(counter2<temp){
			int temp2;
			cin>>temp2;
			numbers.push(temp2);
			counter2++;

		}
		answers.push_back(numbers);
		while(!numbers.empty()){
			numbers.pop();
		}
		counter++;

	}
	for(int i=0;i<answers.size();i++){
		cout<<isPossible(answers[i])<<"\n";
	}





	}


