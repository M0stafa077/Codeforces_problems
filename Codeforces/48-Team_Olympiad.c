/**
 * A. Team Olypiad 279 (Div.2)
 * Jan 6th 2024
 * @author : Mostafa Asaad
*/
#include <stdio.h>
#include <stdlib.h>

int check_for_zeros(int *array)
{
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

void print_array(int *array, int size)
{
    for(int f_counter = 0; f_counter < size - 1; ++f_counter)
        printf("%d ", array[f_counter]);

    printf("%d\n", array[size-1]);    
}

void solve(int *skills, int number_of_students, int max_teams)
{
    int indexes[max_teams][3];
    for(int i = 0; i < max_teams; i++)
        for(int j = 0; j < 3; j++)
            indexes[i][j] = 0;

    for(int teams_counter = 0; teams_counter < max_teams; ++teams_counter)
    {
        for(int skills_counter = 0; skills_counter < number_of_students; ++skills_counter)
        {
            if (skills[skills_counter] == 1)
            {
                if(indexes[teams_counter][0] == 0)
                {
                    indexes[teams_counter][0] = skills_counter + 1;
                    skills[skills_counter] = 0;
                }
            }

            else if (skills[skills_counter] == 2)
            {
                if(indexes[teams_counter][1] == 0)
                {
                    indexes[teams_counter][1] = skills_counter + 1;
                    skills[skills_counter] = 0;
                }
            }
            
            else if (skills[skills_counter] == 3)
            {
                if(indexes[teams_counter][2] == 0)
                {
                    indexes[teams_counter][2] = skills_counter + 1;
                    skills[skills_counter] = 0;
                }
            }
            /* Check if the array is complete */
            if(!check_for_zeros(indexes[teams_counter]))
                break;
        }
    }
    /* 1.Print max. number of teams */
    printf("%d\n", max_teams);

    /* 2.Print the indexes of the students */
    for(int teams_counter = 0; teams_counter < max_teams; ++teams_counter)
        print_array(indexes[teams_counter], 3);
}

int main()
{
    int number_of_students, counter = 0;
    scanf("%d" ,&number_of_students);

    int *skills = (int *) calloc(number_of_students, sizeof(int));
    for(int i = 0; i < number_of_students; ++i)
        scanf("%d", &skills[i]);

    /* Find the frequency of each skill */
    int freq[4] = {0, 0, 0, 0};
    for(int i = 0; i < number_of_students; ++i)
        ++freq[skills[i]];

    ASC_sort(freq, 4);
    int max_teams = freq[1];

    if(0 == max_teams){
        printf("%d", 0);
        return 0;
    }

    solve(skills, number_of_students, max_teams);    
}