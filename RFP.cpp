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
    int req, props;
    vector<string> answers;
    
    char throwaway[256];

  
  while(scanf("%d %d", &req, &props), (req || props)){
    cin.ignore(300, '\n');
    double maincost = 0;
    double maincompl = 0;
    string mainreq = "";
    int counter = req;
    while(counter--){
      cin.getline(throwaway, 256);
      // cout<<throwaway;
    }
    while(props--){
    string temp;
    getline(cin, temp);
   
    double cost;
    int reqmet;
    scanf("%lf %d", &cost, &reqmet);
    cin.getline(throwaway, 256); 
    if((double)reqmet/req>maincompl){
      maincompl = (double)reqmet/req;
      mainreq = temp;
      maincost = cost;
    }
    else if((double)reqmet/req==maincompl&&cost<maincost){
      mainreq = temp;
      maincost = cost;
    }
    while(reqmet--){
      cin.getline(throwaway, 256);
    }
    
    }
    answers.push_back(mainreq);
    
   

  }
  for(int i = 0; i<answers.size();i++){
    cout<<"\nRFP #"<<i+1;
    cout<<"\n"<<answers[i]<<"\n";
  }
		
	}



