#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int count = 0;
    scanf("%d", &n);
    int movie = 666;
    // if(n == 1) {
    //     printf("666");
    // }

    while(n > 1) {
        int temp = movie;
        while(temp >= 666) {
            if(temp % 1000 == 666) {
                count++;
                break;
            }
            temp /= 10;
        }
        if(count == n) {
            break;
        }
        movie++;
    }
    printf("%d", movie);
}