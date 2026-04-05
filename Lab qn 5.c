#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    char name[50];
    int marks;
};

int main()
{
    struct student s[50], temp;
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("\nEnter Roll No, Name and Marks\n");

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(strcmp(s[i].name, s[j].name) > 0)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\n\nAlphabeticalorder\n");
    for(i = 0; i < n; i++)
    {
        printf("%d %s %d\n", s[i].roll, s[i].name, s[i].marks);
    }


    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(s[i].roll > s[j].roll)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\n\nSorted by Roll Number\n");
    for(i = 0; i < n; i++)
    {
        printf("%d %s %d\n", s[i].roll, s[i].name, s[i].marks);
    }

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(s[i].marks < s[j].marks)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\n\nRank List (Sorted by Marks)\n");
    for(i = 0; i < n; i++)
    {
        printf("%d %s %d\n", s[i].roll, s[i].name, s[i].marks);
    }

    return 0;
}
