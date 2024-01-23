#include <stdio.h>
#include <string.h>

// function declaration
int check_character(int str_len, char input_word[1024], char input_char);
int draw_input_field(int str_len);

int main()
{
    // get input
    int str_len;
    char input_word[1024];
    char input_char;

    printf("Enter your word: \n");
    scanf("%s", input_word);

    while (1)
    {

        printf("Enter input char\n");
        scanf(" %c", &input_char);

        str_len = strlen(input_word);

        printf("\n");

        draw_input_field(str_len);
        check_character(str_len, input_word, input_char);
    }

    return 0;
}

int draw_input_field(int str_len)
{
    for (int i = 0; i < str_len; i++)
    {
        printf("_ ");
    }
}

int check_character(int str_len, char input_word[1024], char input_char)
{
    if (strchr(input_word, input_char) != NULL)
    {
        printf("Success\n");
        return input_char;
    }
    else
    {
        printf("No Success\n");
        return input_char;
    }

    return 0;
}
