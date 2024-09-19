#include<iostream>
#include<cstdlib>
#include <ctime> 
#include<conio.h>
using namespace std;
	int team2wicket=0, team1wicket=0;
	string all[51]={"1","2","3","4","6","1","2","3","4","6","1","2","3","4","6","1","2","3","4","5","6","1","2","3","4","6","0","0","0","0","0","0","0","0","OUT","OUT","OUT","OUT","NB","NB1","NB2","NB3","NB4","NB5","NB6","WD","WD1","WD2","WD3","WD4","WD5"};
	float totalbowl=0,team1score=0,team2score=0,overs;
	int overrun[50]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int overrun2nd[50]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	string tossteam,team1, team2,tossteam2,tossteam1,bowl, start;
	int randomfortoss,random,team1constant,team2constant, j,reamingbowls;
	string tossarr[2]={"HEADS","TAILS"};
void team11st(){
	//TEAM1
	cout<<"Type PLAY to Start: "; 
	cin>>start;
	while(start=="PLAY"||start=="play"){
	for(j=0;j<overs;j++){
	for(int i=1;i<=6;i++){
	random = (rand()% 51);
	bowl=all[random];
		if(bowl=="1"){
			team1score=team1score+1;
			totalbowl=totalbowl+1;
			overrun[j]=overrun[j]+1;
		}
		else if(bowl=="2"){
			team1score=team1score+2;
			totalbowl=totalbowl+1;
			overrun[j]=overrun[j]+2;
		}
		else if(bowl=="3"){
			team1score=team1score+3;
			totalbowl=totalbowl+1;
			overrun[j]=overrun[j]+3;
		}
		else if(bowl=="4"){
			team1score=team1score+4;
			totalbowl=totalbowl+1;
			overrun[j]=overrun[j]+4;
		}
		else if(bowl=="5"){
			team1score=team1score+5;
			totalbowl=totalbowl+1;
			overrun[j]=overrun[j]+5;
		}
		else if(bowl=="6"){
			team1score=team1score+6;
			totalbowl=totalbowl+1;
			overrun[j]=overrun[j]+6;
		}
		else if(bowl=="OUT"){
			team1wicket++;
			totalbowl=totalbowl+1;
		}
		else if(bowl=="NB"){
			team1score=team1score+1;
			i--;
			totalbowl=totalbowl+1;
			overrun[j]++;
		}
		else if(bowl=="WD"){
			team1score=team1score+1;
			totalbowl=totalbowl+1;
			overrun[j]++;
			i--;
		}
		else if(bowl=="WD1"){
			team1score=team1score+2;
			totalbowl=totalbowl+1;
			overrun[j]=overrun[j]+2;
			i--;
		}
		else if(bowl=="WD2"){
			team1score=team1score+3;
			totalbowl=totalbowl+1;
			overrun[j]=overrun[j]+3;
			i--;
		}
		else if(bowl=="WD3"){
			team1score=team1score+4;
			totalbowl=totalbowl+1;
			overrun[j]=overrun[j]+4;
			i--;
		}
		else if(bowl=="WD4"){
			team1score=team1score+5;
			totalbowl=totalbowl+1;
			i--;
			overrun[j]=overrun[j]+5;
		}
		else if(bowl=="WD5"){
			team1score=team1score+6;
			totalbowl=totalbowl+1;
			overrun[j]=overrun[j]+6;
			i--;
		}
		else if(bowl=="NB5"){
			team1score=team1score+6;
			totalbowl=totalbowl+1;
			overrun[j]=overrun[j]+6;
			i--;
		}
		else if(bowl=="NB4"){
			team1score=team1score+5;
			totalbowl=totalbowl+1;
			overrun[j]=overrun[j]+5;
			i--;
		}
		else if(bowl=="NB3"){
			team1score=team1score+4;
			totalbowl=totalbowl+1;
			overrun[j]=overrun[j]+4;
			i--;
		}
		else if(bowl=="NB6"){
			team1score=team1score+7;
			totalbowl=totalbowl+1;
			overrun[j]=overrun[j]+7;
			i--;
		}
		else if(bowl=="NB2"){
			team1score=team1score+3;
			totalbowl=totalbowl+1;
			overrun[j]=overrun[j]+3;
			i--;
		}
		else if(bowl=="NB1"){
			team1score=team1score+2;
			totalbowl=totalbowl+1;
			overrun[j]=overrun[j]+2;
			i--;
		}
		else if(bowl=="NB4"){
			team1score=team1score+5;
			totalbowl=totalbowl+1;
			overrun[j]=overrun[j]+5;
			i--;
		}
		else if(bowl=="0"){
			totalbowl=totalbowl+1;
		}
		cout<<" ___________________________"<<endl;
		cout<<"|This Bowl:    "<<all[random]<<endl;
		cout<<"|"<<team1<<" : "<<team1score<<"-"<<team1wicket<<endl;
		if(i==6){
		cout<<"|"<<team2<<" : "<<++j<<endl;
		cout<<"|Strike Rate:  "<<team1score/totalbowl*100<<endl;
		cout<<"|This Over: "<<overrun[j]<<endl;
		cout<<"|----->END OF "<<j<<" OVER<-----|"<<endl;
		cout<<" __________________________"<<endl;
		j--;
		}
		else{
		cout<<"|"<<team2<<" : "<<j<<"."<<i<<endl;
		cout<<"|Strike Rate:  "<<team1score/totalbowl*100<<endl;
		cout<<"|This Over: "<<overrun[j]<<endl;
		cout<<" __________________________"<<endl;
		}
		cout<<"Type PLAY for Next ball: ";
		cin>>start;
		if (team1wicket == 10) {
       		break;
		}
	}
	if (team1wicket == 10) {
       	break;
   	}
	}
	if(j==overs){
		break;
	}
	if (team1wicket == 10) {
        		break;
   			}
	}
	team1constant=team1score;
	//TEAM1END
	//1STINGSCORE
	totalbowl=0;
	cout<<" ________________________________________"<<endl;
	cout<<"| "<<team2<<" Need "<<++team1score<<" In "<<reamingbowls<<"( Ball "<<overs<<"-Overs) Of Runrate: "<<team1score/overs<<" |"<<endl;
	cout<<" ________________________________________"<<endl;
	//1STINGSCOREEND
	//TEAM2
	cout<<"Type PLAY to Start: "; 
	cin>>start;
	while(start=="PLAY"||start=="PLAY"){
	for(j=0;j<overs;j++){
	for(int i=1;i<=6;i++){
	int random = (rand()% 35);
	bowl=all[random];
		if(bowl=="1"){
			team2score=team2score+1;
			totalbowl++;
			overrun2nd[j]=overrun2nd[j]+1;
			reamingbowls--;
		}
		else if(bowl=="2"){
			team2score=team2score+2;
			totalbowl++;
			overrun2nd[j]=overrun2nd[j]+2;
			reamingbowls--;
		}
		else if(bowl=="3"){
			team2score=team2score+3;
			totalbowl++;
			overrun2nd[j]=overrun2nd[j]+3;
			reamingbowls--;
		}
		else if(bowl=="4"){
			team2score=team2score+4;
			totalbowl++;
			overrun2nd[j]=overrun2nd[j]+4;
			reamingbowls--;
		}
		else if(bowl=="5"){
			team2score=team2score+5;
			totalbowl++;
			overrun2nd[j]=overrun2nd[j]+5;
			reamingbowls--;
		}
		else if(bowl=="6"){
			team2score=team2score+6;
			totalbowl++;
			overrun2nd[j]=overrun2nd[j]+6;
			reamingbowls--;
		}
		else if(bowl=="OUT"){
			team2wicket++;
			totalbowl++;
			reamingbowls--;
		}
		else if(bowl=="NB"){
			team2score=team2score+1;
			i--;
			totalbowl++;
			overrun2nd[j]++;
		}
		else if(bowl=="WD"){
			team2score=team2score+1;
			totalbowl++;
			overrun2nd[j]++;
			i--;
		}
		else if(bowl=="WD1"){
			team2score=team2score+2;
			totalbowl++;
			overrun2nd[j]=overrun2nd[j]+2;
			i--;
		}
		else if(bowl=="WD2"){
			team2score=team2score+3;
			totalbowl++;
			overrun2nd[j]=overrun2nd[j]+3;
			i--;
		}
		else if(bowl=="WD3"){
			team2score=team2score+4;
			totalbowl++;
			overrun2nd[j]=overrun[j]+4;
			i--;
		}
		else if(bowl=="WD4"){
			team2score=team2score+5;
			totalbowl++;
			i--;
			overrun2nd[j]=overrun2nd[j]+5;
		}
		else if(bowl=="WD5"){
			team2score=team2score+6;
			totalbowl++;
			overrun2nd[j]=overrun2nd[j]+6;
			i--;
		}
		else if(bowl=="NB5"){
			team2score=team2score+6;
			totalbowl++;
			overrun2nd[j]=overrun2nd[j]+6;
			i--;
		}
		else if(bowl=="NB4"){
			team2score=team2score+5;
			totalbowl++;
			overrun2nd[j]=overrun2nd[j]+5;
			i--;
		}
		else if(bowl=="NB3"){
			team2score=team2score+4;
			totalbowl++;
			overrun2nd[j]=overrun2nd[j]+4;
			i--;
		}
		else if(bowl=="NB6"){
			team2score=team2score+7;
			totalbowl++;
			overrun2nd[j]=overrun2nd[j]+7;
			i--;
		}
		else if(bowl=="NB2"){
			team2score=team2score+3;
			totalbowl++;
			overrun2nd[j]=overrun2nd[j]+3;
			i--;
		}
		else if(bowl=="NB1"){
			team2score=team2score+2;
			totalbowl++;
			overrun2nd[j]=overrun2nd[j]+2;
			i--;
		}
		else if(bowl=="NB4"){
			team2score=team2score+5;
			totalbowl++;
			overrun2nd[j]=overrun2nd[j]+5;
			i--;
		}
		else if(bowl=="0"){
			totalbowl=totalbowl+1;
			
			reamingbowls--;
		}
		
		if(team2score>team1constant){
			break;
		}
		cout<<" ___________________________"<<endl;
		cout<<"|This Bowl:    "<<all[random]<<endl;
		cout<<"|"<<team2<<" : "<<team2score<<"-"<<team2wicket<<endl;
		if(i==6){
		cout<<"|"<<team1<<" : "<<++j<<endl;
		cout<<"|Strike Rate:  "<<team2score/totalbowl*100<<endl;
		cout<<"|This Over: "<<overrun2nd[j]<<endl;
		cout<<"|"<<team2<<" Needed "<<team1score-team2score<<" In "<<reamingbowls<<" Balls"<<endl;
		cout<<"|----->END OF "<<j<<" OVER<-----|"<<endl;
		cout<<" __________________________"<<endl;
		j--;
		}
		else{
		cout<<"|"<<team1<<" : "<<j<<"."<<i<<endl;
		cout<<"|Strike Rate:  "<<team2score/totalbowl*100<<endl;
		cout<<"|This Over: "<<overrun2nd[j]<<endl;
		cout<<"|"<<team2<<" Needed "<<team1score-team2score<<" In "<<reamingbowls<<" Balls"<<endl;
		cout<<" __________________________"<<endl;
		}
		
		cout<<"Type PLAY for Next ball: ";
		cin>>start;
	if (team2wicket == 10) {
       	break;
   			}
	}
	if (team2wicket == 10) {
        break;
   			}
	}
	if(j==overs || team2wicket==10){
		break;
	}
	
	if (team2wicket == 10) {
		break;
   	}
	}
	}
