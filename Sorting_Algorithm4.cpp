/*************************Merge Sort Algorithm***********************************/
#include<bits/stdc++.h>
using namespace std;
//function for merging two sorted array in a sorted order
void merge(int *arr,int l,int mid,int r){
	int n1=mid+1-l;
	int n2=r-mid;
	int a[n1];
	int b[n2];
	
	for(int i=0;i<n1;i++){
		a[i]=arr[i+l];
	}
	for(int i=0;i<n2;i++){
		b[i]=arr[mid+1+i];
	}
	int i=0;
	int j=0;
	int k=l;
	while(i<n1&&j<n2){
		if(a[i]>b[j]){
			arr[k++]=b[j++];
		}
		else{
			arr[k++]=a[i++];
		}
	}
	while(i<n1){
		arr[k++]=a[i++];
	}
	while(j<n2){
		arr[k++]=b[j++];
	}
	return ;
}

void Merge_sort(int *arr,int l,int r){
	if(l>=r) return ;
	
	int mid=(l+r)/2;
	Merge_sort(arr,l,mid);
	Merge_sort(arr,mid+1,r);
	
	merge(arr,l,mid,r);
	
	return ;
}
int main(){
	int arr[]={23,12,34,11,1,45,0,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	Merge_sort(arr,0,n-1);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	
	return 0;
}
