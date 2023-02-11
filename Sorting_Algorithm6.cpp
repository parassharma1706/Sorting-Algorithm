//**********************Count Sort***********************************
#include<bits/stdc++.h>
using namespace std;
void Count_sort(int *arr,int n){
	int max=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>max)
		max=arr[i];
	}
	vector<int> freq(max+1,0);
	for(int i=0;i<n;i++){
		freq[arr[i]]++;
	}
	
	for(int i=1;i<=max;i++){
		freq[i]+=freq[i-1];
	}
	vector<int> ans(n);
	for(int i=n-1;i>=0;i--){
		ans[--freq[arr[i]]]=arr[i];
	}
	for(int i=0;i<n;i++){
		arr[i]=ans[i];
	}
	return ;
}
int main(){
	int arr[]={5,3,2,3,5,4,7,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	Count_sort(arr,n);
	
	for(auto ele:arr)
	cout<<ele<<" ";
	
	return 0;
}
