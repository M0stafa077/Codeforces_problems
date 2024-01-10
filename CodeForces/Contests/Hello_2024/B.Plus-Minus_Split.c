/**
 * B.Plus-Minus_Split
 * Jan 6th 2024
 * @author: Mostafa Asaad
*/

#define  DONE    1
#if     !DONE
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void solve()
{
    int n;
    scanf("%d", &n);

    char *s = (char *) malloc(5001 * sizeof(char));
    scanf("%s", s);

    /* Find frequency of positive and negative */
    int pos = 0, neg = 0;
    for(int i = 0; i < n; ++i)
        if('+' == s[i])
            ++pos;
        else
            ++neg;

    if(neg == pos)
        printf("%d\n", 0);
    else
        printf("%d\n", abs(pos - neg));

    free(s);
}

int main()
{
    int test_cases;
    scanf("%d", &test_cases);

    while(test_cases--)
        solve();

}
#endif