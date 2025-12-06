//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>
#include <string.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    struct Student s1;
    struct Student *ptr;
    ptr = &s1;
    ptr->roll = 101;
    strcpy(ptr->name, "Alice");
    ptr->marks = 88.5;
    printf("Roll Number: %d\n", ptr->roll);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);
    return 0;
}