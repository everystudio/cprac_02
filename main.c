
#include <stdio.h>
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！

    char str[1000];
    fgets(str, sizeof(str), stdin);
    
    int parent_a = 0;
    int parent_b = 0;
    sscanf(str , "%d %d", &parent_a , &parent_b);
    
    //printf("%d\n",parent_a);
    //printf("%d\n",parent_b);
    
    fgets(str, sizeof(str), stdin);
    
    int loop_num = 0;
    sscanf(str,"%d" , &loop_num);
    //printf("%d",loop_num);
    
    for( int i = 0 ; i < loop_num ;i++){
        fgets(str, sizeof(str), stdin);
        int child_a = 0;
        int child_b = 0;
        sscanf(str , "%d %d", &child_a , &child_b);
        
        int is_high = 0;
        
        if( child_a < parent_a){
            is_high = 1;
        }
        else if( child_a == parent_a ){
            if( parent_b < child_b){
                is_high = 1;
            }
        }
        else {
            // 負け
        }
        
        if( is_high ){
            printf("High\n");
        }
        else {
            printf("Low\n");
        }
        
        
    }
    
    
    return 0;
}

