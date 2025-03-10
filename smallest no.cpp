#include <iostream>
using namespace std;
int main() {
    int numbers[] = {120, 45, 67, 89, 34, 23, 90, 11};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int minNumber = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] < minNumber) {
            minNumber = numbers[i];
        }
    }
 cout<< "The smallest number in the array is: " << minNumber <<endl;

    return 0;
}
