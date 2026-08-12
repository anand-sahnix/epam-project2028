#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  int n, b;
  cin>>n>>b;
  int arr[n];
  
  for(int i = 0; i < n; i++){
      cin>>arr[i];
  }
  
  sort(arr, arr+n);
  int count = 0;
  int j = 0;
  while(b >= arr[j]){
      b -= arr[j];
      count++;
      j++;
      
  }
  cout<<count;
  return 0;
}