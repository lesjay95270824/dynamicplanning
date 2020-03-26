#include<iostream>
#include<vector>

using namespace std;

int climbStairs(int n)
{
 vector<int>mome(n+1,-1);
 mome[0]=1;
 mome[1]=1;
 for(int i=2;i<=n;i++)
 {
 mome[i]=mome[i-1]+mome[i-2];
 }
return mome[n];
}

int main()
{
 int n=10;
 int res=climbStairs(n);
return 0;
}
