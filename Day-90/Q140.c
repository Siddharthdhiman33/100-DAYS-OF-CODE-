//Define a struct with enum Gender and print person's gender.
#include <stdio.h>
enum Gender { MALE, FEMALE, OTHER };
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};
int main() {
    struct Person p1 = {"Rahul", 25, MALE};
    struct Person p2 = {"Priya", 22, FEMALE};
    struct Person p3 = {"Alex", 30, OTHER};
    struct Person people[] = {p1, p2, p3};
    int n = sizeof(people) / sizeof(people[0]);
    for(int i = 0; i < n; i++) {
        printf("Name: %s, Age: %d, Gender: ", people[i].name, people[i].age);
        switch(people[i].gender) {
            case MALE:   printf("Male\n"); break;
            case FEMALE: printf("Female\n"); break;
            case OTHER:  printf("Other\n"); break;
        }
    }
    return 0;
}