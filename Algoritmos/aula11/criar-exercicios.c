#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    int qtd;
    char nome_arquivo[30];

    printf("Quantidade de arquivos: ");
    scanf("%d", &qtd);

    for (int i = 1; i <= qtd; i++) {
        sprintf(nome_arquivo, "exerc-%dL08.html", i);

        arquivo = fopen(nome_arquivo, "w");
        if (arquivo == NULL) {
            perror("Erro ao criar arquivo");
            return 1;
        }

        fprintf(arquivo,
            "<!DOCTYPE html>\n"
            "<html lang=\"pt-br\">\n"
            "<head>\n"
            "    <meta charset=\"UTF-8\">\n"
            "    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n"
            "    <title>Exercício %d</title>\n"
            "</head>\n"
            "<body>\n"
            "    \n"
            "</body>\n"
            "</html>\n",
            i
        );

        fclose(arquivo);

        printf("Arquivo %s criado\n", nome_arquivo);

    }

    return 0;
}