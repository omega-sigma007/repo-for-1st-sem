#include <stdio.h>
int main(void)
{
    struct priceCatalog
    {
        char name[20];
        int price;
    };
    struct priceCatalog x = {
        .name = "Vendi",
        .price = 40};

    printf("Name = %s\nPrice = %d", x.name, x.price);
    // return 0;
}