#include <stdio.h>

struct Mobile {
    char companyName[50];
    char color[20];
    char model[50];
};

int main() {
    int numMobiles,i;

    printf("Enter the number of mobiles: ");
    scanf("%d", &numMobiles);


    struct Mobile mobiles[numMobiles];

    for ( i = 0; i < numMobiles; i++) {
        printf("\nDetails of Mobile %d:\n", i + 1);
        printf("Company Name: ");
        scanf("%s", mobiles[i].companyName);
        printf("Color: ");
        scanf("%s", mobiles[i].color);
        printf("Model: ");
        scanf("%s", mobiles[i].model);
    }


    printf("\nDetails of Mobiles:\n");
    for (i = 0; i < numMobiles; i++) {
        printf("\nMobile %d:\n", i + 1);
        printf("Company Name: %s\n", mobiles[i].companyName);
        printf("Color: %s\n", mobiles[i].color);
        printf("Model: %s\n", mobiles[i].model);
    }

    return 0;
}
