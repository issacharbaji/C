#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#import <math.h>

int numOfLetters(string text);
int numOfWords(string text);
int numOfSentences(string text);

int main(void)
{
    string text = get_string("Text: ");
    // return the number of letters, words and sentences
    int numberOfLetters = numOfLetters(text);
    int numberOfWords = numOfWords(text);
    int numberOfSentences = numOfSentences(text);
    //average of letters L
    float L = ((float)numberOfLetters / numberOfWords) * 100;
    // average of sentences S
    float S = ((float)numberOfSentences / numberOfWords) * 100;

    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = (int)round(index);
    if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
  
  return 0;


}
int numOfLetters(string text)
{
    // calculate the number of letters
    int count = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        // we can convert the whole text to uppercase or to lower case and use just one boolean expression in the if statement
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            count ++;
        }
    }
    return count;
}
int numOfWords(string text)
{
    int count = 0;
    // calculate the number of words
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == ' ')
        {
            count ++;
        }
    }
    return count + 1;
}
int numOfSentences(string text)
{
    int count = 0;
    // calculate the number of words
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == '!' || text[i] == '.' || text[i] == '?')
        {
            count ++;
        }
    }
    return count;
}
