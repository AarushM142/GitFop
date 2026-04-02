#include <stdio.h>

int main() // Using int main() is the standard
{
    int len, i;
    int cnt1 = 0, cnt2 = 0; // Initialize counters to 0

    printf("Enter size of the length: ");
    scanf("%d", &len);

    int main_array[len];
    int even_array[len]; // Pre-allocate max possible size
    int odd_array[len];

    printf("Enter elements of the main array: ");
    for(i = 0; i < len; i++)
    {
        scanf("%d", &main_array[i]);
    }

    for(i = 0; i < len; i++) {
        if(main_array[i] % 2 == 0) 
        {
            even_array[cnt1] = main_array[i]; // Use cnt1 as the index
            cnt1++;
        } 
        else 
        {
            odd_array[cnt2] = main_array[i]; // Use cnt2 as the index
            cnt2++;
        }
    }

    printf("The array of even numbers is: ");
    for(i = 0; i < cnt1; i++) // 3. Only loop up to the count found
        printf("%d ", even_array[i]);

    printf("\nThe array of odd numbers is: ");
    for(i = 0; i < cnt2; i++)
        printf("%d ", odd_array[i]);

    return 0;
}