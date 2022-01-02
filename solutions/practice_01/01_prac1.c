#include<stdio.h>

int main(){
    char name[100];
    int age;
    double height, weight;

    printf("Input Your Name: ");
    scanf("%s", name);
    printf("Input Your age: ");
    scanf("%d", &age);
    printf("Input Your height: ");
    scanf("%lf", &height);
    printf("Input Your weight: ");
    scanf("%lf", &weight);

    printf("\n\n[Health Record]\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %lf\n", height);
    printf("Weight: %lf\n", weight);

    return 0;
}
