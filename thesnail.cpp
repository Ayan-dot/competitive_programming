	//============================================================================
	// Name        : CCCsolutions.cpp
	// Author      : Ayan Hafeez
	// Version     :
	// Copyright   : Ayan Hafeez's solutions for DMOJ
	// Description : Solutions
	//============================================================================

	#include <iostream>
	#include <bits/stdc++.h>
	#include <queue>
	#include <stack>
	using namespace std;
	int main(){
		int h;
    scanf("%d", &h);
		while(h!=0){
			double u;
			double d;
			double f;
			double snailheight = 0;
			int days = 0;
			bool success = false;
			scanf("%lf %lf %lf", &u,&d,&f);
      int firstu = u;
			while(snailheight>=0&&!success){
				snailheight+=u;
				u -= firstu*(f/(double)100.0);
        if(u<0){
          u=0;
      
        }
				
        
        
				if(snailheight>h){
					success = true;
				}
        snailheight-=d;
       
				days++;
			}
			if(success){
				cout<<"success on day "<<days<<"\n";
			}
			else{
				cout<<"failure on day "<<days<<"\n";
			}
		scanf("%d", &h);	
		}
	}



