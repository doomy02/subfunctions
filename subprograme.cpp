#include<iostream>
using namespace std;
int sumcif(int x) //pb897
{
    int s=0;
    while(x>0)
    {
        s+=x%10;
        x=/10;
    }
    return s;
}
int prin(int x) //pb14
{
    if(x<2) return 0;
    for(int i=2; i*i<=x; i++)
        if(x%i==0) return 0;
    return 1;
}
int cocat(int a,int b) //pb904
{
    int c=b,p=1;
    while(c>0)
    {
        c/=10;
        p*=10;
    }
    return a*p+b;
}
int nr_cif(int n, int k) //pb113
{
    int p=0;
    while(n)
    {
        if(n%10!=0)
            if(k%(n%10)==0) p++;
        n/=10;
    }
    return p;
}
int cmmnr(int x) //pb25
{
    int v[10];
    while(x)
    {
        n++;
        v[n]=x%10;
        x/=10;
    }
    for(i=1; i<n; i++)
        for(j=i+1; j<=n; j++)
            if(v[j]>v[i]) swap(v[j],v[i]);
    for(i=1; i<=n; i++)
        y=y*10+v[i];
    return y;
}
int cifrak(int n,int k) //VBiii16
{
    int p=0;
    while(n)
    {
        if(n%10==k) p++;
        n/=10;
    }
    return p;
}
int dist(int a) //VBiii52
{
    int p=0, i=0;
    while(a)
    {
        if(a%2==0) p++;
        else i++;
        a=/10;
    }
    if(p==0 || i==0) return 1;
    else return 0;
}
int Palindrom(int n) //VBiii71
{
    int c=n, y=0;
    while(c)
    {
        y=y*10+c%10;
        c/=10;
    }
    if(n==y) return 1;
    else return 0;
}
int cif(int a, int b) //VBiii3
{
    int c=a,k=0;
    while(c)
    {
        if(c%10==b) k++;
        c/=10;
    }
    return k;
}
int f(int a) //VBiii5
{
    int i;
    for(i=2;i<=a/2;i++)
        if(a%i==0) return i;
    return a;
}
int cmdiv(int x, int y) //VBiii48
{
    while(x!=y)
        if(x>y) x-=y;
        else y-=x;
    return x;
}
int p1(int n) //VBiii8
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int p2(int n) //VBiii8
{
    return n/=10;
}
int nr(int n, int c) //VBiii12
{
int sum_cifra_contrat(int a, int b) //pb1142
{
    int k=0,i,c;
    for(i=a; i<=b; i++)
    {
        c=i%9;
        if(c==0) c=9;
        if(c==a) k++;
    }
    return k;
}
int i_prim(int n) //VBiii21
{
    int p1=n, p2=n, prim=0, i;
    while(!prim)
    {
        prim=1;
        for(i=2;i<=p1/2;i++)
            if(p1%i==0)
            prim=0;
        if(!prim) p1--;
    }
    prim=0;
    while(!prim)
    {
        prim=1;
        for(i=2;i<=p2/2;i++)
            if(p2%i==0)
        prim=0;
        if(!prim) p2++;
    }
    return p2-p1;
}

    int k=0;
    while(n)
    {
        if(n&10==c) k++;
        n/=10;
    }
    return k;
}
