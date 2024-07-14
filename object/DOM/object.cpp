#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int arr[])
{
  vector<int> ans;
  int min1, max1;
  for (int i = 0; i < sizeof(arr); i++)
  {
    min1=min(min1,arr[i]);
    max1=max(max1,arr[i]);
  }
  ans.push_back(min1);
  ans.push_back(max1);
  return ans;
}

int main()
{
  vector<int> arr = {4, 5, -8, 6, 7};

}