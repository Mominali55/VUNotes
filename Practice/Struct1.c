#include<stdio.h>
#include<string.h>

struct dataty {
    char name[50];
    int rol;
    float per;
};

int main() {
    struct dataty student[2];

    printf("Enter details (Name Roll Percentage):\n");

    for (int i = 0; i < 2; i++) {
//We dint use "&" before student[i].name because name is an array which acts as a pointer(Base address of the array is given in scanf)
        scanf("%s %d %f", student[i].name, &student[i].rol, &student[i].per);
    }

    printf("\n--- Output ---\n");

    for (int i = 0; i < 2; i++) {
        printf("%s %d %f \n", student[i].name, student[i].rol, student[i].per);
    }
    
    return 0;
}