#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int l;
int num;
int ind;
cin>>l;
cin>>num;
int a[l];
for(int i=0;i<l;i++)
{
cin>>a[i];
}

for(int j=0;j<l;j++)
{
if(a[j]==num)
{
ind=j;
break;
}
}
cout<<"present"<<ind+1<<endl;
}
return 0;
}
