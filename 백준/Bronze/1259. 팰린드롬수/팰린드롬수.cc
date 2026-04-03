    #define _CRT_SECURE_NO_WARNINGS
    #include <stdio.h>
    #include <string.h>

    int main()
    {
        char palin[100];
        while (1)
        {
            int ispalin = 1;
            scanf("%s", palin);
            if(strcmp(palin, "0") == 0) {
                break;
            }
            int len = strlen(palin);
            // printf("%d", len);
            for(int i = 0; i <= len / 2; i++) {
                if(palin[i] != palin[len - 1 - i]) {
                    ispalin = 0;
                    break;
                }
            }
            if(ispalin) printf("yes\n");
            else printf("no\n");
        }
    }