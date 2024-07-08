#include<iostream>
using namespace std;
int sumDigits(int);
int isPrime(int);
int sumPrimeFactors(int);
void printPrimeFactors(int);
int isBoston(int);

int isBoston(int n)
{
    if(sumDigits(n)==sumPrimeFactors(n))
        return 1;
    else
        return 0;
}

int main()
{
    int n,m;
    cout<<"Enter two nos\n";
    cin>>n>>m;
    cout<<n/m<<endl;
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