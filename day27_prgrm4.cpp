#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    int physics, chemistry, maths, english, computer;
    int total;
    float percentage;
    char grade;
};

int main()
{
    struct Student s;
    int pass = 1;

    printf("========== MARKSHEET GENERATION SYSTEM ==========\n");

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("\nEnter Marks (Out of 100)\n");

    printf("Physics   : ");
    scanf("%d", &s.physics);

    printf("Chemistry : ");
    scanf("%d", &s.chemistry);

    printf("Mathematics : ");
    scanf("%d", &s.maths);

    printf("English : ");
    scanf("%d", &s.english);

    printf("Computer : ");
    scanf("%d", &s.computer);

    s.total = s.physics + s.chemistry + s.maths + s.english + s.computer;
    s.percentage = s.total / 5.0;

    if (s.physics < 33 || s.chemistry < 33 || s.maths < 33 ||
        s.english < 33 || s.computer < 33)
    {
        pass = 0;
    }

    if (s.percentage >= 90)
        s.grade = 'A';
    else if (s.percentage >= 80)
        s.grade = 'B';
    else if (s.percentage >= 70)
        s.grade = 'C';
    else if (s.percentage >= 60)
        s.grade = 'D';
    else if (s.percentage >= 40)
        s.grade = 'E';
    else
        s.grade = 'F';

    printf("\n========================================");
    printf("\n           STUDENT MARKSHEET");
    printf("\n========================================");

    printf("\nRoll Number : %d", s.roll);
    printf("\nName        : %s", s.name);

    printf("\n\nSubject-wise Marks");
    printf("\n----------------------------------------");
    printf("\nPhysics      : %d", s.physics);
    printf("\nChemistry    : %d", s.chemistry);
    printf("\nMathematics  : %d", s.maths);
    printf("\nEnglish      : %d", s.english);
    printf("\nComputer     : %d", s.computer);

    printf("\n----------------------------------------");
    printf("\nTotal Marks  : %d / 500", s.total);
    printf("\nPercentage   : %.2f%%", s.percentage);
    printf("\nGrade        : %c", s.grade);

    if (pass)
        printf("\nResult       : PASS");
    else
        printf("\nResult       : FAIL");

    printf("\n========================================");

    return 0;
}