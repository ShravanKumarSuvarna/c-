#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main() {

// your code goes here

int test;
cout<<"Enter the number of test cases:"<<endl;
cin>>test;

while(test) {
cout<<"Enter the number of horses:"<<endl;
 int n;

cin>>n;

 vector<long long int> v(n);

 for(int i=0;i<n;i++) {
cout<<"Enter the skill of horse:"<<endl;
 		cin>>v[i]; 	}

 	sort(v.begin(),v.end());

 	long long int min=INT_MAX;

 for(long long int i=0;i<n-1;i++)  {

 		long long int val=v[i+1]-v[i];

 if(min>val){min=val;}

}
cout<<"Output"<<endl;
 	cout<<min<<endl;

 test--;

}

return 0;

}
