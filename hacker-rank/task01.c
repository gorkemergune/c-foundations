#include <stdio.h>
#include <string.h>

//  Pythondaki .strip() --> cümledeki boşlukları kaldırmak, bu fonksiyonu C'de yazmak
// 
//    char s[100];
//    scanf(" %[^\n]", s);
//
//   fgets(s, 100, stdin);
//   s[strcspn(s, "\n")] = '\n';
//   
//   int i = 0;
//   while (s[i] != '\0') {
//       if (s[i] != ' ') {
//            printf("%c", s[i]);
//       } i++;
//    }
//




int main() {
    
    char s[100];
    scanf(" %[^\n]", s);


    fgets(s, sizeof(s), stdin);
    
    printf("Hello, World!\n%s", s);
    
    
    return 0; 
}