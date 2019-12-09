#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void Palindrome(char str[], int i)
{
    int l = 0;
    int h = strlen(str) - 1;

    while (h > l){
        if (str[l++] != str[h--]){
            printf("NO");
            return;
        }
    }
    printf("YES");
    return;
}

int main()
{
    /*int N,X1,Y1,X2,Y2;
    scanf("%d%d%d%d%d",&N, &X1, &Y1, &X2, &Y2);*/
    int i;
    char c, array[10000];

    i = 0;

    while ((c = getchar()) != '\n'){
        if (((c>0x41) && (c<0x5a)) || ((c > 0x61) && (c < 0x7a))){
            array[i] = c;
            i++;
        }
    }
    for(char *p = array;*p;++p) *p=*p>0x40&&*p<0x5b?*p|0x60:*p;
    Palindrome(array, i);
}
