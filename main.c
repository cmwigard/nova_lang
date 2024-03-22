#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

size_t file_size(FILE *file) {
    if (!file) {
        return 0;
    }
    fpos_t out = 0;
    assert(fgetpos(file, &out) == 0 && "Could not read file size");
    return out;
}

char *file_contents(char *path) {
    FILE *file = fopen(path, "r");
    if (!file) {
        printf("Could not open file %s\n", path);
        return NULL;
    }
    size_t size = file_size(file);
}

void print_usage(char **argv) {
    printf("Usage: %s <path_to_file>\n", argv[0]);
}

int main(int argc, char **argv) {
    if (argc < 2) {
        print_usage(argv);
        exit(0);
    }

    return 0;
}
