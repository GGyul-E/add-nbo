#include <stdio.h>
#include <netinet/in.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]){

    FILE *fd1, *fd2;
    uint32_t num1, num2;

    if(argv[1] && argv[2]){
        fd1 = fopen(argv[1], "r");
        fd2 = fopen(argv[2], "r");

        fread((void*)&num1, 4, 1, fd1);
        fread((void*)&num2, 4, 1, fd2);

        num1 = ntohl(num1);
        num2 = ntohl(num2);
    }

    printf("%d(%p) + %d(%p) = %d(%p)\n", num1, num1, num2, num2, num1+num2, num1+num2);
    return 0;
}
