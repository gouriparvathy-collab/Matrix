//finding largest mark(nested if),smallestmark(if elseif)and avg(conditional operator)
#include <stdio.h>
int m1, m2, m3;
void largestmark();
void smallestmark();
void averagemark();
int main()
{
    printf("Enter marks of three subjects (out of 100): ");
    scanf("%d %d %d", &m1, &m2, &m3);
    largestmark();
    smallestmark();
    averagemark();
    return 0;
}
void largestmark()
{
    if(m1 > m2)
    {
        if(m1 > m3)
            printf("\nSubject 1 has the largest mark");
        else
            printf("\nSubject 3 has the largest mark");
    }
    else
    {
        if(m2 > m3)
            printf("\nSubject 2 has the largest mark");
        else
            printf("\nSubject 3 has the largest mark");
    }
}
void smallestmark()
{
    if(m1 < m2 && m1 < m3)
        printf("\nSubject 1 has the smallest mark");
    else if(m2 < m1 && m2 < m3)
        printf("\nSubject 2 has the smallest mark");
    else
        printf("\nSubject 3 has the smallest mark");
}
void averagemark()
{
    int avg;
    int V;
    avg = (m1 + m2 + m3) / 3;
    printf("\nAverage = %d", avg);
    V = (avg >= 50) ? 1 : 0;
    printf("\nValue of V = %d", V);
}
