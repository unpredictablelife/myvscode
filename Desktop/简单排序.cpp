#include<iostream>
using namespace std;
int main(){
	int a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n==1) {
		cout<<a[0];
		return 0;
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]>a[j]){
				int temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<a[0];
	for(int i=1;i<n;i++){
		cout<<" "<<a[i];
	}
	return 0;
}
