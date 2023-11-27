#include <stdio.h>


int main(){
    char c;
    
    printf("문자열 입력: ");

    while(scanf("%c",&c) != EOF){
  
        const int diff = 'a' - 'A';
        int ch = (int)c;
        if (ch >= 'A' && ch <= 'Z'){
            printf("%c",ch + diff); 
            }
        else if (ch >= 'a' && ch <= 'z'){
            printf("%c",ch - diff); 
                }
        else{

            printf("%c",c);
            }
            
    }
    
    return 0;
}