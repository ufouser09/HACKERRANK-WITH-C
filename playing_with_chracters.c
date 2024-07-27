/*
Problem c�mlesinde bahsedildi�i gibi bir karakter, bo�luksuz bir string ve bir c�mle girmemiz ve her birini yeni bir sat�ra yazd�rmam�z gerekiyor.

Bir karakter girmek i�in,, ifade �udur: scanf("%c", &ch);.
Bir dize girmek i�in,, ifade �udur: scanf("%s", s);.
Bir c�mle girmek i�in,, ifade �udur: scanf("%[^\n]%*c", sen);.

A�a��daki kodda, ilan ettik, as char s[20], burada s dizisinin en fazla 20 karakter tutabilece�ini g�sterir.

C'de ��kt�n�n nas�l yazd�r�laca��n� bir �nceki al��t�rmada zaten ��renmi�tik. Bu zorlu�un nas�l ��z�lece�ini anlamak i�in a�a��daki koda bak�n.

Sorun Belirleyicinin kodu:
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char ch;
    char s[20], sen[100];
    scanf("%c", &ch);
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    return 0;
}
