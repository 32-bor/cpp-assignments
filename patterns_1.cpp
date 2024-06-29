#include<iostream>
using namespace std;

void f1(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<=i)
				cout<<"* ";
			else
				cout<<" ";
		}
		cout<<endl;
	}
}

void f2(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j>=6-i)
				cout<<"* ";
			else
				cout<<"  ";
		}
		cout<<endl;
	}
}

void f3(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<=6-i)
				cout<<"* ";
			else
				cout<<"  ";
		}
		cout<<endl;
	}
}

void f4(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j>=i)
				cout<<"* ";
			else
				cout<<"  ";
		}
		cout<<endl;
	}
}

void f5(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		int k=1;
		for(j=1;j<=n;j++)
		{
			if(j<=i)
			{
				cout<<k<<" ";
				k++;
			}
			else
				cout<<"  ";
		}
		cout<<endl;
	}
}

void f6(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		int k=i;
		for(j=1;j<=n;j++)
		{
			if(j<=i)
			{
				cout<<k<<" ";
				k--;
			}
			else
				cout<<"  ";
		}
		cout<<endl;
	}
}

void f7(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		char ch='A';
		for(j=1;j<=n;j++)
		{
			if(j>=i)
			{
				cout<<ch<<" ";
				ch++;
			}
			else
				cout<<"  ";
		}
		cout<<endl;
	}
}

void f8(int n)
{
	int i,j,k=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<=i)
			{
				cout<<k<<" ";
				k++;
			}
			else
				cout<<" ";
		}
		cout<<endl;
	}
}

void f9(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		char ch='A';
		for(j=1;j<=n;j++)
		{
			if(j>=i)
				cout<<ch<<" ";
			else
				cout<<"  ";
			ch++;
		}
		cout<<endl;
	}
}

void f10(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j==1 || j==n ||i==1 || i==n)
				cout<<"* ";
			else 
				cout<<"  ";
		}
		cout<<endl;
	}
}

int main()
{
	int n;
	cout<<"Enter a no\n";
	cin>>n;
	f10(n);
	cout<<endl;
	return 0;
}