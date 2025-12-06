//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>
int main() {
    FILE *fp;
    int n, roll, marks;
    char name[100];
    printf("Enter number of students: ");
    scanf("%d", &n);
    fp = fopen("students.txt", "w");
    if(fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    for(int i=0; i<n; i++) {
        printf("Enter name, roll number, and marks for student %d: ", i+1);
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }
    fclose(fp);
    fp = fopen("students.txt", "r");
    if(fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    printf("\nStudent Records:\n");
    while(fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %d\n", name, roll, marks);
    }
    fclose(fp);
    return 0;
}