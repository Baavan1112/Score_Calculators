#include <stdio.h>
int max(int a, int b)
{
    return (a > b) ? a : b;
}
void main()
{
    int fscore,q1score,q2score,bonus,totalscore;
    printf("Enter final score, q1 score, q2 score and bonus marks:\n");
    scanf("%d %d %d %d",&fscore,&q1score,&q2score,&bonus);

    totalscore=max(0.6*fscore + 0.3*max(q1score, q2score), 0.45*fscore + 0.25*q1score + 0.3*q2score) + bonus;
    if (totalscore>100){totalscore=100;}
    printf("Total score: %d\n", totalscore);
}