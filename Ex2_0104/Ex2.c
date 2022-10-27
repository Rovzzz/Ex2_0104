#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS


int main(void)
{
    int exit = 1;
    while (exit == 1)
    {
        setlocale(LC_ALL, "Rus");
        printf("\nУказатели\n");
        printf("Фукции: \n1 - Редактирование и вывод значения\n2 - Динамическое создание и удаление массива \n3 - Функция для вывода на экран консоли массива произвольной длины\n4 - Треугольная матрица\n");
        int num;
        printf("\nВыберите операцию: ");
        scanf_s("%d", &num);
            switch (num)
            {
            case 1:
                printf("\n<Редактирование и вывод значения> \n");
                Editing();
                break;

            case 2:
                printf("\n<Динамическое создание и удаление массива> \n");
                Dynamic_Array();
                break;

            case 3:
                printf("\n<Произвольная длина массива> \n");
                int r = 0;
                scanf_s("%d", &r);
                int* mas = calloc(r, sizeof(int));
                for (int i = 0; i < r; i++)
                {
                    *(mas + i) = i;

                }
                printf("n");
                Function_output(mas, r);
                break;

            case 4:
                printf("\n<Треугольная матрица> \n");
                Triangular_array();
                break;

            default:
                printf("\nТакой команды нет");
                break;
            }
            printf("\nВы хотите продолжить?\n1-да\n0-нет\n");
            scanf_s("%d", &exit);
    }

    return 0;
}

Editing()
{
    int pere = 1;
    while (pere == 1)
    {
        int i;
        int* p = &i;
        printf("\nВведите число: ");
        scanf_s("%d", p);
        printf("%p\n", p);
        printf("\nХотите редактировать число?\n1-да\n0-нет\n");
        scanf_s("%d", &pere);
    }
}

Dynamic_Array()
{
    int n;
    printf("\nВведите размерность массива: ");
    scanf_s("%d", &n);
    int* a = malloc(n), sazeof(int);
    for (long i = 0; i < n; i++)
    {
        printf("%d", i);
        printf(" ");
        *(a + i);
    }
    int vix;
    printf("\nХотите удалить массив?\n1-да\n0-нет\n");
    scanf_s("%d", &vix);
    if (vix == 1)
    {
        free(a);
        printf("Массив успешно удален\n");
    }
    else if (vix == 0)
    {

    }
    else
    {
        printf("\nХотите удалить массив?\n1-да\n0-нет\n");
        scanf_s("%d", &vix);
    }
}

Function_output(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", *(a + i));
    }
}

Triangular_array()
{
    printf("\nВведите размерность массива: ");
    int x;
    scanf_s("%d", &x);
    int** pp = malloc(x * sizeof(int));
    int per = 0;
    for (int i = 0; i < x; i++)
    {
        *(pp + i) = malloc((i + 1) * sizeof(int));
        for (int j = 0; j <= i; j++)
        {
            pp[i][j] = per;
            per++;

        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", pp[i][j]);

        }
        printf("\n");
    }
    for (int i = 0; i < x; i++)
    {
        free(pp[i]);
    }
    free(pp);
}