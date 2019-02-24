#include <iostream>

using namespace std;

void *my_realloc(void *ptr, size_t old_size,
                 size_t new_size) { 
    char *new_ptr = new char[new_size];
    char *tmp_ptr = static_cast<char *>(ptr);

    for (int i = 0; i < old_size; i++, tmp_ptr++) {
        new_ptr[i] = *tmp_ptr;
    }

    return new_ptr;
}

int main() {
    unsigned int arr_size, new_arr_size;

    cout << "Enter array size";
    cin >> arr_size;
    int *input_arr = new int[arr_size];

    for (int i = 0; i < arr_size; i++) {
        cin >> input_arr[i];
    }
    cout << "How much do you want to expand this array ";
    cin >> new_arr_size;
    int *output_arr = static_cast<int *>(my_realloc(input_arr, sizeof(input_arr) * arr_size,
                                                    sizeof(input_arr) * new_arr_size));
    if (output_arr) {
        for (int i = 0; i < new_arr_size; i++) {
            cout << output_arr[i] << endl;
        }
        delete output_arr;
    }

    return 0;
}