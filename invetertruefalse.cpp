#include<iostream>
using namespace std;
void Reverse(string condition);
main()
{  
 string cond;
 cout<< "Enter 'true' or 'false': ";
 cin >> cond;    
 Reverse(cond);

}
 void Reverse(string condition)
{
 if (condition=="true")
{
 cout<<"false";
}
 if (condition=="false")
{
 cout<<"true";
}   
}