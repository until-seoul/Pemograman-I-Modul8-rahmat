#include <stdio.h>

struct Peserta
{
    char name[50];
    int age;
    int score;
};

int main()
{
    struct Peserta p[10];
    int N, champ = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%s %d %d", p[i].name, &p[i].age, &p[i].score);
    }
    for (int i = 1; i < N; i++)
    {
        if (p[i].score > p[champ].score)
        {
            champ = i;
        }
    }
    printf("Peserta dengan skor tertinggi adalah %s dengan skor %d\n", p[champ].name, p[champ].score);
    return 0;
}
