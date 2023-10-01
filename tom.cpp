#include<iostream>
using namespace std;
void pet(int holidays); 
main(){
 int holiday;
 cout<<"Holidays: ";
 cin>>holiday;
 pet(holiday);

}
void pet(int holidays)
{
 int wrkingdays,time,resttime,hours,minutes;

 wrkingdays=365-holidays;
 time=wrkingdays*63+holidays*127;
 resttime=30000-time; 
 hours=resttime/60;
 minutes=resttime-hours*60;
 if (time < 30000)
{
 cout <<"Tom sleeps well"<<endl;
 cout <<hours<<" hours and "<<minutes<<" minutes less for play";   

}  
 if (time > 30000)
{
 cout <<"Tom will run away"<<endl;
 cout <<hours<<" hours and "<<minutes<<" minutes for play";   

}  

 

}