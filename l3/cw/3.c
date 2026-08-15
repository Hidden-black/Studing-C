#include <stdio.h>

struct Products {
    int proid;
    char name[30];
    int price;
    int quantity;
};

int main() {
    printf("\n\n");

    struct Products value[5];
    for (int i = 0; i < 5; i++) {

        printf("\n------VALUE %d------\n", i + 1);
        printf("Enter Prodid: ");
        scanf("%d", &value[i].proid);
        printf("ProductName: ");
        scanf("%s", value[i].name);
        printf("Price: ");
        scanf("%d", &value[i].price);
        printf("Quantity: ");
        scanf("%d", &value[i].quantity);
    };

    printf("\n\n_________________________\n\n");
    int Tprice[5];
    for (int i = 0; i < 5; i++) {
        printf("ProductID: %d   ProductName:  %s     Price: %d     Quantity: "
               "%d     Price:  %d\n",
               value[i].proid, value[i].name, value[i].price, value[i].quantity,
               Tprice[i] = value[i].price * value[i].quantity);
    }

    printf("\n\nTotal bill: %d\n\n",
           Tprice[0] + Tprice[1] + Tprice[2] + Tprice[3] + Tprice[4]);
    return 0;
}
