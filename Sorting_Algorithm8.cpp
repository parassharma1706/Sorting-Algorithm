//**************************Bucket Sort**********************************
#include<bits/stdc++.h>
using namespace std;
void Bucket_sort(float *arr,int size){
	vector<vector<float>> bucket(size);
	for(int i=0;i<size;i++){
		int index=arr[i]*size;
		bucket[index].push_back(arr[i]);
	}
	
	for(int i=0;i<size;i++){
		if(!bucket.empty())
		sort(bucket[i].begin(),bucket[i].end());
	}
	int k=0;
	for(int i=0;i<size;i++)
		for(int j=0;j<bucket[i].size();j++)
	      arr[k++]=bucket[i][j];
	      
	      return ;
	  }
int main(){
	float arr[]={0.57,0.27,0.13,0.73,0.45,0.12,0.38,0.78};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	Bucket_sort(arr,size);
	
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
