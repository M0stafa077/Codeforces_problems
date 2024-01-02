/**
 * GoodBye 2023 Contest
 * A-2023
 * Jan 1st 2024
 * @author : Mostafa Asaad
*/
#include <stdio.h>

int main(){
    int test_cases;
    scanf("%d", &test_cases);

    while (test_cases--)
    {
        int n, k;
        scanf("%d %d", &n, &k);

        long long reminder = 1;
        while (n--)
        {
            int temp;
            scanf("%d", &temp);
            reminder *= temp;
        }
        
        if (2023 % reminder == 0){
            
            if(2023 == reminder){
                printf("YES\n");
                while(k--){
                    printf("%d ", 1);
                }
                printf("\n");
            }
            
            else{
                reminder = 2023 / reminder;
                printf("YES\n");
                printf("%lld ", reminder);
                k--;
                
                while (k--)
                    printf("%d ", 1);
                
                printf("\n");
            }    
        }
        
        else
            printf("NO\n");
    }   
}