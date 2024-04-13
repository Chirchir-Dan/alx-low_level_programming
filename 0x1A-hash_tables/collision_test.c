#include <stdio.h>
#include <stdlib.h>

unsigned long int hash_djb2(const unsigned char *str) {
    unsigned long int hash = 5381;
    int c;

    while ((c = *str++)) {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }

    return hash;
}

int main(void) {
    char *strings[] = {"hetairas", "mentioner", "heliotropes", "neurospora",
                       "depravement", "serafins", "stylist", "subgenera",
                       "joyful", "synaphea", "redescribed", "urites",
                       "dram", "vivency"};

    unsigned long int hash_values[sizeof(strings) / sizeof(strings[0])];

    printf("String\t\tHash Value\n");
    printf("=======================\n");

    for (int i = 0; i < sizeof(strings) / sizeof(strings[0]); i++) {
        hash_values[i] = hash_djb2((unsigned char *)strings[i]);
        printf("%s\t%lu\n", strings[i], hash_values[i]);
    }

    return 0;
}

