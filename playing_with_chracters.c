/*
Problem cümlesinde bahsedildiði gibi bir karakter, boþluksuz bir string ve bir cümle girmemiz ve her birini yeni bir satýra yazdýrmamýz gerekiyor.

Bir karakter girmek için,, ifade þudur: scanf("%c", &ch);.
Bir dize girmek için,, ifade þudur: scanf("%s", s);.
Bir cümle girmek için,, ifade þudur: scanf("%[^\n]%*c", sen);.

Aþaðýdaki kodda, ilan ettik, as char s[20], burada s dizisinin en fazla 20 karakter tutabileceðini gösterir.

C'de çýktýnýn nasýl yazdýrýlacaðýný bir önceki alýþtýrmada zaten öðrenmiþtik. Bu zorluðun nasýl çözüleceðini anlamak için aþaðýdaki koda bakýn.

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
