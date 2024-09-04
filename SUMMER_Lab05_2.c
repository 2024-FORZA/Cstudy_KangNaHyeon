//10825
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[101];
    int korean;
    int english;
    int math;
} Student;

int compare(const void* a, const void* b) {
    Student* studentA = (Student*)a;
    Student* studentB = (Student*)b;

    if (studentA->korean != studentB->korean) {
        return studentB->korean - studentA->korean;
    }
    if (studentA->english != studentB->english) {
        return studentA->english - studentB->english;
    }
    if (studentA->math != studentB->math) {
        return studentB->math - studentA->math;
    }
    return strcmp(studentA->name, studentB->name);
}

int main() {
    int n;
    scanf("%d", &n);

    Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d", students[i].name, &students[i].korean, &students[i].english, &students[i].math);
    }

    qsort(students, n, sizeof(Student), compare);

    for (int i = 0; i < n; i++) {
        printf("%s\n", students[i].name);
    }

    return 0;
}
