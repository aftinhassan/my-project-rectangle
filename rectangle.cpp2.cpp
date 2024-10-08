#include<iostream>
using namespace std;

class Rectangle
{
	public:
		double length;
		double width;
		
		public:
			
			double area()
			{
				return length*width;
			}
			
			double perimeter()
			{
				return 2*(length + width);
		}

    void display()
    {
    	cout<<"the area of the Rectangle: "<< area()<<endl;
    	cout<<"the perimeter of the Rectangle:"<< perimeter()<<endl;
	}
};
int main()
{
	Rectangle rect1, rect2;
	rect1.length = 3;
	rect1.width = 6;
	
	rect2.length = 2;
	rect2.width = 4;
	
	cout<<" Rectangle 1: "<<endl;
	rect1.display();
	
	cout<<endl;
	
	cout<<" Rectangle 2: "<<endl;
	rect2.display();
	

