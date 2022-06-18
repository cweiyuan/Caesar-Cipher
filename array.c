#include <stdio.h>

#define ALPHABET_SIZE 26
#define BUFFER_SIZE 512

int main()
{
    // Index               0    1    2    3    4    5    6    7    8    9   10   11   12   13   14   15   16   17   18   19   20   21   22   23   24   25
    char alphabets[ALPHABET_SIZE] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    char cipher[ALPHABET_SIZE]; 
    char message[BUFFER_SIZE];

    int index = 0;
    int key;
    int messageIndex;

    printf("====================================================\n");

    printf("Enter the key: ");
    scanf("%d", &key);

    printf("====================================================\n");

    printf("Enter the message: ");
    scanf("%s", message);

    for (index = 0; index < ALPHABET_SIZE; index++) {
        cipher[index] = alphabets[index + key];
    }

    for (index = 0; index < 3; index++) {
        cipher[ALPHABET_SIZE - key + index] = alphabets[index];
    }

    printf("====================================================\n");

    printf("Plaintext alphabets: \n");

    for (index = 0; index < 26; index++) {
        printf("%c ", alphabets[index]);
    }

    printf("\n====================================================\n");

    printf("Cipher letters: \n");

    for (index = 0; index < 26; index++) {
        printf("%c ", cipher[index]);
    }

    printf("\n====================================================\n");
    
    // Implement your ceaser cipher here
    for (messageIndex = 0; messageIndex < 512; messageIndex++)
    {
        if (message[messageIndex] == '\0')
        {
            break;
        }
        else
        {
            for (index = 0; index < ALPHABET_SIZE; index++)
            {
                if (message[messageIndex] == alphabets[index])
                {
                    printf("%c", cipher[index]);
                    break;
                }
            }      
        }
    }
}