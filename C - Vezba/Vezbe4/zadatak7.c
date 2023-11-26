#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to display the current state of the word
void displayWord(const char* word, const bool* guessed) {
    for (int i = 0; i < strlen(word); i++) {
        if (guessed[i]) {
            printf("%c ", word[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

// Function to display the gallows based on the number of incorrect guesses
void displayGallows(int incorrectGuesses) {
    const char* gallowsParts[] = {"|", "O", "/", "|", "\\", "/", "\\"};

    printf("\n");
    for (int i = 0; i < incorrectGuesses; i++) {
        printf("%s ", gallowsParts[i]);
    }
    printf("\n");
}

// Function to check if the word has been completely guessed
bool isWordGuessed(const bool* guessed, int wordLength) {
    for (int i = 0; i < wordLength; i++) {
        if (!guessed[i]) {
            return false;
        }
    }
    return true;
}

// Function to play the Gallows Game
void playGallowsGame(const char* word) {
    int wordLength = strlen(word);
    bool guessed[wordLength];
    memset(guessed, 0, sizeof(guessed));

    int incorrectGuesses = 0;
    char guessedLetter;

    printf("Welcome to the Gallows Game!\n");

    while (incorrectGuesses < 7 && !isWordGuessed(guessed, wordLength)) {
        printf("\n");
        displayWord(word, guessed);
        displayGallows(incorrectGuesses);

        printf("Enter a letter: ");
        scanf(" %c", &guessedLetter);

        bool letterFound = false;

        for (int i = 0; i < wordLength; i++) {
            if (word[i] == guessedLetter && !guessed[i]) {
                guessed[i] = true;
                letterFound = true;
            }
        }

        if (!letterFound) {
            incorrectGuesses++;
            printf("Incorrect guess! You have %d attempts left.\n", 7 - incorrectGuesses);
        }
    }

    printf("\n");
    displayWord(word, guessed);

    if (isWordGuessed(guessed, wordLength)) {
        printf("Congratulations, the word has been guessed: %s\n", word);
    } else {
        printf("Better luck next time. The word was: %s\n", word);
    }
}

int main() {
    const char* wordToGuess = "GALLOWS";

    playGallowsGame(wordToGuess);

    return 0;
}
