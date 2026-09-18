#include <stdio.h>
int max(int a, int b){
    return (a > b) ? a : b;
}
void main(){
    int fscore,q1score,q2score,bonus,tscore;
    printf("Enter final score, quiz 1 score, quiz 2 score, and bonus: ");
    scanf("%d %d %d %d", &fscore, &q1score, &q2score, &bonus);
    tscore= max(0.68*fscore + 0.3*max(q1score, q2score), 0.45*fscore + 0.25*q1score + 0.3*q2score)+bonus;
    if (tscore>100){
        tscore = 100;
    }
    printf("The final score is: %d\n", tscore);
}