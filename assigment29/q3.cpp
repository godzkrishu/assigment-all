/* Create a Product class and convert Product type to 
Item type using constructor
int main()
{
 Item i1;
 Product p1;
 p1.setData(3,4);
 i1=p1;
 return 0;
}*/
// 
 #include<iostream>
  using namespace std;
    class Product{};
   class Item
   {
     int a;
     public:
     Item(){}
    Item( int x):a(x){}//  int --> item
    Item(Product &p)//product --> item
    { cout<<"item(product) called"<<endl;
      a=p.getproduct(); // geting x+y via its method
    }
    int getitem()// accesing its private member via its method
     { 
      return a;
     }
     operator int()
     {
      return a;
     }
 void display()
      {
        cout<<"a= "<<a<<endl;
      }
    
   };
  class Product
 { int x,y;
  public:
Product():x(0),y(0){}
 Product(int x)// int-->product
 {
   this->x=x;
    this->y=x;
 }
  Product( Item &i )// item-->product
  { 
    cout<<" product(item) called"<<endl;
    x=i.getitem();
  }
  void setData(int x, int y)
  {  
     this->x=x;
    this->y=y;
  }
   int getproduct()
   {
    return (x+y);
   }
   operator int()
   {
    return (x+y);
   }
    
   void display()
   {
    cout<<" x= "<<x<<" y= "<<y<<endl;
   }
    Item operator=( Product &p) // assigment operator product-->item
    {  cout<<"  item operator=(product) is called"<<endl;
      return p.getproduct();
    }

 };
  int main()
 { int x=7, y;
     Item i1, i2;
 Product p1, p2;
 p1.setData(3,4);
 i2=x;//int-->item
 i1= p1;// product-->item
  i2.display();
   i1.display();
   p1.display();
   //p1=x;// int-->product
   //p2=i1;// item-->product
   // p1.display();
   //  p2.display();
   x=p1; //product-->int
   y=i1;// item-->int
    cout<<" x= "<<x<<" and y= "<<y<<endl;
 return 0;
 }