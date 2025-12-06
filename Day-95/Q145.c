//Return a structure containing top student's details from a function.
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
struct Student getTopStudent(struct Student students[], int n) {
    int maxIndex = 0;
    for(int i = 1; i < n; i++) {
        if(students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }
    return students[maxIndex];
}
int main() {
    struct Student students[5];
    struct Student top;
    for(int i = 0; i < 5; i++) {
        scanf("%s %d %f", students[i].name, &students[i].roll_no, &students[i].marks);
    }
    top = getTopStudent(students, 5);
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);
    return 0;
}