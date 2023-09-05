#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits two strings into words
 * @str: string to be split.
 *
 * Return: Always success
 */

char **strtow(char *str)
{
	#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int count_words(char *str)
{
	if (str == NULL || *str == '\0')
        return NULL;
	int num_words = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            num_words++;
        }
        i++;
    }
    num_words++;

    char **words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL) {
        return NULL;
    }

    int word_index = 0;
    int word_length = 0;
    i = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
            if (words[word_index] == NULL) {
                int j = 0;
                while (j < word_index) {
                    free(words[j]);
                    j++;
                }
                free(words);
                return NULL;
            }
            strncpy(words[word_index], str + i - word_length, word_length);
            words[word_index][word_length] = '\0';
            word_index++;
            word_length = 0;
        } else {
            word_length++;
        }
        i++;
    }

    words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
    if (words[word_index] == NULL) {
        int j = 0;
        while (j < word_index) {
            free(words[j]);
            j++;
        }
        free(words);
        return NULL;
    }
    strncpy(words[word_index], str + strlen(str) - word_length, word_length);
    words[word_index][word_length] = '\0';
    word_index++;

    words[word_index] = NULL;
    return words;
}
