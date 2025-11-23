#include <stdio.h>

int repeated(char *word)
{
        int alphabet[26];
        for (int i = 0; i < 26; i++)
        {
                alphabet[i] = 0;
        }

        for (int i = 0; word[i] != '\0'; i++)
        {
                if (alphabet[word[i] - 'a'] == 0)
                {
                        alphabet[word[i] - 'a']++;
                }
                else if (alphabet[word[i] - 'a'] != 0 && word[i - 1] == word[i])
                {
                        alphabet[word[i] - 'a']++;
                }
                else if (alphabet[word[i] - 'a'] != 0 && word[i - 1] != word[i])
                {
                        return 0;
                }
                // for (int j = 0; j < 26; j++)
                // {
                //         printf("%d ", alphabet[j]);
                // }
                // printf("\n");
        }
        return 1;
}

int main()
{
        int n = 0, count = 0;
        char word[101];
        scanf("%3d", &n);
        for (int i = 0; i < n; i++)
        {
                scanf("%s", word);
                count += repeated(word);
        }

        printf("%d", count);
}