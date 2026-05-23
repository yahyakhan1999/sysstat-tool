#include <stdio.h>
#include <stdlib.h>

void print_memory() {
    FILE *f = fopen("/proc/meminfo", "r");
    if (!f) {
        perror("Cannot open /proc/meminfo");
        return;
    }
    char line[256];
    int count = 0;
    printf("=== Memory Info ===\n");
    while (fgets(line, sizeof(line), f) && count < 3) {
        printf("%s", line);
        count++;
    }
    fclose(f);
}

void print_load() {
    FILE *f = fopen("/proc/loadavg", "r");
    if (!f) {
        perror("Cannot open /proc/loadavg");
        return;
    }
    char line[256];
    printf("=== CPU Load Average ===\n");
    if (fgets(line, sizeof(line), f)) {
        printf("%s\n", line);
    }
    fclose(f);
}

int main() {
    printf("== System Stats Collector ==\n\n");
    print_memory();
    printf("\n");
    print_load();
    return 0;
}
