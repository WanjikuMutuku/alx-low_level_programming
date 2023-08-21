#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - Generates the password
 * @numbers: Digit characters to pick password from
 * @uppers: Uppercase characters to pick password from
 * @lowers: Lowercase characters to pick password from
 * @symbols: Symbol characters to pick password from
 * @password: The generated password
 * Return: 0 if success, 1 otherwise 
 */
int main(void)
{
  char symbols[] = "!@#$%^&*()";
  char numbers[] = "0123456789";
  char lowers[] = "abcdefghijklmnopqrstuvwxyz";
  char uppers[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  char password[10];
  int i;

  
srand((unsigned int) time(NULL));
  for (i = 0; i < 10; i++)
  {
    int ran_type = rand() % 4;

    if (ran_type == 0)
    {
      password[i] = symbols[rand() % strlen(symbols)];
    }
    else if (ran_type == 1)
    {
      password[i] = numbers[rand() % strlen(numbers)];
    }
    else if (ran_type == 2)
    {
      password[i] = lowers[rand() % strlen(lowers)];
    }
    else
    {
      password[i] = uppers[rand() % strlen(uppers)];
    }
   
  }
  password[i] = '\0';
  printf("%s", password);
  return (0);
}
