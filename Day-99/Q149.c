//Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    struct Student *ptr = (struct Student *)malloc(sizeof(struct Student));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    ptr->roll = 102;
    strcpy(ptr->name, "Bob");
    ptr->marks = 92.3;
    printf("Student Roll: %d\n", ptr->roll);
    printf("Student Name: %s\n", ptr->name);
    printf("Student Marks: %.2f\n", ptr->marks);
    free(ptr);
    return 0;
}