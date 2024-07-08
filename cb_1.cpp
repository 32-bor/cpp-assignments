#include<iostream>
using namespace std;
int sumDigits(int);
int isPrime(int);
int sumPrimeFactors(int);
void printPrimeFactors(int);
int isBoston(int);
int farenToCelcius(int);
void fTOc();
void hollowPattern(int);


int isBoston(int n)
{
    if(sumDigits(n)==sumPrimeFactors(n))
        return 1;
    else
        return 0;
}

void printPrimeFactors(int n)
{
    int i=2;
    while(n>1)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            n=n/i;
        }
        i++;
    }
    cout<<endl;
}

int sumPrimeFactors(int n)
{
    int sumPrime=0;
    int i=2;
    int k=n;
    while(n>1)
    {
        if(i==k)
        {
            break;
        }   
        while(n%i==0 && isPrime(i))
        {
            sumPrime+=i;
            n/=i;
        }
        i++;
    }
    return sumDigits(sumPrime);
}

int sumDigits(int n)
{
    int i,j,sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    while(sum>=10)
       sum=sumDigits(sum);
    return sum;
}

int isPrime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(i==n)
        return 1;
    else
        return 0;
}

void fTOc()
{
    int i;
    int min,max,step;
    cin>>min>>max>>step;

    for(i=min;i<=max;)
    {
        cout<<i<<" "<<farenToCelcius(i)<<endl;
        i=i+step;
    }
}

int farenToCelcius(int f)
{
    float c;
    c=(5.0/9)*(f-32);
    return c;
}

void hollowPattern(int n)
{
    int i,j;
    int k=(n+1)/2;
    int m;

    for(i=1;i<=n;i++)
    {
        m=n+1-i;
        for(j=1;j<=n;j++)
        {
            if(i<=k)
            {
                if((j>=1 && j<=k+1-i) ||(j>=k-1+i && j<=n))
                    cout<<"* ";
                else
                    cout<<"  ";
            }
            else if(i>=k)
            {
                if((j>=1 && j<=i-k+1) || (j>=m+k-1&& j<=n))
                    cout<<"* ";
                else
                    cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void doubleSidedArrow(int n)
{
    int i,j;
    int k=(n+1)/2;
    int m,l,x,y,z,h;
    int t,r;
    for(i=1;i<=n;i++)
    {
        t=i;
        r=(n+1)%i;
        for(j=1;j<=2*n-1;j++)
        {
            if(i<=k)
            {
                l=k+1-i;
                x=i+(k-1);
                if((j>=2*l-1 && j<=n+1-i ) || (j>=n+i-1 && j<=2*x-1))
                {
                    if(j==n)
                        cout<<t<<" ";
                    else if(j<n)
                    {
                        cout<<t<<" ";
                        t--;
                    }
                    else
                    {
                        t++;
                        cout<<t<<" ";
                    }
                }
                else
                    cout<<"  ";
            }
            else if(i>=k)
            {
                y=i-(k-1);
                z=n-i;
                h=n+k-i;
                if((j>=2*y-1 && j<=i) || (j>=n+z && j<=2*h-1))
                {
                    if(i>=k+1)
                    {
                        if(j==n)
                            cout<<r<<" ";
                        else if(j<n)
                        {
                            cout<<r<<" ";
                            r--;
                        }
                        else
                        {
                            r++;
                            cout<<r<<" ";
                        }
                    }
                }
                else
                    cout<<"  ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int n,m;
    cout<<"Enter two nos\n";
    cin>>n>>m;
    cout<<n/m<<endl;
    return 0;
}