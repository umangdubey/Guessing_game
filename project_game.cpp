#include<iostream>
#include <cstdlib>
#include<time.h>
#include<stdio.h>
#include<windows.h>
using namespace std;

class main{
    public: 
	       void dis();
	       void switch_case();
	       void level(int);
	       void clear();
}; main o;
                                 /* these are global variables */
                                    
int score_1=0;
          int score_2=0;
          
          int level[]={1,2,3,4,5,6,7,8,9,10};

void main :: dis()                                        // display function
{
	char name_player_1[10],name_player_2[10];
	char choice;
	cout<< " Enter the  first player  name "<<endl;
	cin>> name_player_1;
	cout<< " Enter the second player  name "<<endl;
	cin>> name_player_2;
	
	cout<<" choice who want to play first "<<" \n"<<" for player one (f) and for player second (S)"<<endl;
	cin>>choice;
	if( choice == 'f'){
		cout<< "for starting the level one press key Q  "<<endl;
	}
	else {
		cout<< " second player got chance to start the match "<<endl;
		cout<<"press Q to start the match "<<endl;
	}
}


void main::clear()                //for clearing screen
{
	system("cls");
}

void main::level(int k)                      // for level 1

{    

Sleep(2000);
cout<<" here is your first number"<<endl;
	int secret_num,guess_num;
	int new_score_1=0,new_score_2;
	 
 /* initialize random seed: */
  srand (time(NULL));
  /* generate secret number between 1 and 10: */
  for (int t=0;t<=level;t++)
{
    secret_num = rand() % 10 + 1;
    cout<<secret_num<<endl;
}
  
  Sleep(2000);
  o.clear();
  
  cout<<" after clearing screen 1st player have to enter the number which display before   "<<endl;
  cout<<" guess the number you seen"<<endl;
  cin>>guess_num;
  
  if(secret_num==guess_num) {
  	cout<<" 1st player win the game "<<endl;
  	new_score_1=  score_1 + 5;
  }
  else {
  	cout<<" 1st player lose the game "<<endl;
  	new_score_1= score_1 - 5;
  }
  cout<<" clear the screen "<<endl;
  
  o.clear();
  
  Sleep(2000);
  
  cout<<" now new number display for 2nd player"<<endl;
  /* initialize random seed: */
  srand (time(0));
  /* generate secret number between 1 and 10: */
  secret_num = rand() % 10 + 1;
  cout<<secret_num<<endl;
Sleep(2000);
  o.clear();
  cout<<" after clearing screen 2nd player have to enter the number which display before   "<<endl;
  cout<<" guess the number you seen"<<endl;
  cin>>guess_num;
  if(secret_num==guess_num) {
  	cout<<" 2st player win the game "<<endl;
  	new_score_2=  score_2 + 5;
  }
  else {
  	cout<<" 2st player lose the game "<<endl;
  	new_score_2= score_2 - 5;
  }
  
  cout<<" 1st player score after level 1"<<"\n"<<new_score_1<<endl;
  cout<<"2nd player score after level 1"<<"\n"<<new_score_2<<endl;
  
  if(new_score_1>new_score_2)
  {
  	cout<<"1st player win the game "<<endl;
  }
  else if (new_score_1==new_score_2)
  {
  cout<<" match tie "<<endl;	
  }
  else
  {
  	cout<<"2nd player win the game"<<endl;
  }
  
  Sleep(4000);
  o.clear();
  cout<<" want to go on next level  press button n "<<endl;
  o.switch_case();
}

void main :: switch_case()  {
	 char i;
    cout<<"Enter your choice of , for start match(Q),for clearing screen (c),for next round (n),exit (e) \n"<<endl;
    cin>>i;
    switch(i)
    {
    case 'Q':
	  o.level(level);
	  break;

    case 'c':
	  o.clear();
	  break;
	

	  	  
    case 'e':
	  exit(0);

    default:
	  cout<<"wrong choice ";
    }
	
}


int main ()
{  
     o.dis();
   system("PAUSE");
   o.switch_case();
}
