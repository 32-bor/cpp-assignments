#include<iostream>
using namespace std;

void Q10(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		int k=64;
		for(j=1;j<=2*n-1;j++)
		{
			if((j>=1 && j<=n+1-i) || (j>=i+n-1))
			{
				if(j<=n+1-i)
				{
					k++;
					cout<<(char)k<<" ";
				}
				else
				{
					cout<<(char)k<<" ";
					k--;
				}
			}
			else
				cout<<"  ";
		}
		cout<<endl;
	}
}

void Q9(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		int k=0;
		for(j=1;j<=2*n-1;j++)
		{
			if((j>=1 && j<=n+1-i) || (j>=i+n-1))
			{
				if(j<=n+1-i)
				{
					k++;
					cout<<k<<" ";
				}
				else
				{
					cout<<k<<" ";
					k--;
				}
			}
			else
				cout<<"  ";
		}
		cout<<endl;
	}
}

void Q8(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*n-1;j++)
		{
			if((j>=1 && j<=n+1-i) || (j>=i+n-1))
				cout<<"* ";
			else
				cout<<"  ";
		}
		cout<<endl;
	}
}

void Q7(int n)
{
	int i,j,k,m;
	for(i=1;i<=n;i++)
	{
		k=1;
		m=1;
		for(j=1;j<=2*n-1;j++)
		{
			if(j>=n+1-i && j<=i+n-1)
			{
				if(k)
				{
					cout<<m<<" ";
					j<5?m++:m--;
				}
				else
				{
					cout<<"  ";
					if(j==5)m--;
				}
				k=1-k;
			}
			else
				cout<<"  ";
		}
		cout<<endl;
	}
}

void Q6(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		int ch=64;;
		for(j=1;j<=2*n-1;j++)
		{
			if(j>=i && j<=2*n-i)
			{
				if(j<=n)
				{
					ch++;
					cout<<(char)ch<<" ";
				}
				else
				{
					ch--;
					cout<<(char)ch<<" ";
				}
			}
			else
				cout<<"  ";
		}
		cout<<endl;
	}
}

void Q5(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		char ch='A';
		for(j=1;j<=2*n-1;j++)
		{
			if(j>=i && j<=2*n-i)
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

void Q4(int n)
{
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		int k=0;
		for(j=1;j<=2*n-1;j++)
		{
			if(j>=n+1-i && j<=i+n-1)
			{
				if(j<=n)
				{
					k++;
					cout<<k<<" ";
				}
				else
				{
					k--;
					cout<<k<<" ";
				}
			}
			else
				cout<<"  ";
		}
		cout<<endl;
	}
}

void Q3(int n)
{
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		k=1;
		for(j=1;j<=2*n-1;j++)
		{
			if(j>=n+1-i && j<=i+n-1)
			{
				if(k)
				{
					cout<<"* ";
					// k=1-k;
				}
				else
					cout<<"  ";
				k=1-k;
			}
			else
				cout<<"  ";
		}
		cout<<endl;
	}
}

void Q2(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*n-1;j++)
		{
			if(j>=i && j<=2*n-i)
				cout<<"* ";
			else
				cout<<"  ";
		}
		cout<<endl;
	}
}

void Q1(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*n-1;j++)
		{
			if(j>=n+1-i && j<=i+n-1)
				cout<<"* ";
			else
				cout<<"  ";
		}
		cout<<endl;
	}
}

/*
ABCDEEDCBA
 ABCDDCBA
  ABCCBA
   ABBA
    AA
*/

void Q11(int n)
{
	int i,j;
	char ch;
	for(i=1;i<=n;i++)
	{
		ch=64;
		for(j=1;j<=2*n;j++)
		{
			if(j<=2*n+1-(2*i-1))
			{
				if(j<=n+1-i)
				{
					ch++;
					cout<<ch<<" ";
				}
				else
				{
					cout<<ch<<" ";
					ch--;
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
	Q7(n);
	cout<<endl;
	return 0;
}