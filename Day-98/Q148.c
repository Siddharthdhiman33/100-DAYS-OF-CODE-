//Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
int main() {
    struct Student s1, s2;
    printf("Enter details for Student 1 (name roll_no marks): ");
    scanf("%s %d %f", s1.name, &s1.roll_no, &s1.marks);
    printf("Enter details for Student 2 (name roll_no marks): ");
    scanf("%s %d %f", s2.name, &s2.roll_no, &s2.marks);
    if(strcmp(s1.name, s2.name) == 0 && s1.roll_no == s2.roll_no && s1.marks == s2.marks) {
        printf("\nBoth students are identical.\n");
    } else {
        printf("\nStudents are not identical.\n");
    }
    return 0;
}