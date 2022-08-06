#include <stdio.h>
main (){
    char ch;
    int nVowels =0;
    int nConsonants =0;
    int nOthers =0;
    printf("Enter a string: ");
    do {
        scanf("%c",&ch);
        ch = toupper(ch);
        if (ch >= 'A' && ch <= 'Z'){
           switch(ch){
                      case 'A' :
                      case 'E' :
                      case 'I' :
                      case 'O' :
                      case 'U' :  nVowels++;
                      break;
                    default: nConsonants++;
           }
        }
                else if (ch!=10) nOthers++;
    }
           while (ch!='\n');{
                 printf("Number of vowels = %d",nVowels);
                 printf("\nNumber of consonants = %d",nConsonants);
                 printf("\nNumber of other character = %d",nOthers);
           }
        getchar();
        return 0;
}

                      

