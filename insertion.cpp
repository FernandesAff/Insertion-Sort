#include <iostream>

using namespace std;

void insertionSort(int* vector, int size);

int main() {
    //input vector size
    int size = 6;
    //input vector
    int vector[size] = {0,3,2,9,4,7};

    cout << "Vector: ";
    for(int i = 0; i < 6; i++){
        cout << vector[i];
    }
    cout << endl;

    insertionSort(vector, size);

    cout << "Sorted Vector: ";
    for(int i = 0; i < 6; i++){
        cout << vector[i];
    }
    cout << endl;

    return 0;
}

//Insertion Sort implementation
void insertionSort(int* vector, int size){
    int key;
    
    for(int i = 2; i < size; i++){
        int j = i - 1;
        
        key = vector[i];

        //Insert vector[i] into the sorted sequence vector[1 ... i-1]
        while(j > 0 && vector[j] > key){
            vector[j+1] = vector[j];
            j = j-1;
        }
        vector[j+1] = key;
    }
}