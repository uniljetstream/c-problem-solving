#include <stdbool.h>
#include <stdio.h>

int main()
{
    int quarter = 25, dime = 10, nickel = 5, penny = 1;
    int t, c;
    int qc = 0, qd = 0, qn = 0, qp = 0;
    // bool q = true, d = false, n = false, p = false;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &c);

        qc = c / quarter;
        c %= quarter;

        qd = c / dime;
        c %= dime;

        qn = c / nickel;
        c %= nickel;

        qp = c / penny;

        printf("%d %d %d %d\n", qc, qd, qn, qp);
    }
}