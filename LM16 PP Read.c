#include <stdio.h>
#include <string.h>

int main(void)
{

    char name[50];
    int roll;
    double cgpa;

    FILE *fp;
    fp = fopen("student_info2.txt", "r");

    while(fscanf(fp,"%s %d %lf", name, &roll, %cgpa) != EOF)
    {
        printf("Name: %s, roll: %d, CGPA: %.2f\n", name, roll, cgpa);
    }
    fclose(fp);

    return 0;
}
