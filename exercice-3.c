#include <stdio.h>

struct Student {
    int id;
    char name[50];
    int grades[5];
};

struct Student students[5] = {
    {1, "Alice", {85, 92, 78, 94, 88}},
    {2, "Bob", {76, 81, 72, 85, 79}},
    {3, "Charlie", {93, 89, 84, 91, 95}},
    {4, "David", {65, 70, 75, 60, 80}},
    {5, "Eve", {54, 68, 72, 77, 65}}
};

float calculateAverage(struct Student student) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += student.grades[i];
    }
    return sum / 5.0;
}

int main() {
    for (int i = 0; i < 5; i++) {
        float average = calculateAverage(students[i]);
        printf("Student: %s, Average Grade: %.2f\n", students[i].name, average);
    }
    return 0;
}
