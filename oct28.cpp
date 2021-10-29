//Given an array of integers,
//find the first missing positive integer in linear time and constant space.
//In other words, find the lowest positive integer that does not exist in the array.
//The array can contain duplicates and negative numbers as well.

//For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.

//You can modify the input array in-place.

#include <iostream>
using namespace std;

int main() {
    int inputArray[] = { 3, 4, -1, 1, 1, 10, -23 };
    int arrayLength = sizeof(inputArray)/sizeof(inputArray[0]);
    int lowestPossibleNumber = INT_MAX;

    for (int i = 0; i < arrayLength; i++) {
        if (inputArray[i] < 0) {
            continue;
        }
        if (inputArray[i] < lowestPossibleNumber) {
            lowestPossibleNumber = inputArray[i] + 1;
        }
    }

    cout << "The lowest possible integer that does not exist in the array is = " << lowestPossibleNumber;
}