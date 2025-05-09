#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, computer;
    char *hands[] = {"グー", "チョキ", "パー"};

    // 乱数の種を設定
    srand(time(NULL));

    printf("じゃんけんをしましょう！\n");
    for(int i=0;i<20;i++){
    printf("0: グー, 1: チョキ, 2: パー\n");
    printf("あなたの手を入力してください: ");
    scanf("%d", &player);

    if (player < 0 || player > 2) {
        printf("無効な入力です。\n");
        return 1;
    }

    computer = rand() % 3;

    printf("あなた: %s\n", hands[player]);
    printf("コンピューター: %s\n", hands[computer]);

    if (player == computer) {
        printf("あいこです！\n");
        printf("もう一度！\n");
    } else if ((player == 0 && computer == 1) ||
               (player == 1 && computer == 2) ||
               (player == 2 && computer == 0)) {
        printf("あなたの勝ち！\n");
        return 0;
    } else {
        printf("あなたの負け！\n");
        return 0;
    }

}
    return 0;
}
