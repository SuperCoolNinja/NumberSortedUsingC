#include <stdio.h>
#include <stdlib.h>


void AscendingTable(int t[], const int sizeTableau)
{
    int temp = 0;
    for (int i = 0; i < sizeTableau; i++)
        for (int j = i + 1; j < sizeTableau; j++)
            if (t[i] > t[j])
            {
                temp = t[i];
                t[i] = t[j];
                t[j] = temp;
            }

    for (int i = 0; i < sizeTableau; i++)
        printf("Table sort in ascending order :   %d \n", t[i]);

    printf("\n \n");
}

void DescendingTable(int t[], const int sizeTableau)
{
    int temp = 0;
    for(int i = 0; i < sizeTableau; i++)
        for(int j = i +1; j < sizeTableau; j++)
            if (t[i] < t[j])
            {
                temp = t[i];
                t[i] = t[j];
                t[j] = temp;
            }

    for (int i = 0; i < sizeTableau; i++)
        printf("Table sort in descending order : %d \n", t[i]);

    printf("\n \n");
}

//MAIN EXECUTION :
void main()
{
    int table[] = { 125, 50, 5, 2, 99, 500, 1000, 2540 };
    int size = sizeof(table) / sizeof(int); // 32/4 = 8.

    AscendingTable(table, size);
    DescendingTable(table, size);

    system("pause");

	return 0;
}