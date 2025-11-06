/*
Name:Ian kariuki
Reg No:CT100/G/26174/25
Description:program to define a structure of student information
*/

#include <stdio.h>
#include <stdlib.h>

// Define structure to hold student information
struct Student {
    char name[50];
    char reg/*
Name:John Gathuna
Reg No:CT100/G/22448/24
Description:program of c files of a library
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char bookTitle[100];

    // Open the file in append mode so that existing records are not deleted
    fp = fopen("borrowed_books.txt", "a");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the title of the borrowed book: ");
    fgets(bookTitle, sizeof(bookTitle), stdin);

    // Write the b/*
Name:John Gathuna
Reg No:CT100/G/22448/24
Description:program of c files of a library
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char bookTitle[100];

    // Open the file in append mode so that existing records are not deleted
    fp = fopen("borrowed_books.txt", "a");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the title of the borrowed book: ");
    fgets(bookTitle, sizeof(bookTitle), stdin);

    // Write the book title to the file
    fprintf(fp, "%s", bookTitle);

    // Close the file
    fclose(fp);

    printf("Book title successfully stored in borrowed_books.txt\n");

    return 0;
}
ook title to the file
    fprintf(fp, "%s", bookTitle);

    // Close the file
    fclose(fp);

    printf("Book title successfully stored in borrowed_books.txt\n");

    return 0;
}
No[20];
    float totalMarks;
};

int main() {
    FILE *fp;
    struct Student s;

    // Open the binary file for reading
    fp = fopen("results.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    printf("Student Results:\n");
    printf("------------------------------\n");

    // Read and display each record
    while (fread(&s, sizeof(struct Student), 1, fp) == 1) {
        printf("Name: %s\n", s.name);
        printf("Total Marks: %.2f\n\n", s.totalMarks);
    }

    fclose(fp);
    return 0;
}