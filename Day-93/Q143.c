//Find and print the student with the highest marks.
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
int main() {
    struct Student students[5];
    int i, maxIndex = 0;
    for(i = 0; i < 5; i++) {
        printf("Enter name, roll number, and marks for student %d: ", i+1);
        scanf("%s %d %f", students[i].name, &students[i].roll_no, &students[i].marks);
    }
    for(i = 1; i < 5; i++) {
        if(students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }
    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", students[maxIndex].name);
    printf("Roll Number: %d\n", students[maxIndex].roll_no);
    printf("Marks: %.2f\n", students[maxIndex].marks);
    return 0;
}