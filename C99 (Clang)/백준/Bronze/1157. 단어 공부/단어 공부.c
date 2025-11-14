#include <stdio.h>

int main(void) {
  int alpabet[26] = {0}, i=0, max_num;  
  char word[1000001];
  int spc;
  //printf("%d", 'a');  // A :65, a: 97
  scanf("%s", word);

  while(word[i]) {  //사용된 알파벳의 갯수 카운팅
    if (word[i] < 96) {
      alpabet[word[i]-65] += 1;
    } else alpabet[word[i]-97] += 1;
    i++;
  }

  i=0;
  max_num = alpabet[0];   //가장 큰 수 찾기기
  while (i != 26) {
    if (max_num < alpabet[i]) {
      max_num = alpabet[i];
      spc = i;
    }
    i++;
  }

  i=0;
  while (i != 26) {
    if (max_num == alpabet[i] && spc != i) {
      printf("?");
      return 0;
    }
    i++;
  }

  printf("%c", spc+65);
  
  return 0;
}
