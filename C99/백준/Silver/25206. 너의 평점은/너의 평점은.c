#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
        char subject[51], grade[3];
        double score = 0.0, replace_score = 0.0, sum = 0.0, muti = 0.0;
        int count = 0;

        while (count < 20)
        {
                scanf("%s %lf %s", subject, &score, grade);
                if (!strcmp(grade, "A+"))
                        replace_score = 4.5;
                else if (!strcmp(grade, "A0"))
                        replace_score = 4.0;
                else if (!strcmp(grade, "B+"))
                        replace_score = 3.5;
                else if (!strcmp(grade, "B0"))
                        replace_score = 3.0;
                else if (!strcmp(grade, "C+"))
                        replace_score = 2.5;
                else if (!strcmp(grade, "C0"))
                        replace_score = 2.0;
                else if (!strcmp(grade, "D+"))
                        replace_score = 1.5;
                else if (!strcmp(grade, "D0"))
                        replace_score = 1.0;
                else if (!strcmp(grade, "F"))
                        replace_score = 0.0;
                else if (!strcmp(grade, "P"))
                {
                        count++;
                        continue;
                }

                sum += score;
                muti += (score * replace_score);
                count++;
        }
        printf("%lf", muti / sum);
        return 0;
}