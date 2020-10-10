#include<iostream>
using namespace std;

int main(){
	int i,l,n,t,a[10],b[10]={0},p,g;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(i=0;i<n;i++){
		p=a[i]%10;
		b[p]=a[i];
	}
	for(i=0;i<10;i++){
		a[i]=0;
	}
	for(i=0;i<n;i++){
		g=b[i]/10;
		p=g%10;
		a[p]=b[i];
	}
	for(i=0;i<10;i++){
		b[i]=0;
	}
	for(i=0;i<n;i++){
		g=a[i]/100;
		p=g%10;
		b[p]=a[i];
	}
	for(i=0;i<n;i++){
		cout<<b[i];
	}
	cout<<endl;
	for(i=0;i<n;i++){
		cout<<b[i];
	}
	
	
}


