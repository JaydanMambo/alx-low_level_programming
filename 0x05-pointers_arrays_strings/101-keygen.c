#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * randomCharacter - Generate a random character from a given character set
 *
 * @charset: The character set to choose from.
 * @charsetSize: The size of the character set.
 *
 * Return: A random character from the character set.
 */
char randomCharacter(const char *charset, int charsetSize) {
    int randomIndex = rand() % charsetSize;
    return charset[randomIndex];
}

/**
 * generateRandomPassword - Generate a random password of a given length
 *
 * @password: The buffer to store the generated password.
 * @length: The length of the password to generate.
 * @charset: The character set to use for the password.
 * @charsetSize: The size of the character set.
 *
 * This function generates a random password of the specified length using the
 * provided character set. It null-terminates the password string.
 */
void generateRandomPassword(char *password, int length, const char *charset, int charsetSize) {
    int i;
    for (i = 0; i < length; i++) {
        password[i] = randomCharacter(charset, charsetSize);
    }
    password[length] = '\0'; /* Null-terminate the string */
}

int main(void) {
    const char *validCharset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const int validCharsetSize = 62; /* Length of the valid character set */

    srand(time(NULL)); /* Seed the random number generator with the current time */

    int passwordLength;

    passwordLength = 8; /* Change this to the desired password length */
    char password[9];

    generateRandomPassword(password, passwordLength, validCharset, validCharsetSize);

    printf("Random Password: %s\n", password);

    return 0;
}

