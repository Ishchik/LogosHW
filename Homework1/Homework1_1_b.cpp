#include <iostream>

using namespace std;

int main(){

int first_Num, last_Num;

cout<<"Enter the first number"; cin>>first_Num;
cout<<"Enter the last number"; cin>>last_Num;

int arr [last_Num-first_Num];

if(first_Num < last_Num){
	for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
		arr[i] = first_Num + i;
		if(arr[i]%2 == 1)
			cout<<arr[i]<<endl;
		else
			continue;
	}
}
else {
	cout<<"Incorrect input. Learn the math :P"<<endl;
}



/*
if(first_Num<last_Num){
	for(first_Num; first_Num < last_Num; first_Num++){
		if(first_Num%2 == 1)
			cout<<first_Num<<endl;
		else
			continue;
}
else{
	cout<<"Incorrect input. Learn the math :P"<<endl;
}*/

return 0;
}
