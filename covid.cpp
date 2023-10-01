 #include<iostream>
 using namespace std;
 void tpChecker (int person , int roll); 
 main()
{
 system("cls");
 int people , rolls;
 cout<<"Number of people in the household: ";
 cin>>people;
 cout<<"Number of rolls of TP: ";
 cin>>rolls;

 tpChecker (people,rolls);
 
}
 void tpChecker (int person , int roll)
{
 int sheets , times , days;

 sheets = roll * 500;
 times  = sheets / 57;
 days = times / person;
 
 if(days<14)
{
 cout<<"Your TP will only last "<<days<<" days, buy more!";
} 
 if(days >= 14)
{
 cout<<"Your TP will last "<<days<<" days, no need to panic!";
}
   
    
} 