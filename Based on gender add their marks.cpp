//in maBased on gender add their marks
#include <iostream>
using namespace std;

int main(){

int n,  sum=0;
char gender;
cin>>n; 
int a[n];
for(int i=0;i<n;i++){ cin >> a[i];}
 cin>>gender;
 if(gender=='b'){
for (int i=0;i<n;i=i+2){ 
sum+=a[i]; }
cout<<sum<<endl;
}


else{
  for (int i=1;i<n;i=i+2){ 
sum+=a[i]; }
cout<<sum<<endl;
}
}
