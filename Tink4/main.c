#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X1, Y1, X2, Y2;
    scanf("%d%d%d%d", &X1, &Y1, &X2, &Y2);

    if(((X1>=X2)&&(Y1>=Y2))||((X1>=Y2)&&(Y1>=X2))){
        printf("YES");
        return 0;
    }
    printf("NO");
    return 0;
}
