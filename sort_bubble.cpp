#include<iostream>
using namespace std;

int main(){
	int a[50],i,j,t, n=5;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]<a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	
	for(i=0;i<n;i++){
		cout<<a[i];
	}
}


