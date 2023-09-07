#include <stdio.h>

// ฟังก์ชันเช็คว่าเป็นจำนวนเฉพาะหรือไม่
int isPrime(int n) {
    if (n <= 1) {
        return 0; // ไม่ใช่จำนวนเฉพาะ
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // ไม่ใช่จำนวนเฉพาะ
        }
    }
    return 1; // เป็นจำนวนเฉพาะ
}

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);

    int values[N];

    // รับค่าจากผู้ใช้และตรวจสอบว่าเป็นจำนวนเฉพาะหรือไม่
    for (int i = 0; i < N; i++) {
        printf("Enter value[%d]: ", i);
        scanf("%d", &values[i]);
        if (!isPrime(values[i])) {
            values[i] = -1; // ใช้ -1 แทนค่าที่ไม่ใช่จำนวนเฉพาะ
        }
    }

    // แสดงผลลัพธ์
    printf("Index:  ");
    for (int i = 0; i < N; i++) {
        printf("%2d  ", i);
    }
    printf("\nArray:  ");
    for (int i = 0; i < N; i++) {
        if (values[i] == -1) {
            printf(" #  ");
        } else {
            printf("%2d  ", values[i]);
        }
    }
    printf("\n");

    return 0;
}
