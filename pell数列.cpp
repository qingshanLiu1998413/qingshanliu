#include<iostream>
#include<cstdio>
using namespace std;
int Pell(int k){
	if(k==1|k==2) return k;
	else{
		int a1=1,a2=2,a3=0;
		for(int i=3;i<=k;i++){
			a3=(2*a2+a1)%32767;
			a1=a2;
			a2=a3;
		}	
		return a3;
	}
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++) 
		cout<<Pell(a[i])<<endl;
	return 0;	
} 

