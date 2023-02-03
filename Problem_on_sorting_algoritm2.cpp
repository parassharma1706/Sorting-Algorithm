/*********Given an array of names of fruits;you are supposed to sort it in lexicographical order 
using the selection sort.
Input:["papaya","lime","watermelon","apple","mango","kiwi"]
Output:["apple","kiwi","lime","mango","papaya","watermelon"] ****************************/
#include<bits/stdc++.h>
using namespace std;
void sorting(char fruits[][60],int n){
	
	for(int i=0;i<n-1;i++){
		int mini=i;
		for(int j=i+1;j<n;j++){
			if(strcmp(fruits[mini],fruits[j])>0){
			mini=j;
			}
		}
		swap(fruits[mini],fruits[i]);
	}
	
}
int main(){
	char fruit[][60]={"papaya","lime","watermelon","apple","mango","kiwi"};
	int n=sizeof(fruit)/sizeof(fruit[0]);
	
	sorting(fruit,n);
	
	for(int i=0;i<n;i++){
		cout<<fruit[i]<<endl;
	}
	
	return 0;
}
