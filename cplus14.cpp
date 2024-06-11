// Operator overloading and friend operator //

#include<iostream>
using namespace std;

class Array
{
	private:
		int *p;
		int size;
	public:
		Array()
		{ }
		Array(int s)
		{
			size=s;
			p=new int[size];
		}

		friend ostream& operator<<(ostream&,Array);
		friend istream& operator>>(istream&,Array&);
		friend Array operator+(Array,Array);

		void operator=(Array A)
		{	
			int i;
			Array T;
			T.p=p;
			for(i=0;i<A.size;i++)
			{
				p[i]=A.p[i];
			}
			for(i=A.size;i<size;i++)
			{
				p[i]=T.p[i];
			}
		}

		void setData()
		{
			int i;
			cout<<"Enter "<<size<<" values"<<endl;
			for(i=0;i<size;i++)
			{
				cin>>p[i];
			}
		}
		void showData()
		{
			int i;
			for(i=0;i<size;i++)
			{
				cout<<p[i]<<" ";
			}
			cout<<endl;
		}
};

Array operator+(Array X,Array Y)
{
	Array A(8);
	int i;
	for(i=0;i<8;i++)
	{
		if(i<4)
			A.p[i]=X.p[i];
		else
			A.p[i]=Y.p[i-4];
	}
	return A;
}	

int main()
{
	Array A1(4),A2(4),A3(8),A4;
	A1.setData();
	A2.setData();
	A3=A1+A2;
	cout<<"This time is different.."<<endl;	
	A3.showData();
	cout<<endl;
	return 0;
}


class Time
{
	private:
		int h,m,s;
	public:
		Time()
		{ }
		Time(int h,int m,int s):h(h),m(m),s(s)
		{ }
		void showData()
		{
			cout<<h<<" "<<m<<" "<<s<<endl;
		}
		// Time operator=()
		// {
		// 	Time temp;
		// 	temp.h=h;
		// 	temp.m=m;
		// 	temp.s=s;
		// 	return temp;
		// }
		void operator=(Time X)
		{
			h=X.h;
			m=X.m;
			s=X.s;
		}
		friend ostream& operator<<(ostream&,Time);
		friend istream& operator>>(istream&, Time&);
};

ostream& operator<<(ostream& dout,Time t)
{
	dout<<"H:"<<t.h<<" M:"<<t.m<<" S:"<<t.s<<endl;
	cout<<"oho oho hohoo.. "<<endl;
	return dout;
}
istream& operator>>(istream& din,Time &t)
{
	cout<<"Enter values for h, m, s";
	din>>t.h>>t.m>>t.s;
	return din;
}

/*
int main()
{
	Time t1(1,20,43),t2(4,54,36),t3,t4;
	// cout<<t1;
	t3=t1;
	// cout<<endl;
	cout<<t3;
	return 0;
}
*/

class Complex
{
	private:
		int a,b;
	public:
		Complex()
		{ }
		Complex(int a,int b):a(a),b(b)
		{ }
		void showData()
		{
			cout<<"\na:"<<a<<" b:"<<b<<endl;
		}
		friend Complex operator+(Complex,Complex);
		friend Complex operator-(Complex,Complex);
		friend Complex operator*(Complex,Complex);
		friend ostream& operator<<(ostream&,Complex);
		friend istream& operator>>(istream&,Complex&);
};

Complex operator+(Complex C1,Complex C2)
{
	Complex temp;
	temp.a=C1.a+C2.a;
	temp.b=C1.b+C2.b;
	return temp;
}
Complex operator-(Complex C1,Complex C2)
{
	Complex temp;
	temp.a=C1.a-C2.a;
	temp.b=C1.b-C2.b;
	return temp;
}
Complex operator*(Complex C1,Complex C2)
{
	Complex temp;
	temp.a=C1.a*C2.a-C1.b*C2.b;
	temp.b=C1.a*C2.b+C1.b*C2.b;
	return temp;
}
ostream& operator<<(ostream& dout,Complex C)
{
	cout<<"\na:"<<C.a<<" b"<<C.b<<endl;
	cout<<"Hey there.. I am <<"<<endl;
	return dout;
}
istream& operator>>(istream& din, Complex &C)
{
	cout<<"Enter values for real and imaginary parts of Complex no";
	cout<<endl;
	din>>C.a>>C.b;
	return din;
}

/*
int main()
{
	Complex c1(1,2),c2(3,4),c3,c4;
	// c1.showData();
	// cout<<c1;
	cin>>c3;
	cout<<c3;
	// c3.showData();
	// cout<<c4;
	// c3.showData();
	return 0;
}
*/

// ostream& operator<<(ostream& dout,Array X)
// {
// 	int i;
// 	for(i=0;i<X.size;i++)
// 	{
// 		cout<<X.p[i]<<" ";
// 	}
// 	return dout;
// }
// istream& operator>>(istream& din, Array&X)
// {
// 	int i;
// 	for(i=0;i<X.size;i++)
// 	{
// 		cin>>X.p[i];
// 	}
// 	return din;
// }


