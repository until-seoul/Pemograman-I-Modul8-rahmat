#include <stdio.h>

struct Dompet
{
    char name[50];
    int balance;
};

void topUp(struct Dompet *d, int nominal)
{
    d->balance += nominal;
    printf("Top up %d berhasil, balance = %d\n", nominal, d->balance);
}

void bayar(struct Dompet *d, int nominal)
{
    if (d->balance >= nominal)
    {
        d->balance -= nominal;
        printf("Bayar %d berhasil, balance = %d\n", nominal, d->balance);
    }
    else
    {
        printf("Bayar %d gagal, balance tidak cukup\n", nominal);
    }
}

int main()
{
    struct Dompet d;
    int N, nominal;
    char type;
    scanf("%s %d", d.name, &d.balance);
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf(" %c %d", &type, &nominal);
        if (type == 'T')
        {
            topUp(&d, nominal);
        }
        else if (type == 'B')
        {
            bayar(&d, nominal);
        }
    }
    printf("saldo akhir %s = %d\n", d.name, d.balance);
    return 0;
}
