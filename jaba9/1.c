#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <windows.h>
#define ROW 9
#define COL 9

//№1
//таблица умножения

void a0()
{
int row, col;
printf("\n");
for (row = 1; row <= ROW; ++row)
{
for (col = 1; col <= COL; col++)
printf("%5d", col * row);
printf("\n");
}
}

//нижний левый угол

void a1()
{
int row, col, mcol, mrow = 9;
mcol = 1;
printf("\n");
for (row = 1; row<= mrow; ++row) {
for (col = 1; col <= mcol; col++)
printf("%5d", col*row);
printf("\n");
mcol++;
}
}
//Индивидуальное задание
void a2()
{
int row, col, mcol, mrow = 5;
mcol = 1;
printf("\n");
for (row = 1; row <= mrow; ++row) {
for (col = 1; col <= mcol; col++)
printf("5   ", col*row);
printf("\n");
mcol++;
}
}


//2
void b0()
{
    setlocale(LC_ALL,"RUS");
    int count,n;
    long int num=0;
    char a;
    puts("Введите длинное число\n");
    scanf("%d", &num);
    n = num % 10;
    count = 0;
    while (num > 0) {
        if ((num % 10)>5) {
            count += 1;
        }

        printf("%i %i\n", num);
        printf("Продолжить? y - да; n - нет\n");
        scanf("%c",&a);
        a = getchar();
        if (a == 'n') {
            break;
        }
        num = num / 10;

    }
    printf("В числе найдено %i цифр больше 5\n", count);
}

void c1()
{

    float x, y, r, d;

    printf("Введите R\n");
    scanf("%f", &r);
    printf("\n");

    r = r * 2.f;

    for (y = ((r + 1) / 2); y >= -1; y--)
    {
        for (x = 0; x < r + 2; x++)
        {
            if (y >= 0 && y >= 2 * x - (r * 2 + 2) && y <= 2 * x - 2 && y <= -0.5 * x + ((r + 1) / 2) && y >= -0.5 * x - 2) printf("#");
            else printf(" ");
        }
        printf("\n");
    }
}


void main()
{
    setlocale(LC_ALL, "RUS");
    a0();
    a1();
    a2();
    b0();
    c1();
}