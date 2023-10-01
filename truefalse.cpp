#include<iostream>
using namespace std;
void IsEqual(int n1,int n2);
main()
{
  
 int a,b;
 cout<< "Enter the first number: ";
 cin >> a;  
 cout<< "Enter the second number: ";
 cin >> b;  
 IsEqual(a,b);

}
 void IsEqual(int n1,int n2)
{
 if (n1==n2)
{
 cout<<"true";
}
 if (n1!=n2)
{
 cout<<"false";
}   
}





