#include<iostream>
using namespace std;
class triarea{
      private:
          int x,y;
           public:
             void set_value(int,int);
             int area (){return (x*y)/2;}
             };
             
             void triarea::set_value(int a,int b)
             { x=a;
               y=b;
             }
             
             int main(){
                 triarea rect;
                 rect.set_value (3,4);
                 cout <<"area:" <<rect.area();
                 std::cin.get();
                 return 0;
                 }
                   
