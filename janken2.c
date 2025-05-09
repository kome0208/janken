#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void) {
    char str[100];
    const char *abc = "グー";
    const char *dfg = "チョキ";
    const char *hij = "パー";

    printf("じゃんけん!\n");
    printf("グー、チョキ、パー。いずれかを入力しよう！\n");

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // 改行削除

    if (strcmp(str, abc) == 0 || strcmp(str, dfg) == 0 || strcmp(str, hij) == 0) {
        srand((unsigned int)time(NULL));  // ランダムの種を設定
        int r = rand() % 3;

        const char *hands[] = {"グー", "チョキ", "パー"};
        printf("相手の手は: %s\n", hands[r]);
    } else {
        printf("入力し直してください。\n");
    }

    return 0;
}


      

