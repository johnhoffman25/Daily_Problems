//Given an array of integers,
//return a new array such that each element at index i of the new array
//is the product of all the numbers in the original array except the one at i.

//For example, if our input was [1, 2, 3, 4, 5],
//the expected output would be [120, 60, 40, 30, 24].
//If our input was [3, 2, 1], the expected output would be [2, 3, 6].

#include <iostream>
using namespace std;

int main(){
    int inputArray[] = { 1, 2, 3, 4, 5 };
    int arrayLength = sizeof(inputArray)/sizeof(inputArray[0]);

    int outputArray[arrayLength];

    for (int i = 0; i < arrayLength; i++) {
        int sum = 1;
        for (int j = 0; j < arrayLength; j++) {
            if (i != j) {
                sum = sum * inputArray[j];
            }
        }
        outputArray[i] = sum;
    }

    for (int i = 0; i < arrayLength; i++) {
        cout << outputArray[i] << endl;
    }
}