void team21st(){	//TEAM1
	cout<<"Type PLAY to Start: "; 
	cin>>start;
	while(start=="PLAY"||start=="play"){
	for(j=0;j<overs;j++){
	for(int i=1;i<=6;i++){
	random = (rand()% 35);
	bowl=all[random];
		if(bowl=="1"){
			team2score=team2score+1;
			totalbowl=totalbowl+1;
			overrun2nd[j]=overrun2nd[j]+1;
		}
		else if(bowl=="2"){
			team2score=team2score+2;
			totalbowl=totalbowl+1;
			overrun2nd[j]=overrun2nd[j]+2;
		}
		else if(bowl=="3"){
			team2score=team2score+3;
			totalbowl=totalbowl+1;
			overrun2nd[j]=overrun2nd[j]+3;
		}
		else if(bowl=="4"){
			team2score=team2score+4;
			totalbowl=totalbowl+1;
			overrun2nd[j]=overrun2nd[j]+4;
		}
		else if(bowl=="5"){
			team2score=team2score+5;
			totalbowl=totalbowl+1;
			overrun2nd[j]=overrun2nd[j]+5;
		}
		else if(bowl=="6"){
			team2score=team2score+6;
			totalbowl=totalbowl+1;
			overrun2nd[j]=overrun2nd[j]+6;
		}
		else if(bowl=="OUT"){
			team2wicket++;
			totalbowl=totalbowl+1;
		}
		else if(bowl=="NB"){
			team2score=team2score+1;
			i--;
			totalbowl=totalbowl+1;
			overrun2nd[j]++;
		}
		else if(bowl=="WD"){
			team2score=team2score+1;
			totalbowl=totalbowl+1;
			overrun2nd[j]++;
			i--;
		}
		else if(bowl=="WD1"){
			team2score=team2score+2;
			totalbowl=totalbowl+1;
			overrun2nd[j]=overrun2nd[j]+2;
			i--;
		}
		else if(bowl=="WD2"){
			team2score=team2score+3;
			totalbowl=totalbowl+1;
			overrun2nd[j]=overrun2nd[j]+3;
			i--;
		}
		else if(bowl=="WD3"){
			team2score=team2score+4;
			totalbowl=totalbowl+1;
			overrun2nd[j]=overrun2nd[j]+4;
			i--;
		}
		else if(bowl=="WD4"){
			team2score=team2score+5;
			totalbowl=totalbowl+1;
			i--;
			overrun2nd[j]=overrun2nd[j]+5;
		}
		else if(bowl=="WD5"){
			team2score=team2score+6;
			totalbowl=totalbowl+1;
			overrun2nd[j]=overrun2nd[j]+6;
			i--;
		}
		else if(bowl=="NB5"){
			team2score=team2score+6;
			totalbowl=totalbowl+1;
			overrun2nd[j]=overrun2nd[j]+6;
			i--;
		}
		else if(bowl=="NB4"){
			team2score=team2score+5;
			totalbowl=totalbowl+1;
			overrun2nd[j]=overrun2nd[j]+5;
			i--;
		}
		else if(bowl=="NB3"){
			team2score=team2score+4;
			totalbowl=totalbowl+1;
			overrun2nd[j]=overrun2nd[j]+4;
			i--;
		}
		else if(bowl=="NB6"){
			team2score=team2score+7;
			totalbowl=totalbowl+1;
			overrun2nd[j]=overrun2nd[j]+7;
			i--;
		}
		else if(bowl=="NB2"){
			team2score=team2score+3;
			totalbowl=totalbowl+1;
			overrun2nd[j]=overrun2nd[j]+3;
			i--;
		}
		else if(bowl=="NB1"){
			team2score=team2score+2;
			totalbowl=totalbowl+1;
			overrun2nd[j]=overrun2nd[j]+2;
			i--;
		}
		else if(bowl=="NB4"){
			team2score=team2score+5;
			totalbowl=totalbowl+1;
			overrun2nd[j]=overrun2nd[j]+5;
			i--;
		}
		else if(bowl=="0"){
			totalbowl=totalbowl+1;
		}
		cout<<" ___________________________"<<endl;
		cout<<"|This Bowl:    "<<all[random]<<endl;
		cout<<"|"<<team2<<" : "<<team2score<<"-"<<team2wicket<<endl;
		if(i==6){
		cout<<"|"<<team1<<" : "<<++j<<endl;
		cout<<"|Strike Rate:  "<<team2score/totalbowl*100<<endl;
		cout<<"|This Over: "<<overrun[j]<<endl;
		cout<<"|----->END OF "<<j<<" OVER<-----|"<<endl;
		cout<<" __________________________"<<endl;
		j--;
		}
		else{
		cout<<"|"<<team1<<" : "<<j<<"."<<i<<endl;
		cout<<"|Strike Rate:  "<<team2score/totalbowl*100<<endl;
		cout<<"|This Over: "<<overrun2nd[j]<<endl;
		cout<<" __________________________"<<endl;
		}
		cout<<"Type PLAY for Next ball: ";
		cin>>start;
		if (team2wicket == 10) {
		break;
		}
	}
	if (team2wicket == 10) {
	break;
   	}
	}
	if(j==overs || team2wicket==10){
		break;
	}
	if (team2wicket == 10) {
        break;
   	}
	}
	team2constant=team2score;
	//TEAM1END
	//1STINGSCORE	int overrun2nd[50]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	totalbowl=0;
	cout<<" ________________________________________"<<endl;
	cout<<"| "<<team1<<" Need "<<++team2score<<" In "<<reamingbowls<<" Ball ("<<overs<<"-Overs) Of Runrate: "<<team2score/overs<<" |"<<endl;
	cout<<" ________________________________________"<<endl;
	//1STINGSCOREEND
	
	//TEAM2
	cout<<"Type PLAY to Start: "; 
	cin>>start;
	while(start=="PLAY"||start=="PLAY"){
	for(j=0;j<overs;j++){
	for(int i=1;i<=6;i++){
	int random = (rand()% 35);
	bowl=all[random];
		if(bowl=="1"){
			team1score=team1score+1;
			totalbowl++;
			overrun[j]=overrun[j]+1;
			reamingbowls--;
		}
		else if(bowl=="2"){
			team1score=team1score+2;
			totalbowl++;
			overrun[j]=overrun[j]+2;
			reamingbowls--;
		}
		else if(bowl=="3"){
			team1score=team1score+3;
			totalbowl++;
			overrun[j]=overrun[j]+3;
			reamingbowls--;
		}
		else if(bowl=="4"){
			team1score=team1score+4;
			totalbowl++;
			overrun[j]=overrun[j]+4;
			reamingbowls--;
		}
		else if(bowl=="5"){
			team1score=team1score+5;
			totalbowl++;
			overrun[j]=overrun[j]+5;
			reamingbowls--;
		}
		else if(bowl=="6"){
			team1score=team1score+6;
			totalbowl++;
			overrun[j]=overrun[j]+6;
			reamingbowls--;
		}
		else if(bowl=="OUT"){
			team1wicket++;
			totalbowl++;
			reamingbowls--;
				if (team1wicket == 10) {
        		break;
   				}
		}
		else if(bowl=="NB"){
			team1score=team1score+1;
			i--;
			totalbowl++;
			overrun[j]++;
		}
		else if(bowl=="WD"){
			team1score=team1score+1;
			totalbowl++;
			overrun[j]++;
			i--;
		}
		else if(bowl=="WD1"){
			team1score=team1score+2;
			totalbowl++;
			overrun[j]=overrun[j]+2;
			i--;
		}
		else if(bowl=="WD2"){
			team1score=team1score+3;
			totalbowl++;
			overrun[j]=overrun[j]+3;
			i--;
		}
		else if(bowl=="WD3"){
			team1score=team1score+4;
			totalbowl++;
			overrun[j]=overrun[j]+4;
			i--;
		}
		else if(bowl=="WD4"){
			team1score=team1score+5;
			totalbowl++;
			i--;
			overrun[j]=overrun[j]+5;
		}
		else if(bowl=="WD5"){
			team1score=team1score+6;
			totalbowl++;
			overrun[j]=overrun[j]+6;
			i--;
		}
		else if(bowl=="NB5"){
			team1score=team1score+6;
			totalbowl++;
			overrun[j]=overrun[j]+6;
			i--;
		}
		else if(bowl=="NB4"){
			team1score=team1score+5;
			totalbowl++;
			overrun[j]=overrun[j]+5;
			i--;
		}
		else if(bowl=="NB3"){
			team1score=team1score+4;
			totalbowl++;
			overrun[j]=overrun[j]+4;
			i--;
		}
		else if(bowl=="NB6"){
			team1score=team1score+7;
			totalbowl++;
			overrun[j]=overrun[j]+7;
			i--;
		}
		else if(bowl=="NB2"){
			team1score=team1score+3;
			totalbowl++;
			overrun[j]=overrun[j]+3;
			i--;
		}
		else if(bowl=="NB1"){
			team1score=team1score+2;
			totalbowl++;
			overrun[j]=overrun[j]+2;
			i--;
		}
		else if(bowl=="NB4"){
			team1score=team1score+5;
			totalbowl++;
			overrun[j]=overrun[j]+5;
			i--;
		}
		else if(bowl=="0"){
			totalbowl=totalbowl+1;
			reamingbowls--;
		}
		
		if(team1score>team2constant){
			break;
		}
		cout<<" ___________________________"<<endl;
		cout<<"|This Bowl:    "<<all[random]<<endl;
		cout<<"|"<<team1<<" : "<<team1score<<"-"<<team1wicket<<endl;
		if(i==6){
		cout<<"|"<<team2<<" : "<<++j<<endl;
		cout<<"|Strike Rate:  "<<team1score/totalbowl*100<<endl;
		cout<<"|This Over: "<<overrun[j]<<endl;
		cout<<"|"<<team1<<" Needed "<<team2score-team1score<<" In "<<reamingbowls<<" Balls"<<endl;
		cout<<"|----->END OF "<<j<<" OVER<-----|"<<endl;
		cout<<" __________________________"<<endl;
		j--;
		}
		else{
		cout<<"|"<<team2<<" : "<<j<<"."<<i<<endl;
		cout<<"|Strike Rate:  "<<team1score/totalbowl*100<<endl;
		cout<<"|This Over: "<<overrun[j]<<endl;
		cout<<"|"<<team1<<" Needed "<<team2score-team1score<<" In "<<reamingbowls<<" Balls"<<endl;
		cout<<" __________________________"<<endl;
		}
		
		cout<<"Type PLAY for Next ball: ";
		cin>>start;
			if (team1wicket == 10) {
        		break;
   			}
	}
	if (team1wicket == 10) {
        		break;
   			}
	}	if (team1wicket == 10) {
        		break;
   			}
	if(j==overs || team1wicket==10){
		break;
	}
	
			if (team1wicket == 10) {
        		break;
   			}
	}
	}
