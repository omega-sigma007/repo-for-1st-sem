#include <stdio.h>
typedef struct
{
    int AccNo;
    char name[20];
    int bal;
} bank;
int main(void)
{
    bank customer[4] = {
        {100, "Abir Ghosh", 1200},
        {101, "Ayush Dey", 1500},
        {102, "Priya Basu", 500},
        {103, "Arun Katyal", 2000}};

    while (1)
    {
        int n, accNo, depoAm, withAm;
        printf("\n****Menu****\n");
        printf("Press 1 for deposite !!\n");
        printf("Press 0 for withdrawl !!\n");
        printf("Enter your choise = ");
        scanf("%d", &n);
        switch (n)
        {
        // deposite
        case 1:
        {
            int f = 0;
            printf("\nEnter the AccNo = ");
            scanf("%d", &accNo);
            for (int i = 0; i < 4; i++)
            {
                if (customer[i].AccNo == accNo)
                {
                    printf("\nEnter deposite ammount = ");
                    scanf("%d", &depoAm);
                    customer[i].bal += depoAm;
                    printf("\nNow your Accball = %d", customer[i].bal);
                    f = 1;
                    break;
                }
            }
            if (!f)
                printf("\nAcc didn't matched !!");
            break;
        }
            // withdrawl
        case 0:
        {
            int f = 0;
            printf("\nEnter the AccNo = ");
            scanf("%d", &accNo);
            for (int i = 0; i < 4; i++)
            {
                if (customer[i].AccNo == accNo)
                {
                    if (customer[i].bal < 1000)
                    {
                        printf("Insufficient ballance !!");
                        f = 1;
                        break;
                    }
                    printf("\nEnter withdrawl ammount = ");
                    scanf("%d", &withAm);
                    switch (customer[i].bal - withAm > 1000)
                    {
                    case 1:
                        customer[i].bal -= withAm;
                        printf("\nNow your Accball = %d", customer[i].bal);
                        break;
                    case 0:
                        printf("\nInaufficient Ballance !!");
                    }
                    f = 1;
                    break;
                }
            }
            if (!f)
                printf("\nAcc didn't matched !!");
        }
        default:
            printf("\nPlease maKe a valid choise");
        }
    }
}