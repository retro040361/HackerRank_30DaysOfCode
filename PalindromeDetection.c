#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char* input;
    int size = 20;
    input = malloc(size*sizeof(char));
    int time = 0;
    char temp;
    while(scanf("%c",&temp))
    {
        if(temp == '.'){
            break;
        }

        input[time] = temp;
        time++;

        if(time == size-1){
            size *= 2;
            char* temp = malloc(size*sizeof(char));
            for(int i=0;i<time;i++){
                temp[i] = input[i];
            }
            free(input);
            input = temp;
        }

    }

    int k = time;

    for (int i = 0; i <= k; i++)
    {
        if ((i == k - i - 1) || (i > k - i - 1))
        {
            printf("a palindrome\n");
            break;
        }
        if (input[i] == input[k - i - 1])
            continue;
        else
        {
            printf("not a palindrome\n");
            break;
        }
    }
    return 0;
}