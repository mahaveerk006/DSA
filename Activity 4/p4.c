#include <stdio.h>

typedef struct student {
    int roll;
    char name[50];
    float sgpa;
} Student;

void create(Student st[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter roll, name, and SGPA: ");
        scanf("%d %s %f", &st[i].roll, st[i].name, &st[i].sgpa);
    }
}

void display(Student st[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Student Data is: %d %s %.2f\n",
               st[i].roll, st[i].name, st[i].sgpa);
    }
}

int main(void) {
    int n;
    Student st[100];
    printf("Enter the number of students: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid number of students.\n");
        return 1;
    }
    create(st, n);
    display(st, n);

    return 0;
}
