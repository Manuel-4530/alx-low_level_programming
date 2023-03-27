#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char password[9];
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"; /* the characters that can be used in the password */
    int i;
    
    srand(time(NULL)); 
   /*
    * seed the random number generator with the current time
    */
    for (i = 0; i < 8; i++) {
        password[i] = charset[rand() % (sizeof(charset) - 1)]; 
	/* 
	 * pick a random character from the charset
	 */
    }
    password[8] = '\0'; 
   /*
    * add the null terminator
    */
    printf("Random password: %s\n", password); 
    /*
     * print the password
    */
    return 0;
}

