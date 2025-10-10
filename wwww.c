/**文字を表記するためのプログラム**/

#include <stdio.h>

int main()
{
int tomoyuki =2999; 
    /**printfは、""の間に、表記したい文字を書くよ**/
    printf("ゴリラが%d匹脱走した.",tomoyuki);
    tomoyuki = tomoyuki-1000;
    printf("\nあ！ごめん！噓だ！本当は%d匹脱走した",tomoyuki);
    /**\nを入れると行が変わる**/
    /**;は行の終わりを意味する**/

    /**returnは、プログラミングの終わりを意味する**/
    return 0;
}