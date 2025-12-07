#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll;
    double cgpa;
}typedef student;

int main(void)
{
    FILE *fp;

    fp = fopen("student_info2.txt", "w");

    Student students[3];
    char name[50];
    int roll;
    double cgpa;

    for(int i = 0; i < 3; i++)
    {
        printf("Enter your student %d's name: \n", i+1);
        gets(name);
        printf("Enter roll: \n");
        scanf("%d", &roll);
        printf("Enter CGPA: \n");
        scanf("%lf", &cgpa);

        getchar();
        fprintf(fp,"%s %d %.2f\n", name, roll, cgpa);

        strcpy(students[i].name, name);
        students[i].roll = roll;
        students[i].cgpa = cgpa;

    }fclose(fp);
    return 0;
}
