#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int student_no;
    int grades[4];
    float avg_grade;
} Ogrenci;

int main() {
    FILE *f;
    char filename[] = "student.txt";
    Ogrenci students[100];
    int num_students = 0;
    float max_avg = 0.0;
    int i, j, k;

    f = fopen(filename, "r");

    while (!feof(f)) {
        fscanf(f, "%d", &students[num_students].student_no);
        printf("Ogrenci Numarasi: %d\n", students[num_students].student_no);
        for (i = 0; i < 4; i++) {
            fscanf(f, "%d", &students[num_students].grades[i]);
            printf("%d.Notu:%d ", i+1, students[num_students].grades[i]);
        }
        printf("\n");
        num_students++;
    }

    for (i = 0; i < num_students; i++) {
        int sum = 0;
        for (j = 0; j < 4; j++) {
            sum += students[i].grades[j];
        }
        students[i].avg_grade = (float)sum / 4;
    }

    printf("\nEn iyi 3 ogrenci:\n");
    for (i = 0; i < 3; i++) {
        max_avg = 0.0;
        for (j = 0; j < num_students; j++) {
            if (students[j].avg_grade > max_avg) {
                max_avg = students[j].avg_grade;
                k = j;
            }
        }
        printf("%d %.2f\n", students[k].student_no, students[k].avg_grade);
        students[k].avg_grade = 0.0;
    }

    fclose(f);

    return 0;
}
