#include <stdio.h>

int main()
{
    int choice;
    char str1[100], str2[100], str3[100];
    int pos, len, i, j, flag;

    printf("String Operations\n");
    printf("1. Substring\n");
    printf("2. Palindrome\n");
    printf("3. Compare\n");
    printf("4. Copy\n");
    printf("5. Reverse\n");
    printf("Choose an option (1-5): ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter a string: ");
            scanf("%s", str1);

            printf("Enter starting position (0-based index): ");
            scanf("%d", &pos);

            printf("Enter length of substring: ");
            scanf("%d", &len);

            j = 0;

            for(i = pos; i < pos + len && str1[i] != '\0'; i++)
            {
                str2[j] = str1[i];
                j++;
            }

            str2[j] = '\0';

            printf("Substring: %s\n", str2);
            break;

        case 2:
            printf("Enter a string: ");
            scanf("%s", str3);

            len = 0;
            i = 0;
            flag = 0;

            while(str3[len] != '\0')
                len++;

            j = len - 1;

            while(i < len / 2)
            {
                if(str3[i] != str3[j])
                {
                    flag = 1;
                    break;
                }
                i++;
                j--;
            }

            if(flag == 0)
                printf("String is a palindrome.\n");
            else
                printf("String is not a palindrome.\n");

            break;

        case 3:
            printf("Enter first string: ");
            scanf("%s", str1);

            printf("Enter second string: ");
            scanf("%s", str2);

            i = 0;

            while(str1[i] != '\0' || str2[i] != '\0')
            {
                if(str1[i] != str2[i])
                    break;

                i++;
            }

            if(str1[i] == '\0' && str2[i] == '\0')
                printf("Strings are matching.\n");
            else
                printf("Strings are not matching.\n");

            break;

        case 4:
            printf("Enter a string: ");
            scanf("%s", str1);

            i = 0;

            while(str1[i] != '\0')
            {
