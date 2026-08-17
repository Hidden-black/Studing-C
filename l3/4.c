#include <stdio.h>

struct Product {
    int ProductID;
    char ProductName[30];
    int Price;
    int Quantity;
};

int main() {

    struct Product value[5];
    for (int i = 0; i < 5; i++) {

        printf("\n------VALUE %d------\n", i + 1);
        printf("Enter Prodid: ");
        scanf("%d", &value[i].ProductID);
        printf("ProductName: ");
        scanf("%29s", value[i].ProductName);
        printf("Price: ");
        scanf("%d", &value[i].Price);
        printf("Quantity: ");
        scanf("%d", &value[i].Quantity);
    };

    printf("\n\n_________________________\n\n");
    //    int Tprice[5];
    for (int i = 0; i < 5; i++) {
        printf("ProductID: %d   ProductName:  %s     Price: %d     Quantity: "
               "%d     Price:  %d\n",
               value[i].ProductID, value[i].ProductName, value[i].Price,
               value[i].Quantity, value[i].Price * value[i].Quantity);
    }

    //    printf("\n\nTotal bill: %d\n\n",
    //           Tprice[0] + Tprice[1] + Tprice[2] + Tprice[3] + Tprice[4]);
    return 0;
}
