#include<iostream>
#include<string.h>
using namespace std;
int main()
{
          char s[255],x[255];
          int i,j;
          cin.get(s,255);
          for(i=0;i<=strlen(s);i++)
          for(j=97;j<=122;j++)
          if(s[i]==j)
          cout<<s[i]<<" ";

}
