/* A program to calculate the probability of the sum of different 
   outcomes of rolling two dice.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIDES 6
#define R_SIDE (rand()%SIDES+1)

int main()
{

    int j = 0, k = 0, l = 0, d1 = 0, d2 = 0, trials = 0, trial_counter = 0, similar_counter = 0;  
    int n_dice = 2;
    
    int * outcomes = (int *) malloc(sizeof(int));

    if(outcomes == NULL)
    {
        printf("Memory allocation failed.\n");
        return 0;
    }
    else
    {
        printf("Memory allocation successful.\n");
    }

    printf("Enter the number of trials:");
    scanf("%d", &trials);

    srand(clock()); 

    for(j = 0; j < trials; ++j)
    {
        trial_counter++;
        outcomes = (int *) realloc(outcomes, trial_counter * sizeof(int));
        outcomes[j] = (d1 = R_SIDE) + (d2 = R_SIDE);

        printf("\nd1 = %d, d2 = %d\noutcomes[%d] = %d\n", 
            d1, d2, j, outcomes[j]);
    }

    
    printf("Probabilities:\n\n"); 

    for(k = 0; k < trials; k++)
    {
        similar_counter++;   //counts all alike numbers in the outcomes.
        for(l = 0; l < trials; l++)
        {
            if(l != k)
            {
                if(outcomes[k] == outcomes[l])
                {
                    similar_counter++;
                }
            }
            if(l == trials-1)
            {
                printf("Outcome = %d\tProbability = %lf\n",
                        outcomes[k], (double)(similar_counter)/trials);
                similar_counter = 0;
            }
        }
    }
 
    return 0;

    
    free(outcomes);


    return 0;
} 
    
