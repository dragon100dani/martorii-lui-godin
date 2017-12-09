#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;
ofstream f("cuvinte.txt");
char x[100],voc[]="aeiou";
int n;
void init(int k)
{
    x[k]='a'-1;
}
int exista(int k)
{
    if(x[k]<'z')
    return 1;
    else
    return 0;
}
int cont(int k)
{
    int ok=1;
    if(k>1)
    if(strchr(voc,x[k])!=NULL && strchr(voc,x[k-1])!=NULL)
    ok=0;
    if(k>1)
    if(strchr(voc,x[k])==NULL && strchr(voc,x[k-1])==NULL)
    ok=0;
    return ok;
}
int solutie(int k)
{
    if(k==n)
    return 1;
    else
    return 0;
}
void tipar(int k)
{
    int i;
    for(i=1;i<=k;i++)
    f<<x[i];
    f<<endl;
}
void bkt()
{
    int(k);
    while(k>0)
    if(exista(k)==1)
    {
        x[k]=x[k]+1;
        if(cont(k)==1)
        if(solutie(k)==1)
        tipar(k);
        else
        {
            k++;
            init(k);
        }
    }
    else
    k--;
}
int main()
{
    cout<<"n=";
    cin>>n;
    bkt();
    f.close();
    return 0;
}
