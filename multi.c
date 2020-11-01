
#include <stdio.h>
#include <string.h>

int check( char tango[]){
    
    //tango = strchr(tango, '\n');
    //printf("%s",tango);
    
    int tango_length = strlen(tango);

    // es系    
    char escheck[5][100] ={
        "s",
        "sh",
        "ch",
        "o",
        "x",
    };
    //printf("%s %lu",tango, strlen(tango));
    for( int i =  0 ; i < 6 ; i++){
        int check_moji_num = strlen(escheck[i]);
        if( strncmp(&tango[tango_length-check_moji_num] , escheck[i] , check_moji_num) == 0){
            printf("%s\n", strcat(tango , "es"));
            return 1;
        }
    }
    
    // ves --------------------------------------------
    char esves[2][100] ={
        "f",
        "fe",
    };
    for( int i =  0 ; i < 2 ; i++){
        int check_moji_num = strlen(esves[i]);
        if( strncmp(&tango[tango_length-check_moji_num] , esves[i] , check_moji_num) == 0){
            
            for( int j = tango_length-check_moji_num ; j < tango_length ;j++){
                tango[j] = '\0';
            }
            printf("%s\n", strcat(tango , "ves"));
            return 2;
        }
    }
    
    // ies
    char boin[5] ={'a','i','u','e','o'};
    if( tango[tango_length-1] == 'y' ){
        
        int iHit = 0;
        for( int i = 0 ; i < 5 ; i++){
            if( tango[tango_length-2]==boin[i] ){
                iHit = 1;
            }
        }
        //printf("%d",iHit);
        if( iHit==1 ){
            //これおかしいでしょ
            printf("%s\n", strcat(tango , "s"));
            return 0;
        }
        else{
            tango[tango_length-1] = '\0';
            printf("%s\n", strcat(tango , "ies"));
            return 3;
        }
    }
    printf("%s\n", strcat(tango , "s"));
    return 0;
}

int main(void){
    int i, n;
    char buf[1000];
    
    char moji[100];

    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d\n", &n);
    for (i=0; i<n; i++) {
        fgets(buf, sizeof(buf), stdin);
        sscanf(buf,"%s",moji);
        int type = check(moji);

    }
    return 0;
}

