// **Inheritance** //

#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
float sqrt(float);

class Shape
{
	private:
		 char shapeName[20];
	public:
		void setShapeName(char shapeName[20])
		{
			strcpy(this->shapeName,shapeName);
		}
		char* getShapeName()
		{
			return shapeName;
		}
};

class Coordinate
{
	private:
		int x,y;
	public:
		Coordinate() { }
		Coordinate(int x, int y):x(x),y(y) { }
		float getDistance()
		{
			return sqrt(x*x + y*y);
		}
		int getX()
		{
			return x;
		}
		int getY()
		{
			return y;
		}
		float getDistance(Coordinate C)
		{
			return sqrt((C.x-x)*(C.x-x) +(C.y-y)*(C.y-y));
		}
		void showCoordinate()
		{
			cout<<"("<<x<<" , "<<y<<")"<<endl;
			cout<<"Thank you SachePatshah G"<<endl;
		}
};

class StraightLine:public Shape
{
	private:
		Coordinate c1,c2;
	public:
		StraightLine(Coordinate c1, Coordinate c2)
		{
			this->c1=c1;
			this->c2=c2;
		}

		void setData(Coordinate c1, Coordinate c2)
		{
			this->c1=c1;
			this->c2=c2;
		}

		void setLine(Coordinate c1,Coordinate c2)
		{
			this->c1=c1;
			this->c2=c2;
		}
	
		float getDistance(Coordinate c1, Coordinate c2)
		{
			float distance;
			distance = (c1.getX()-c2.getX())*(c1.getX()-c2.getX()) + (c1.getY()-c2.getY())*(c1.getY()-c2.getY());
			return distance;
		}	

		float getDistance(Coordinate c2)
		{
			float distance;
			distance=c1.getDistance(c2);
			return distance;
		}

		void showLine()
		{
			c1.showCoordinate();
			c2.showCoordinate();
		}
};

int main()
{
	Coordinate c1(1,2),c2(4,6);

	float distance;

	StraightLine l1(c1,c2);
	// l1.setData(c1,c2);
	l1.showLine();
	distance=l1.getDistance(c1,c2);
	cout<<"Distance :"<<distance<<endl;
	// l2.showLine();

	// distance=c1.getDistance();

	// cout<<"distance from origin:\n"<<setprecision(2)<<distance<<endl;
	// distance=c1.getDistance(c2);
	// cout<<"distance from origin:\n"<<setprecision(2)<<distance;
	cout<<endl;
	return 0;
}

class Circle
{
	private:
		int radius;
	public:
		void setRadius(int radius)
		{
			this->radius=radius;
		}
		int getRadius()
		{
			return radius;
		}
		float getArea()
		{
			return 3.14*radius*radius;
		}
};

class ThickCircle:public Circle
{
	private:
		int thickness;
	public:
		int getThickness()
		{
			return thickness;
		}
		void setThickness(int thickness)
		{
			this->thickness=thickness;
		}
		float getArea()
		{
			return 3.14*((getRadius()+thickness)*(getRadius()+thickness) - getRadius()*getRadius());
		}
};

class Person
{
	private:
		char name[40];
		int age;
	protected:
		void setName(char name[])
		{
			strcpy(this->name,name);
		}
		void setAge(int age)
		{
			this->age=age;
		}
		char* getName()
		{
			return name;
		}
		int getAge()
		{
			return age;
		}
};

class Employee:public Person
{
	private:
		float salary;
	public:
		void setEmployee(float salary,char name[],int age)
		{
			this->salary=salary;
			setName(name);
			setAge(age);
		}
		void showEmployee()
		{
			cout<<getName()<<" "<<getAge()<<" "<<salary;
			cout<<endl;
		}
};

float sqrt(float n)
{
	float i;
	for(i=0.01;i*i<n;i+=0.01);
	return i;
}

