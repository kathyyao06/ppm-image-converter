#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdint.h>

//converts a p3 to p6 file
int main(int argc, char *argv[])
{ 
    char title[255] = {0};
    scanf("%s\n", title);
    
    if ((title[0] != 'P') || (title[1] != '3')) {
        fprintf(stderr, "Input Not a P3 File");
    } else {
        fprintf(stdout, "P6\n");
     
        int width;
        scanf("%d ", &width);
        fprintf(stdout, "%d ", width);
    
        int height;
        scanf("%d\n", &height);
        fprintf(stdout, "%d\n", height);
   
        int max;
        scanf("%d\n", &max);
        fprintf(stdout, "%d\n", max);

        unsigned char pixels;
        int loopcounter = 0;
        scanf("%hhu\n", &pixels);

        while(loopcounter < width * height * 3) {
            putchar(pixels);
            scanf("%hhu\n", &pixels);
            loopcounter++;
        }
    }
    return 0;
}

