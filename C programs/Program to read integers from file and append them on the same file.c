#include <stdio.h>

int main() {
    FILE *filePointer;
    char filename[] = "test2.txt"; // Change this to your file name
    int num, sum = 0;

    // Open the file in read mode
    filePointer = fopen(filename, "r");

    // Check if file opened successfully
    if (filePointer == NULL) {
        printf("File '%s' failed to open.", filename);
        return -1;
    }

    // Read integers from the file and calculate the sum
    while (fscanf(filePointer, "%d", &num) == 1) {
        sum += num;
    }

    // Close the file
    fclose(filePointer);

    // Open the file in append mode to add the sum at the end
    filePointer = fopen(filename, "a");

    // Check if file opened successfully
    if (filePointer == NULL) {
        printf("File '%s' failed to open for appending.", filename);
        return -1;
    }

    // Append the sum at the end of the file
    fprintf(filePointer, "\nSum of integers: %d", sum);

    // Close the file
    fclose(filePointer);

    printf("Sum of integers appended to the file '%s'.\n", filename);
    return 0;
}

