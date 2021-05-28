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
  #include <limits>
	using namespace std;
class Hotel{
		int cost;
		bool possible = false;
		vector<int> dates;
public:
		Hotel(int x){
			cost = x;

		}
		bool check_possible(int x, int y){
			bool poss = false;
			for(int i =0; i<dates.size();i++){
				if(dates[i]>=x&&cost*x<=y){
					poss = true;
				}
			}
		
			return poss;
		}
		int return_cost(int x){
			return x*cost;
		}
		void update_dates(int x){
			dates.push_back(x);
		}
	};
	int main(){
    vector<int> answers;
		int participants;
		while(scanf("%d", &participants)!= EOF){
    
			int budget;
			int numHot;
			int numDate;
			int mincost = INT_MAX;
			scanf(" %d %d %d", &budget, &numHot, &numDate);
			vector<Hotel> possHotels;
      int counter = 0;
			while(counter<numHot){
        
				int temp;
				scanf("%d", &temp);
				Hotel temphot = Hotel(temp);
        int counter2 = 0;
				while(counter2<numDate){
          
					int temp2;
					scanf("%d", &temp2);
					temphot.update_dates(temp2);
          counter2++;
				}
      possHotels.push_back(temphot);
      counter++;
			}
      
			for(int i =0; i<possHotels.size(); i++){
				if(possHotels[i].check_possible(participants, budget)&&possHotels[i].return_cost(participants)<mincost){
          
					mincost = possHotels[i].return_cost(participants);
          

				}
       
       
			}
      answers.push_back(mincost);
			
		}
    for(int i = 0; i<answers.size(); i++){
      if(answers[i]==INT_MAX){
				cout<<"stay home\n";
			}
			else{
				cout<<answers[i]<<"\n";
			}
    }
    

}




