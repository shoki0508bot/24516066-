#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char password[100];
    int hasUpper = 0;
    int hasLower = 0;
    
    printf("パスワードを入力してください:");
    scanf("%s" , password);
    
    // 文字列を1文字ずつチェック
    for (int i = 0; i < strlen(password);i++)
    {
        if (isupper(password[i]))
        {
            hasUpper = 1;
        }
        if (islower(password[i]))
        {
            hasLower = 1;
        }
    }
    
    // 判定
    if (strlen(password) >= 8 && hasUpper && hasLower)
    {
        printf("このパスワードは強いパスワードです！\n");
    }
    else
    {
        printf("弱いパスワードです。\n");
        printf("改善点:\n");
        
        if (strlen(password) < 8)
        {
            printf("・8文字以上にしてください。\n");
        }
        if(!hasUpper)
        {
            printf("・大文字(A~Z)を1文字以上含めてください。\n");
        }
        if(!hasLower)
        {
            printf("・小文字(a~z)を1文字以上含めてください。\n");
        }
    }

    return 0;
}