 #include <iostream>
 using namespace std;
 void flowerShop(int redRose , int whiteRose , int tulip);
 main()
{
 int redroses , whiteroses , tulips;
 cout<<"Red Rose: ";
 cin>>redroses;
 cout<<"White Rose: ";
 cin>>whiteroses;
 cout<<"Tulips: ";
 cin>>tulips; 



 flowerShop(redroses,whiteroses,tulips);
 }
  void flowerShop(int redRose , int whiteRose , int tulip)
{
 float price,discountedprice;
 
 price = redRose*2.00 + whiteRose*4.10 + tulip*2.50;
 cout<<"Orignal Price: "<<price<<endl;
 discountedprice = price - 0.2*price; 
 
 if (price > 200)
{
 cout<<"Price after Discount: "<<discountedprice;
}
 if (price<=200)
{
 cout<<"No discount applied.";
}
}

















