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

    int count = 0;

    for(int i = 0; i < new_size; i++){          //Searching
        if(arr[i] == val) {
            cout << "searching index of element is " << i+1<<endl;
            count++;
            continue;
        }
        else if((i == (new_size - 1)) && arr[new_size-1] != val && count == 0){
            cout << "No matches found" << endl;
            break;
        }
    }

    if(count >= 1){
        cout << "Amount of searching values = " << count << endl;
    }
    return 0;
}


