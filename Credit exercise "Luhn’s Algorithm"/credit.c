#include<stdio.h>
#include<cs50.h>

long get_positive_long(void);
int checkSum1(long i);
int checkSum2(long i);
int checkCount(long i);
bool checkVisa(int i, long j, int k);
bool checkMaster(int i, long j, int k);
bool checkAMEX(int i, long j, int k);

int main(void)
{
    long cardNum = get_positive_long();
    long firstDigit = cardNum;
    long firstTwoDigits = cardNum;
    int firstSum = checkSum1(cardNum);
    int secondSum = checkSum2(cardNum);
    int count = checkCount(cardNum);

    //checkSum
    int sum = firstSum + secondSum;

    //get the first digit
    while (firstDigit >= 10)
    {
        firstDigit /= 10;
    }
    //get the first tow digits
    while (firstTwoDigits >= 100)
    {
        firstTwoDigits /= 10;
    }

    //printf("%li\n", firstDigit);

    bool visa = checkVisa(sum, firstDigit, count);
    bool master = checkMaster(sum, firstTwoDigits, count);
    bool amex = checkAMEX(sum, firstTwoDigits, count);

    if (visa)
    {
        printf("VISA\n");
    }
    else if (master)
    {
        printf("MASTERCARD\n");
    }
    else if (amex)
    {
        printf("AMEX\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
bool checkVisa(int sum, long firstDigit, int count)
{
    if ((sum % 10 == 0))
    {
        if (count == 16 || count == 13)
        {
            if (firstDigit == 4)
            {
                return true;
            }
        }
        else
        {
            return false;
        }
    }
    return false;
}
bool checkMaster(int sum, long firstTwoDigits, int count)
{
    if ((sum % 10 == 0))
    {
        if (count == 16)
        {
            if ((firstTwoDigits == 51) || (firstTwoDigits == 52) || (firstTwoDigits == 53) || (firstTwoDigits == 54) || (firstTwoDigits == 55))
            {
                return true;
            }
        }
        else
        {
            return false;
        }
    }
    return false;
}
bool checkAMEX(int sum, long firstTwoDigits, int count)
{
    if ((sum % 10 == 0))
    {
        if (count == 15)
        {
            if ((firstTwoDigits == 534) || (firstTwoDigits == 37))
            {
                return true;
            }
        }
        else
        {
            return false;
        }
    }
    return false;
}
int checkCount(long cardNum)
{
    int count = 0;

    do
    {
        if (cardNum % 10 >= 0)
        {
            count++;
        }
        cardNum /= 10;
    }
    while (cardNum > 0);
    return count;
}

int checkSum1(long cardNum)
{
    int sum = 0;

    do
    {
        sum += cardNum % 10;
        cardNum /= 100;
    }
    while (cardNum > 0);

    return sum;
}

int checkSum2(long cardNum)
{
    int sum = 0;
    long card = cardNum / 10;
    int temp = 0;

    do
    {
        if ((card % 10) * 2 > 9)
        {
            temp = (card % 10) * 2 - 9;
        }
        else
        {
            temp = (card % 10) * 2;
        }
        sum += temp;
        card /= 100;
    }
    while (card > 0);

    return sum;
}
long get_positive_long(void)
{
    long cardNum;
    do
    {
        cardNum = get_long("Please enter the card number: \n");
    }
    while (cardNum < 0);

    return cardNum;
}
