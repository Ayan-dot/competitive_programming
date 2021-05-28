	//============================================================================
	// Name        : CCCsolutions.cpp
	// Author      : Ayan Hafeez
	// Version     :
	// Copyright   : Ayan Hafeez's solutions for DMOJ
	// Description : Hello World in C++, Ansi-style
	//============================================================================

	#include <iostream>
	#include <vector>
	#include <queue>
	#include <stack>
	using namespace std;

  class Suite{
    vector<char> cards;
    string name = "";
    bool stopped = false;
    int points = 0;
    public:
    Suite(string n){
      name = n; 
    }
    void string_push(char s){
      cards.push_back(s);
    }
    string string_ret(){
      return name;
    }
    int points_raw(){
      for(auto i: cards){
        if((int)i==(int)'A'){
          points+=4;
          stopped = true;
        }
        if((int)i==(int)'K'){
          points+=3;
          if(cards.size()==1){
            points--;
          }
          else{
            stopped = true;
          }
        }
        if((int)i==(int)'Q'){
          points+=2;
          if(cards.size()<=2){
            points--;
          }
          else{
            stopped = true;
          }
        }
        if((int)i==(int)'J'){
          points+=1;
          if(cards.size()<=3){
            points--;
          }
        }
      }
      return points;

    }
    bool return_stopped(){
      return stopped;
    }
    int return_size(){
      return cards.size();
    }

  };
  string return_Action(vector<Suite> s1){
    int totalpoints = 0;
    int extrapoints = 0;
    bool bidposs = false;
    bool trumposs = true;
    string output = "";
    int maxsize = 0;
    Suite *primary;
    for(auto i: s1){
      if(maxsize>i.return_size()){
        maxsize = i.return_size();
        primary = &i;
      }
      if(i.return_size()==2){
        extrapoints++;
      }
      else if(i.return_size()==1||i.return_size()==0){
        extrapoints+=2;
      }
      totalpoints+=i.points_raw();
      if(!i.return_stopped()){
        trumposs = false;
      }
    }
    if(totalpoints>=16&&trumposs){
      output = "BID NO-TRUMP";

    }
    else{
      totalpoints+=extrapoints;
      if(totalpoints<14){
        output = "PASS";
      }
      else{
        output = "BID" + primary->string_ret();

      }

    }

    return output;
  }
	int main(){
    int cardcount = 0;
    Suite spades = Suite("S");
    Suite hearts = Suite("H");
    Suite diamonds= Suite("D");
    Suite clubs = Suite("C");
    vector<Suite> suites;
    suites.push_back(spades);
        
        suites.push_back(hearts);
        
        suites.push_back(diamonds);
        
        suites.push_back(clubs);
       
    
    char nCard[2];
    while(true){
      cin>>nCard;
      if((int)nCard[1]==(int)'S'){
        suites[0].string_push(nCard[0]);
        cout<<nCard[0];
      }
      else if((int)nCard[1]==(int)'H'){
        suites[1].string_push(nCard[0]);
        cout<<nCard[0];
      }
      else if((int)nCard[1]==(int)'D'){
        suites[2].string_push(nCard[0]);
        cout<<nCard[0];
      }
      else{
        suites[3].string_push(nCard[0]);
        cout<<nCard[0];}

        cardcount++;
        if(cardcount==12){
          printf("%s", return_Action(suites));
          cardcount = 0;
          suites.clear();

        }
      
      
      
    }
     
    
        

      
    
	}




