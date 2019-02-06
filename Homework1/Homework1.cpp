#include <iostream>

using namespace std;

int main(int argc, char* argv[]){

int first_Num = atoi(argv[1]);
int last_Num = atoi(argv[2]);

int arr [last_Num-first_Num];

while(first_Num<last_Num; int i = 0){
	arr[first_Num+i] = first_Num + i;
	first_Num++;
	i++;
}

for(int i =0; i<sizeof(arr); i++){
	cout<<arr[i]<<endl;
}

/*for(first_Num; first_Num < last_Num; first_Num++){
	cout<<first_Num<<endl;
}*/

return 0;
}
