#include <iostream>

int main() {
    // Define the array
    int numbers[] = {120, 45, 67, 89, 34, 23, 90, 11};
    int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate the size of the array

    // Assume the first element is the smallest
    int minNumber = numbers[0];

    // Loop through the array to find the smallest number
    for (int i = 1; i < size; i++) {
        if (numbers[i] < minNumber) {
            minNumber = numbers[i]; // Update the minimum value
        }
    }

    // Display the smallest number
    std::cout << "The smallest number in the array is: " << minNumber << std::endl;

    return 0;
}
