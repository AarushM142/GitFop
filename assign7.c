#include <stdio.h>
struct student
{
    char name[50];
    int roll_no;
    float m1,m2;
    double result;
};


void main()
{
    int n,i;
    printf("Enter the number of students");
     scanf("%d",&n);
     struct student s[n];

     for(i = 0; i<n; i++)
     {
        printf("Enter student name");
        scanf("%s", s[i].name);
        printf("Enter roll number");
        scanf("%d", &s[i].roll_no);
        printf("Enter marks out of 100 of 2 subjects");
        scanf("%f %f", &s[i].m1, &s[i].m2);

     }

     for (i=0; i <n;i++)
     {
        printf("\n");
        printf("Student name: %s\n", s[i].name);
        printf("Student ROll no: %d\n", s[i].roll_no);
        printf("Student marks for m1 and m2: %f %f \n", s[i].m1, s[i].m2);
        s[i].result = (s[i].m1 + s[i].m2)/2;
        printf("Student percentage is: %.2lf \n", s[i].result);
     }

}