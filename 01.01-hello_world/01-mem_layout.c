//
// Created by WinterRain_Bud on 5/15/2025.
//
#include <stdio.h>
#include <stdlib.h>

int global_init = 42;
int global_uninit;
const char* ro_str = "Hello from .rodata";

int main() {
    int local = 1;
    int* heap_ptr = malloc(4);

    printf("Address of main() (code):     %p\n", (void*)main);
    printf("Address of global_init:       %p\n", (void*)&global_init);
    printf("Address of global_uninit:     %p\n", (void*)&global_uninit);
    printf("Address of ro_str:            %p\n", (void*)ro_str);
    printf("Address of heap_ptr:          %p\n", (void*)heap_ptr);
    printf("Address of local (stack):     %p\n", (void*)&local);

    free(heap_ptr);
    return 0;
}
