#include <iostream>
#include <string>
using namespace std;

int main(){

    int numList[] = { 10, 15, 2, 7 };
    int k = 17;

    int arrayLength = sizeof(numList)/sizeof(numList[0]);

    for (int i = 0; i < arrayLength; i++) {
        for (int j = 1; j < arrayLength; j++) {
            if (numList[i] + numList[j] == k) {
                cout << "True with numbers " << numList[i] << " and " << numList[j] << endl;
                exit(0);
            }
        }
    }    
    return 0;
}