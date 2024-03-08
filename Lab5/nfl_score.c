#include <stdio.h>

int main()
{
    int touchdown = 6;
    int fieldGoal = 3;
    int safety = 2;
    int touchdownAnd2 = 8;
    int touchdownAnd1 = 7;
    int userNumber;
    printf("Enter 0 or 1 to STOP\n");
    while (1) {
        printf("Enter the NFL score: ");
        scanf("%d", &userNumber);
        if (userNumber <= 1)
        {
            break;
        } else {
            printf(" \n");
            printf("possible combinations of scoring plays: \n");
            int score;
            for (int touchdownAnd2 = 0; touchdownAnd2 * 8 <= userNumber; touchdownAnd2++)
            {
                for (int touchdownAnd1 = 0; touchdownAnd1 * 7 <= userNumber; touchdownAnd1++)
                {
                    for (int touchdown = 0; touchdown * 6 <= userNumber; touchdown++)
                    {
                        for (int fieldGoal = 0; fieldGoal * 3 <= userNumber; fieldGoal++)
                        {
                            for (int safety = 0; safety * 2 <= userNumber; safety++)
                            {
                                score = (touchdownAnd2 * 8) + (touchdownAnd1 * 7) + (touchdown * 6) + (fieldGoal * 3) + (safety * 2);
                                if (userNumber == score)
                                {
                                    printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", touchdownAnd2, touchdownAnd1, touchdown, fieldGoal, safety);
                                }
                            }
                        }
                    }
                }
            }
            printf(" \n");
        }
    }
    return 0;
}
