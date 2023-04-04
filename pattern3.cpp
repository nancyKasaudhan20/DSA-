// pyramid
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<2*n-1;j++){
        if(j==n-1||(i+j>=n-1 && j-i<=n-1)){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    } cout<<endl;
  }

    return 0;
}