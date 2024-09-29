 #include <stdio.h>

// C program to simulate a long-running loop

int main() {
    printf("Starting C loop...\n");

    long long sum = 0;
    for (long long i = 0; i < 1000000000; i++) {  // 1 billion iterations
        sum += i;
    }

    printf("C loop finished.\n");
    printf("Sum: %lld\n", sum);

    return 0;
}
