#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");  // Open a file for writing
    if (file) {
        fprintf(file, "Hello, %s! Your score is %d.\n", "Vishniew", 13);  // Write formatted output to file
        fclose(file);  // Close the file
    } else {
        printf("Error opening the file.\n");
    }
    return 0;
}

