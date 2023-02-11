//********************************Radix Sort**************************************
#include<bits/stdc++.h>
using namespace std;
void Countsort(int *arr,int n,int position){
	vector<int> freq(10,0);
	for(int i=0;i<n;i++){
		freq[(arr[i]/position)%10]++;
	}
	for(int i=1;i<10;i++){
		freq[i]+=freq[i-1];
	}
	
	vector<int> ans(n);
	for(int i=n-1;i>=0;i--){
		ans[--freq[(arr[i]/position)%10]]=arr[i];
	}
	
	for(int i=0;i<n;i++){
		arr[i]=ans[i];
	}
	return ;
}
void Radix_sort(int *arr,int n){
	int max=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>max)
		max=arr[i];
	}
	for(int position=1;(max/position)>0;position*=10)
	Countsort(arr,n,position);

return ;
}
int main(){
	int arr[]={154,34,23,56,78,13,78};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	Radix_sort(arr,n);
	
	for(auto ele:arr)
	cout<<ele<<" ";
	
	
	return 0;
}
