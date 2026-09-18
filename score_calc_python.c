#include <stdio.h>
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int min(int a, int b)
{
    return (a < b) ? a : b;
}
void main()
{
    int fscore,q1score,pe1score,pe2score,totalscore,bonus;
    printf("Enter final score,q1score, pe1 score, pe2 score and bonus:\n");
    scanf("%d %d %d %d %d",&fscore,&q1score,&pe1score,&pe2score,&bonus);

    totalscore=0.15*q1score+ 0.4*fscore+ 0.25*max(pe1score, pe2score) + 0.2*min(pe1score, pe2score)+bonus;
    if (totalscore>100){totalscore=100;}
    printf("Total score: %d\n", totalscore);
}