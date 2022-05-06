// Exercises: Arrays
// Exercise 2

#include <iostream>
using namespace std;

int arr[6]={1,2,3,4,5,6};

void func1(int index, int arr[6], int num){
	for(int i=6; i>index;i=i-1){
	 arr[i]=arr[i-1];
	 }

	arr[index]=num;

	for(int i=0; i<=6; i++){
	 cout << arr[i]<<"\n";
	 }
	return;
}

int main(){
	int num;int index;
	cout<< "Enter a number:";
	cin>>num;
	cout<<"Enter an index:";
	cin>>index;
    func1(index,arr,num);
	
	return 0;
}
	




