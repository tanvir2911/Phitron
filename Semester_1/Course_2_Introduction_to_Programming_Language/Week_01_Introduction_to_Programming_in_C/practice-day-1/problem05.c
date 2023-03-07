#include <stdio.h>

int main()
{
    char character;

    printf("Type a character here: ");
    scanf("%c", &character);

    printf("ASCII value of %c = %d", character, character);

    return 0;
}




/*
#include <stdio.h>
#include <conio.h>
int main(){
    char c;
    //press a character or a key
    c = getch();
    printf("%d",c);
    return 0;
}
*/
