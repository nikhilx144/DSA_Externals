#include <stdio.h>
struct Student
{
    char name[50];
    int number;
    float marks;
};
int main()
{
    struct Student s;
    printf("Student Details\n");
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.number);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("Student Details Are:\n");
    printf("Name: ");
    printf("%s\n",s.name);
    printf("Roll number: %d\n",s.number);
    printf("Marks: %.2f\n", s.marks);
}