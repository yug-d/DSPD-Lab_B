/*Aim:- Write a C program (name it "filecopy. c")  that copies the contents of one file to a destination file. This program will read data from one file and copy them to another. The first input that the program will need is the names of the two files: input file ("input.txt") and output file ("output.txt"). Once the two file names have been obtained, 
the program must open the input file and create and open the output file.*/
#include <stdio.h>

int main() {
    FILE *fptr1, *fptr2;
    char ch;

    fptr1 = fopen("input.txt", "r");
    fptr2 = fopen("output.txt", "w");

    if (fptr1 == NULL || fptr2 == NULL) {
        printf("Error opening file.\n");
        return 0;
    }

    while ((ch = fgetc(fptr1)) != EOF) {
        fputc(ch, fptr2);
    }

    printf("File copied successfully.\n");

    fclose(fptr1);
    fclose(fptr2);

    return 0;
}
