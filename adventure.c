#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define len 30

int main()
{
    int position[2] = {0, 0}, positiont[2] = {len / 2, len / 2};
    int t = time(NULL);
    while (1)
    {
        system("cls");
        printf("time = %d \n", (t - time(NULL)) * (-1));
        printf("i= %d , j= %d\n\n", position[0], position[1]);
        for (int i = 0; i < len; i++)
        {
            printf("# ");
        }
        for (int j = 0; j < len - 2; j++)
        {
            printf("\n# ");
            for (int w = 0; w < len - 2; w++)
            {
                if (position[1] == w && position[0] == j)
                {
                    printf("0 ");
                }
                else if (positiont[1] == w && positiont[0] == j)
                {
                    printf("& ");
                }
                else
                {
                    if (rand() % 17)
                    {
                        printf("$ ");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
            }

            printf("#");
        }
        printf("\n");
        for (int i = 0; i < len; i++)
        {
            printf("# ");
        }

        if (position[0] == positiont[0] && position[1] == positiont[1])
        {
            printf("\n\n\n\t\t\t!!!!!!! YOU WIN !!!!!!");
            getchar();
            break;
        }
        switch (getch())
        {
        case 'w':
            if (position[0] < 1)
            {
            }
            else
            {
                position[0] -= 1;
            }
            break;
        case 's':
            if (position[0] > len - 4)
            {
            }
            else
            {
                position[0] += 1;
            }

            break;
        case 'd':
            if (position[1] > len - 4)
            {
            }
            else
            {
                position[1] += 1;
            }

            break;
        case 'a':
            if (position[1] < 1)
            {
            }
            else
            {
                position[1] -= 1;
            }

            break;
        }
        switch (rand() % 4)
        {
        case 0:
            if (positiont[0] < 1)
            {
            }
            else
            {
                positiont[0] -= 2;
            }
            break;
        case 1:
            if (positiont[0] > len - 4)
            {
            }
            else
            {
                positiont[0] += 2;
            }

            break;
        case 2:
            if (positiont[1] > len - 4)
            {
            }
            else
            {
                positiont[1] += 2;
            }

            break;
        case 3:
            if (positiont[1] < 1)
            {
            }
            else
            {
                positiont[1] -= 2;
            }

            break;
        }
        printf("\a");
    }
}