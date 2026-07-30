 #include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    if (num == 2) {
        return 1;
    }
    if (num % 2 == 0) {
        return 0;
    }
    
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;
    
    printf("=== Prime or Composite Number Checker ===\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num <= 1) {
        printf("\n%d is neither prime nor composite.\n", num);
    } else if (isPrime(num)) {
        printf("\n%d is a PRIME number.\n", num);
    } else {
        printf("\n%d is a COMPOSITE number.\n", num);
    }
    
    return 0;
}
