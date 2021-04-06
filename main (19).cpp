#include<iostream>
using namespace std;
int main()
{
int a[5],i,large,small; 


for(i=0;i<5;++i)
cin >> a[i];

large=small=a[0];

for(i=1;i<5;++i)
{
if(a[i]>large)
large=a[i];

if(a[i]<small)
small=a[i];
}

cout << small << endl;
cout << large << endl;

return 0;
}
