#include <stdio.h>
#include <string.h>

int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！

    char str[1000];
    fgets(str, sizeof(str), stdin);
    
    int a=0;
    int b=0;
    int c=0;
    char op[10];
    char equal[10];
    char x[10];
    int type = 0;
    int answer = 0;
    
    char *p = strchr(str,'x');
    //printf("%s\n", str);
    //printf("%d\n", p-str);
    
    switch( p-str)
    {
        case 0:
            sscanf(str,"%s %s %d %s %d",x , op , &b , equal , &c);
            if( strcmp(op,"+") == 0){
                answer = c - b;
            }   
            else {
                answer = c + b;
            }
            break;
        case 4:
            sscanf(str,"%d %s %s %s %d",&a , op , x , equal , &c);
            answer = c - a;
            if( strcmp(op,"+") == 0){
            }
            else {
                answer *= -1;
            }
            break;
        case 8:
            sscanf(str,"%d %s %d %s %s",&a , op , &b , equal , x);
            if( strcmp(op,"+") == 0){
                //printf("aaa");
                answer = a + b;
            }   
            else {
                //printf("bbb");
                answer = a - b;
            }
            break;
        default:
            break;
    }
    /*
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%s\n", op);
    printf("%s\n", x);
/*    
*/
    printf("%d\n", answer);
    
    return 0;
}
