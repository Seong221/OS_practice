#include "user.h"

void main(void) {
    printf("Hello world from shell!\n");
    *((volatile int*) 0x80200000) = 0x1234; //new!
    for (;;);
}
