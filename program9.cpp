#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main() {

// your code goes here

int t;
cout<<"Enter number of test cases:"<<endl;
cin>>t;

while(t--){

 int n,current=0;
cout<<"Enter number of students:"<<endl;
 cin>>n;

 int a[n];

 for(int i=0;i<n;i++){
cout<<"Enter score"<<endl;
 cin>>a[i];

 }

 sort(a,a+n);

 for(int i=n/2;i>=0;i--){

 if(a[i] != a[n/2]){

 current=i+1;

 break;

 }

 }
cout<<"Output:"<<endl;
 cout<<n-current<<endl;

}

return 0;

}
