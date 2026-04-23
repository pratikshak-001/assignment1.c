#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int choice;

    do {
        printf("\n--- STRING OPERATIONS MENU ---\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Convert to Uppercase\n");
        printf("7. Convert to Lowercase\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        getchar(); // clear newline

        switch(choice) {

            case 1:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Length = %lu\n", strlen(str1));
                break;

            case 2:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                strcpy(str2, str1);
                printf("Copied string: %s\n", str2);
                break;

            case 3:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';

                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                strcat(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;

            case 4:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';

                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                if(strcmp(str1, str2) == 0)
                    printf("Strings are equal\n");
                else
                    printf("Strings are not equal\n");
                break;

            case 5:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';

                // strrev is not standard but works in some compilers
                strrev(str1);
                printf("Reversed string: %s\n", str1);
                break;

            case 6:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';

                for(int i = 0; str1[i]; i++)
                    str1[i] = toupper(str1[i]);

                printf("Uppercase: %s\n", str1);
                break;

            case 7:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';

                for(int i = 0; str1[i]; i++)
                    str1[i] = tolower(str1[i]);

                printf("Lowercase: %s\n", str1);
                break;

            case 8:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 8);

    return 0;
}