int main(){
	srand(static_cast<unsigned int>(time(NULL)));
	cout<<"----->TEAM SELECTION<-----"<<endl;
	cout<<"Enter 1st Team Name: ";
	cin>>team1;
	cout<<"Enter 2nd Team Name: ";
	cin>>team2;
	cout<<"----->OVER SELECTION<-----"<<endl;
	cout<<"How much overs did u want to play: ";
	cin>>overs;
	for(int i=0;i<50;i++){
		if(overs==i){
		reamingbowls=overs*6;
		}
	}
	int randomNum = rand() % 2;
    int userInput;
    cout<<"----->TOSS<-----"<<endl;
    cout << "Enter 0 for Heads or 1 for Tails: ";
    cin >> userInput;
    if (userInput == randomNum) {
    	cout<<team2<<" have won the Toss"<<endl<<"Choose BATTING OR BOWLING: ";
    	string choose;
    	cin>>choose;
    	if(choose=="BOWLING" || choose=="bowling" ){
    		cout<<"<-----LETS PLAY CRICKET POWER PLAY----->"<<endl;
    		team11st();
			if (team2score < team1score){
            cout << endl;
			cout<<"----->MATCH SUMMARY<-----"<<endl;
            cout << team1 << " WON THE MATCH by " <<  --team1score - team2score << " RUNS." << endl;
            cout << team1 << " TOTAL SCORE: " << team1score << " for " << team1wicket << " WICKETS" << endl;
            cout << team2 << " TOTAL SCORE: " << team2score << " for " << team2wicket << " WICKETS" << endl;
            }
            else if (team2score == team1score)
            {
            cout << endl;
            cout<<"----->MATCH SUMMARY<-----"<<endl;
            cout << "MATCH TIED!" << endl;
            cout << team2 << " TOTAL SCORE: " << team2score << " for " << team2wicket << " WICKETS" << endl;
            cout << team1 << " TOTAL SCORE: " << team1score << " for " << team1wicket << " WICKETS" << endl;
            }
            else
            {
            cout << endl;
            cout<<"----->MATCH SUMMARY<-----"<<endl;
            cout << team2 << " WON THE MATCH by " << 10 - team2wicket << " WICKETS." << endl;
            cout << team2 << " TOTAL SCORE: " << team2score << " for " << team2wicket << " WICKETS" << endl;
            cout << team1 << " TOTAL SCORE: " << team1score << " for " << team1wicket << " WICKETS" << endl;
            }
		}
		else if(choose=="BATTING" || choose=="batting"){
			cout<<"<-----LETS PLAY CRICKET POWER PLAY----->"<<endl;
			team21st();
			if (team2score > team1score){
            cout << endl;
            cout<<"----->MATCH SUMMARY<-----"<<endl;
            cout << team2 << " WON THE MATCH by " <<  --team2score - team1score << " RUNS." << endl;
            cout << team2 << " TOTAL SCORE: " << team2score << " for " << team2wicket << " WICKETS" << endl;
            cout << team1 << " TOTAL SCORE: " << team1score << " for " << team1wicket << " WICKETS" << endl;
            }
            else if (team2score == team1score)
            {
            cout << endl;
            cout<<"----->MATCH SUMMARY<-----"<<endl;
            cout << "MATCH TIED!" << endl;
            cout << team2 << " TOTAL SCORE: " << team2score << " for " << team2wicket << " WICKETS" << endl;
            cout << team1 << " TOTAL SCORE: " << team1score << " for " << team1wicket << " WICKETS" << endl;
            }
            else
            {
            cout << endl;
            cout<<"----->MATCH SUMMARY<-----"<<endl;
            cout << team1 << " WON THE MATCH by " << 10 - team1wicket << " WICKETS." << endl;
            cout << team1 << " TOTAL SCORE: " << team1score << " for " << team1wicket << " WICKETS" << endl;
            cout << team2 << " TOTAL SCORE: " << team2score << " for " << team2wicket << " WICKETS" << endl;
            }
		}
    } 
	else {
        cout<<team1<<" have won the Toss"<<endl<<"Choose BATTING OR BOWLING: ";
        string choose;
    	cin>>choose;
        if(choose=="BOWLING" || choose=="bowling"){
        	cout<<"<-----LETS PLAY CRICKET POWER PLAY----->"<<endl;
    		team21st();
    		if (team2score > team1score){
            cout << endl;
            cout<<"----->MATCH SUMMARY<-----"<<endl;
            cout << team2 << " WON THE MATCH by " <<  --team2score - team1score << " RUNS." << endl;
            cout << team2 << " TOTAL SCORE: " << team2score << " for " << team2wicket << " WICKETS" << endl;
            cout << team1 << " TOTAL SCORE: " << team1score << " for " << team1wicket << " WICKETS" << endl;
            }
            else if (team2score == team1score)
            {
            cout << endl;
            cout<<"----->MATCH SUMMARY<-----"<<endl;
            cout << "MATCH TIED!" << endl;
            cout << team2 << " TOTAL SCORE: " << team2score << " for " << team2wicket << " WICKETS" << endl;
            cout << team1 << " TOTAL SCORE: " << team1score << " for " << team1wicket << " WICKETS" << endl;
            }
            else
            {
            cout << endl;
            cout<<"----->MATCH SUMMARY<-----"<<endl;
            cout << team1 << " WON THE MATCH by " << 10 - team1wicket << " WICKETS." << endl;
            cout << team1 << " TOTAL SCORE: " << team1score << " for " << team1wicket << " WICKETS" << endl;
            cout << team2 << " TOTAL SCORE: " << team2score << " for " << team2wicket << " WICKETS" << endl;
            }
		}
		else if(choose=="BATTING" || choose=="batting"){
			cout<<"<-----LETS PLAY CRICKET POWER PLAY----->"<<endl;
			team11st();
			if (team2score < team1score){
            cout << endl;
            cout<<"----->MATCH SUMMARY<-----"<<endl;
            cout << team1 << " WON THE MATCH by " <<  --team1score - team2score << " RUNS." << endl;
            cout << team1 << " TOTAL SCORE: " << team1score << " for " << team1wicket << " WICKETS" << endl;
            cout << team2 << " TOTAL SCORE: " << team2score << " for " << team2wicket << " WICKETS" << endl;
            }
            else if (team2score == team1score)
            {
            cout << endl;
            cout<<"----->MATCH SUMMARY<-----"<<endl;
            cout << "MATCH TIED!" << endl;
            cout << team2 << " TOTAL SCORE: " << team2score << " for " << team2wicket << " WICKETS" << endl;
            cout << team1 << " TOTAL SCORE: " << team1score << " for " << team1wicket << " WICKETS" << endl;
            }
            else
            {
            cout << endl;
            cout<<"----->MATCH SUMMARY<-----"<<endl;
            cout << team2 << " WON THE MATCH by " << 10 - team2wicket << " WICKETS." << endl;
            cout << team2 << " TOTAL SCORE: " << team2score << " for " << team2wicket << " WICKETS" << endl;
            cout << team1 << " TOTAL SCORE: " << team1score << " for " << team1wicket << " WICKETS" << endl;
            }
		}
    }
}
