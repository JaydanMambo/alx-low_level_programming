#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define TARGET_CHECKSUM 2772

/* Function to generate a random ASCII character within a specified range */
char getRandomAsciiChar() {
    return rand() % (126 - 32 + 1) + 32;  /* Generates random ASCII characters between 32 (' ') and 126 ('~') */
}

int main() {
    
    char password[50];  /* Adjust the array size as needed */
    int currentChecksum = 0;
    size_t passwordLength;

    srand(time(NULL));  /* Seed the random number generator with the current time */


    while (currentChecksum != TARGET_CHECKSUM) {
        /* Generate a random character and add its ASCII value to the checksum */
        char character = getRandomAsciiChar();
        currentChecksum += character;

        /* Check if the checksum exceeds the target */
        if (currentChecksum > TARGET_CHECKSUM) {
            /* Reset the checksum and regenerate the password */
            currentChecksum = 0;
            password[0] = '\0';  /* Reset the password */
            continue;
        }

        /* Append the character to the password */
         passwordLength = strlen(password);
        if (passwordLength < sizeof(password) - 1) {
            password[passwordLength] = character;
            password[passwordLength + 1] = '\0';  /* Null-terminate the password */
        }
    }

    printf("%s\n", password);

    return 0;
}

