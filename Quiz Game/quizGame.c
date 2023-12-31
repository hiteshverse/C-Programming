#include <stdio.h>
#include <ctype.h>

int main()

{
    int guess, score;
    guess = 0;
    score = 0;
    char questions[][100] = {"1. Who's the Prime Minister of India : ",
                             "2. What's the capital of Rajasthan : ",
                             "3. Name of Indian National Flag : "};

    char options[][100] = {"A. Narendra Modi", "B. Rahul Gandhi", "C. Rajiv Gandhi", "D. Vijay Malya",
                           "A. Bikaner", "B. Bharatpur", "C. Jaipur", "D. Kota",
                           "A. Chinese", "B. Faang", "C. Netflix", "D. Tiranga"};

    char answers[3] = {'A', 'C', 'D'};
    int sizeOfQuestions = sizeof(questions) / sizeof(questions[0]);

    for (int i = 0; i < sizeOfQuestions; i++)
    {
        printf("**************************************\n");
        printf("%s\n", questions[i]);
        printf("**************************************\n");

        for (int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("%s\n", options[j]);
        }

        printf("Guess: ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if(guess ==  answers[i]){
            printf("CORRECT!!\n");
            score++;
        } else{
            printf("WRONG :(\n");
        }
    }

    printf("Final Score : %d/%d", score, sizeOfQuestions);
    return 0;
}