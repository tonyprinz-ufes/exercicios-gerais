#include <stdio.h>

int tam_palavra(char* palavra){
    int tam = 0;
    while (palavra[tam]!='\0')
    {
        tam= tam +1;
    }
    return tam;
}

void ImprimeInvertido(char* string){
    int tam = tam_palavra(string);
    if (tam != 0){
        printf("%c", string[tam-1]);
        string[tam-1] = '\0';
        ImprimeInvertido(string);
    }

}

int main (){
    char palavra[1000] = "palavra", lixo='a';
    // while( lixo != '\n' )
    while((scanf("%s", palavra)) == 1)
    {
        // scanf("%s%c", palavra,&lixo);
        ImprimeInvertido(palavra);
        printf (" ");
    }
    
    
    return 0; 
}