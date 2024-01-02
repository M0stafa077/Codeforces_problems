/**
 * some C helper functions
 * @author : Mostafa Asaad
*/

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

/* Descending sort function */
void DSC_sort(int *array, int size)
{
    int key, i, f_counter;
    for (f_counter = 1; f_counter < size; ++f_counter)
    {
        key = array[f_counter];
        i = f_counter - 1;
        while (i >= 0 && array[i] < key)
        {
            array[i + 1] = array[i];
            --i;
        }
        array[i + 1] = key;
    }    
}

/* Greatest Common Divisor using Euclidean algorithm*/
long GCD(long a, long b) 
{
    if (0 == a)
        return b;

    if (0 == b)
        return a;

    if (a == b)
        return a;

    if (a > b)
        return GCD(a - b, b);

    return GCD(a, b - a);
}

/* Delete a number from an array */
void delete_fromArray(int *arr, int size, int num) 
{
    int i, j, found = 0;

    for (i = 0; i < size; ++i)
        if (arr[i] == num) {
            found = 1;
            break;
        } 
        else 
            {/*Nothing*/}

    if (found) 
        for (j = i; j < size - 1; ++j)
            arr[j] = arr[j + 1];
    
    else 
        {/*Nothing*/}
}

/* Function copies two arrays */
inline void copy_array(int *a, int *b, int size){
    for(int f_counter = 0; f_counter < size; ++f_counter)
        b[f_counter] = a[f_counter];
}

/* Function prints an array of ints */
void print_array(int *array, int size)
{
    for(int f_counter = 0; f_counter < size - 1; ++f_counter)
        printf("%d ", array[f_counter]);

    printf("%d\n", array[size-1]);    
}

/* Function fills an array of ints from stdin */
inline void get_intArray(int *array, int size)
{
    for(int l_counter = 0; l_counter < size; ++l_counter)
        scanf("%d", &array[l_counter]);
}