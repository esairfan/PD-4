 #include <iostream>
 using namespace std;
 void longestTime(int hour , int minute);
 main()
{
 int hours , minutes;
 cout<<"Enter the number of hours: ";
 cin>>hours;
 cout<<"Enter the number of minutes: ";
 cin>>minutes;

 longestTime(hours , minutes);
}
 void longestTime(int hour , int minute)
{
 if (hour*60>minute)
{
 cout<<hour;
}
if (hour*60<minute)
{
 cout<<minute;
}
}

















