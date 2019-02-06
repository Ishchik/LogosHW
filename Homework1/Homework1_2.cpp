#include <iostream>

using namespace std;

int main(){
/*
for(int i =1; i<=100; i++){
	if(i%3 == 0 && i%5 != 0){
		cout<<"Fizz"<<endl;
	}
	else if(i%5 == 0 && i%3 != 0 ){
		cout<<"Buzz"<<endl;
	}
	else if(i%3 == 0 && i%5 == 0)
		cout<<"FizzBuzz"<<endl;
	else
		cout<<i<<endl;
}
*/

for(int i =1; i<=100; i++){
	switch(i%3){
		case 0 :
			switch(i%5){
				case 0: 
					cout<<"FizzBuzz"<<endl;
					break;
				default:
					cout<<"Fizz"<<endl;
				}
			break;
				
		case 1:
			case 2:
				switch(i%5){
					case 0:
						cout<<"Buzz"<<endl;
						break;
					default:
						cout<<i<<endl;
				}
				break;
	}
}

return 0;
}
