#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    FILE *fp = fopen("prac1.txt", "r");

    int check = 0;
    float sum = 0;
    fgets(str, 100, fp);
    while(fscanf(fp, "%s", str) != EOF){
        if(!check){
            check = 1;
            sum += atoi(str);
            printf("%d\n", atoi(str));
        }else{
            check = 0;
        }
    }
    printf("sum of all student id is %f\n", sum);

    fclose(fp);
}
