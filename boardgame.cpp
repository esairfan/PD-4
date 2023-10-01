#include<iostream>
using namespace std;
void possibleBonus(int pos1,int pos2); 
main(){
 int position , frndposition;
 cout<<"Enter your positon: ";
 cin>>position;
 cout<<"Enter your friend's positon: ";
 cin>>frndposition;
 possibleBonus(position,frndposition);

}
void possibleBonus(int pos1,int pos2)
{
     
  if ( pos2 <= pos1+6 )
{
 cout <<"true";   

}  
 if (pos2 > pos1+6)
{
 cout <<"false"; 

}  

 

}