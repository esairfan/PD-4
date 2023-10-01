 #include<iostream>
 using namespace std;
 void  calculatePayableAmount (string country,float price);
 main()
{
 string country1;
 int purchase;
 
 while (true)
 {
 cout<<"Enter the country's name: ";
 cin>>country1;
 
 cout<<"Enter the ticket price in dollars: $";
 cin>>purchase;
 
 
 calculatePayableAmount (country1,purchase);
	
 }
 
 
 }


 void calculatePayableAmount (string country,float price)
{
 float discountedprice;

 if (country == "Pakistan")
{
  discountedprice=price-0.05*price;
}
 
 if (country == "Ireland")
{
  discountedprice=price-0.1*price;
}
 if (country == "India")
{
  discountedprice=price-0.2*price;
}
 if (country == "England")
{
  discountedprice=price-0.30*price;
}
 if (country == "Canada")
{
  discountedprice=price-0.45*price;
}








 cout<<"Final ticket price after discount: $"<<discountedprice<<endl;

}