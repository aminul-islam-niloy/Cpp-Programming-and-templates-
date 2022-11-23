#include<iostream>
using namespace std;

class Shape
           {
               public:
               double dim1,dim2;
               Shape(double dim1, double dim2){
                   this -> dim1= dim1;
                   this-> dim2= dim2;
               }

               virtual double area(){
                   return 0;
               }

           };




 class Traingle : public Shape{

        public:
         Traingle( double dim1, double dim2)
          : Shape ( dim1, dim2)
          {
              
          }

        
        double area(){
            return (0.5) * dim1 * dim2;
        }

 };  

  class Rectangle : public Shape{

        public:
         Rectangle( double dim1, double dim2)
          : Shape ( dim1, dim2)
          {

          }     
        double area(){
            return  dim1 * dim2;
        }

 };            


int main(){
        Shape *p;
        Traingle t(10,20);
        Rectangle r(10,20);

        p = &t;
        cout<< " Traingle area ="  << p->area()<< endl;

        p = &r;
        cout << " Rectangle Area = " << p-> area()<< endl;



    return 0;
}