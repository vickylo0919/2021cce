#include <stdio.h>
char line [300];
int main()
{
    printf("請輸入你的字串: ");
    scanf("%s",line);

    ///int n;
    ///scanf("%d",&n); 要有&

    printf("剛剛輸入的是=%s=",line);
}
