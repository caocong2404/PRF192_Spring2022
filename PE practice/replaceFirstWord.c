#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
  
char *replaceFirstWord(char *str,char *oldstr,char *newstr){
    char bstr[strlen(str)];
    memset(bstr,0,sizeof(bstr));
    int i;
    int check = 0;
    for(i = 0;i < strlen(str);i++){
        if(!strncmp(str+i,oldstr,strlen(oldstr)) && check == 0){
            strcat(bstr,newstr);
            i += strlen(oldstr) - 1;
            check = 1;
        }
		else
		{
            strncat(bstr,str + i,1);
        }
    }
    strcpy(str,bstr);
    return str;
}
char *replaceAllWord(char *str,char *oldstr,char *newstr){
    char bstr[strlen(str)];
    memset(bstr,0,sizeof(bstr));
    int i;
    for(i = 0;i < strlen(str);i++){
        if(!strncmp(str+i,oldstr,strlen(oldstr))){
            strcat(bstr,newstr);
            i += strlen(oldstr) - 1;
        }
		else
		{
            strncat(bstr,str + i,1);
        }
    }
    strcpy(str,bstr);
    return str;
}
// Driver Program 
int main() 
{ 
    char str[] = "tren tinh ban duoi tinh yeu"; 
    char oldText[] = "tinh"; 
    char replaceText[] = "yeu"; 
  
    printf("Old string: %s\n", str); 
    replaceAllWord(str, oldText, replaceText); 
    printf("New String: %s\n", str); 
}
