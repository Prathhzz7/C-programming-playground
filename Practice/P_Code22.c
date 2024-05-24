// Write a program to modify a file containing an integer to double its value in C
  
//First I am taking the value from the file 
//Then I am applying the operation to double it
//Then I am sending that value back to file
#include <stdio.h>

int main() {
    FILE *file;
    int value;

    // Open the file in read mode
    file = fopen("integer.txt", "r");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    // Read the integer value from the file
    fscanf(file, "%d", &value);

    // Close the file
    fclose(file);

    // Double the value
    value *= 2;

    // Open the file in write mode
    file = fopen("integer.txt", "w");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    // Write the doubled value back to the file
    fprintf(file, "%d", value);

    // Close the file
    fclose(file);

    printf("Value doubled and written back to the file successfully.\n");

    return 0;
}
