#include <stdio.h>

int main(void){ 

        int idade;
        // bool repetir;
        
        printf("Digite idade: ");
        scanf("%d", &idade);
        if ( idade >= 18 ) {
            printf("maior de idade");
            
            if (idade >= 60){
                printf("maior q 60");
            }  
        }
    
        else {
            printf("menor de idade");
        }
        
    return 0;
}