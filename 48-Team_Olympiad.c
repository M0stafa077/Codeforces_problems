/**
 * A. Team Olypiad 279 (Div.2)
 * Jan 6th 2024
 * @author : Mostafa Asaad
*/
#include <stdio.h>
#include <stdlib.h>

int check_if_zero(int *array){
    for(int i = 0; i < 3; ++i)
        if(array[i] == 0)
            return 1;
        else
            continue;

     return 0;
}

/* Ascending sort function */
void ASC_sort(int *array, int size)
{
    int key, i, f_counter;
    for (f_counter = 1; f_counter < size; ++f_counter)
    {
        key = array[f_counter];
        i = f_counter - 1;
        while (i >= 0 && array[i] > key)
        {
            array[i + 1] = array[i];
            --i;
        }
        array[i + 1] = key;
    }
}

int main()
{
    int number_of_students, counter = 0;
    scanf("%d" ,&number_of_students);

    int *child = (int *) calloc(number_of_students, sizeof(int));
    for(int i = 0; i < number_of_students; ++i)
        scanf("%d", &child[i]);

    /* Find the frequency of each skill */
    int freq[4] = {0, 0, 0, 0};
    for(int i = 0; i < number_of_students; ++i)
        ++freq[child[i]];

    ASC_sort(freq, 4);
    int max_teams = freq[1];

    if(0 == max_teams){
        printf("%d", 0);
        return 0;
    }

    int indexes[max_teams][3];
    for(int i = 0; i < max_teams; i++)
        for(int j = 0; j < 3; j++)
            indexes[i][j] = 0;



    for(int teams_counter = 0; teams_counter < max_teams; ++teams_counter){
        counter = 0;
        for(int skills_counter = 0; skills_counter < number_of_students; ++skills_counter){
            if (child[skills_counter] == 1){
                if(indexes[teams_counter][0] == 0){
                    indexes[teams_counter][0] = skills_counter + 1;
                    child[skills_counter] = 0;
                }
            }
            else if (child[skills_counter] == 2){
                if(indexes[teams_counter][1] == 0){
                    indexes[teams_counter][1] = skills_counter + 1;
                    child[skills_counter] = 0;
                }
            }
            else if (child[skills_counter] == 3){
                if(indexes[teams_counter][2] == 0){
                    indexes[teams_counter][2] = skills_counter + 1;
                    child[skills_counter] = 0;
                }
            }
            if(!check_if_zero(indexes[teams_counter]))
                    break;
        }
    }
    printf("%d\n", max_teams);

    for(int teams_counter = 0; teams_counter < max_teams; ++teams_counter){
        for(int skills_counter = 0; skills_counter < 3; ++skills_counter){
            printf("%d ", indexes[teams_counter][skills_counter]);
        }
        printf("\n");
    }
}