#include <iostream>

using namespace std;

int main() {

    int new_size;
    int val;

    cout<<"Enter size of array: "; cin>>new_size;

    int *arr = new int [new_size];

    cout<<"Enter values"<< endl;

    for(int i = 0; i<new_size; i++){
        cout<< i+1 << " value = "; cin >> arr[i];
    }

    for (int i = 0 ; i < ( new_size - 1 ); i++)
    {
        for (int j = 0 ; j < new_size - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int tmp = arr[j];                               //Bubble sort
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    cout<<"Sorting result"<<endl;
    for(int i = 0; i<new_size; i++){
        cout  << arr[i] << endl;
    }

    cout<<"Enter the searching value: "; cin>>val;

    int min = 0;                 //min index
    int max = new_size -1;      //max index
    int mid;                   //average value
    bool check = true;
    while(check == true){
        mid = (min + max) / 2;
        if (arr[mid] == val && check == true){
            cout << "Searching value is at index " << mid + 1 << endl;
            break;
        }
        else if (val > arr[mid]){
            min = mid;
        }
        else if (val < arr[mid]){
            max = mid;
        }
        else{
            check = false;
            break;
        }
    }
    if (check == false){
        cout << "No matches found" << endl;
    }
    return 0;
}


