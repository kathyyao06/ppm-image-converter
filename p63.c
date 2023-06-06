#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    char title[255] = {0};
    int width, height, max;
    scanf("%s\n", title);
    
    if ((title[0] != 'P') || (title[1] != '6')) {
        fprintf(stderr, "Input Not a P6 File");
    } else {
        fprintf(stdout, "P3\n");
        scanf("%d\n", &width);
        fprintf(stdout, "%d ", width);

        scanf("%d\n", &height);
        fprintf(stdout, "%d\n", height);

        scanf("%d\n", &max);
        fprintf(stdout, "%d\n", max);
        
        int counter = 0;
        int c;
        while((c = getchar()) != EOF) {
            if (counter >= 500) {
                fprintf(stdout, "\n");
                counter = 0;
            }
            fprintf(stdout, "%d ", c);
            counter++;
        }
        fprintf(stdout, "\n");
    }
    return 0;
}
