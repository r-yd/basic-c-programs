#include <stdio.h>

// Function to encrypt
void encrypt(char word[], int key) {
    int i = 0;
    while (word[i] != '\0') {
        // Encrypt lowercase letters
        if (word[i] >= 'a' && word[i] <= 'z') {
            word[i] = (word[i] - 'a' + key) % 26 + 'a';
        }
        // Encrypt uppercase letters
        else if (word[i] >= 'A' && word[i] <= 'Z') {
            word[i] = (word[i] - 'A' + key) % 26 + 'A';
        }
        i++;
    }
}

// Function to decrypt 
void decrypt(char word[], int key) {
    int i = 0;
    while (word[i] != '\0') {
        // Decrypt lowercase letters
        if (word[i] >= 'a' && word[i] <= 'z') {
            word[i] = (word[i] - 'a' - key + 26) % 26 + 'a';
        }
        // Decrypt uppercase letters
        else if (word[i] >= 'A' && word[i] <= 'Z') {
            word[i] = (word[i] - 'A' - key + 26) % 26 + 'A';
        }
        i++;
    }
}

int main() {
    char word[100]; //max input charachters it can take is 100, without spaces.
    int key;
    int choice;

    printf("Enter a single word: ");
    scanf("%s", word);  // Reads one word only(without spaces 100 characters)

    printf("Enter the key (shift value): ");
    scanf("%d", &key);

    printf("Choose option:\n");
    printf("1. Encrypt\n");
    printf("2. Decrypt\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        encrypt(word, key);
        printf("Encrypted word: %s\n", word);
    } else if (choice == 2) {
        decrypt(word, key);
        printf("Decrypted word: %s\n", word);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
