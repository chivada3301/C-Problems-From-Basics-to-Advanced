#include <stdio.h>

int main() {
    int price, ns, nd, nc, nn;
    char n[50];

    printf("Please tell us, what's your name? ");
    scanf("%s", n);

    printf("Welcome to our hotel miss/sir %s \n", n);

    printf("Please enter the number of single rooms: ");
    scanf("%d", &ns);

    printf("Please enter the number of double rooms: ");
    scanf("%d", &nd);

    printf("Please enter the number of children: ");
    scanf("%d", &nc);

    printf("Please enter the number of nights: ");
    scanf("%d", &nn);

    // Single room pricing
    if (ns >= 3) {
        price = 6000 * ns;
    } else {
        price = 7500 * ns;
    }

    // Double room pricing
    if (nd >= 4) {
        price = price + (8000 * nd);
    } else {
        price = price + (9500 * nd);
    }

    // Children pricing
    if (nc > 1) {
        price = price + (nc - 1) * 3000;
        price = price + 300 + (nc + nd * 2 + nc);
        printf("The total price is: %d\n", price * nn);
    }

    /*
     To calculate the total price to pay, the user must enter:
       → Number of single rooms
       → Number of double rooms
       → Number of children
       → Number of nights
    */

    return 0;
}
