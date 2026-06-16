#include <stdio.h>
#include <windows.h>

struct Produto {
    char nome[50];
    int quantidade;
    float preco_unt;
};

int main() {
    SetConsoleOutputCP(CP_UTF8);
    struct Produto prod;
    
    FILE * arquivo = fopen("vendas.csv", "r");
    if (arquivo == NULL) {
        printf("Erro ao tentar abrir arquivo\n");
        return 1;
    }
    
    float totalvendas;
    
    printf("--* Relatorio de vendas *--\n\n");
    
    fscanf(arquivo, "%*[^\n]\n");
    
while (fscanf(arquivo, " %[^,],", prod.nome) != EOF) {
        
    fscanf(arquivo, "%d,", &prod.quantidade);
        
    fscanf(arquivo, "%f", &prod.preco_unt);
        
    totalvendas = prod.quantidade * prod.preco_unt;
        
    printf("Produto: %s | Quantidade: %d | Preço Unt: %.2f | Total: %.2f\n\n", prod.nome, prod.quantidade, prod.preco_unt, totalvendas);
    }
    
    fclose(arquivo);
    return 0;
}