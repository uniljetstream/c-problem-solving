#include <stdio.h>

int main(){
    char str[1000000];
    int count=0;
    int in_words=0;

    scanf("%[^\n]", str);

    for(int i = 0;str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            in_words = 0;
        } else {
            if (in_words == 0) {
                count++;
                in_words = 1;
            }
        }
    }
    printf("%d\n",count);
}