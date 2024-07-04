#include<iostream>
using namespace std;

void reverseNo(int n)
{
	int k=0;
	for(int i=0;n>0;i++)
	{
		k=k*10 + n%10;
		n=n/10;
	}
	cout<<k<<" ";
	cout<<endl;
}

void printPrimes(int n)
{
	int i,j;
	for(i=2;i<=n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		if(j==i)
			cout<<j<<" ";
	}
}

void isPrime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			break;
	}
	if(i==n)
		cout<<"prime\n";
	else
		cout<<"not prime\n";
}

void f1()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		int k=1,m=0;
		for(j=1;j<=5;j++)
		{
			if(j<=i)
			{
				if(i%2==0)
				{
					cout<<m<<" ";
					m=1-m;
				}
				else
				{
					cout<<k<<" ";
					k=1-k;
				}
			}
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
	reverseNo(n);
	// printf("Sukhdeep\n");
	cout<<endl;
	return 0;
}