// Grafos
//  - É um modelo matemático que representa relações entre objetos
//  - Utilizado na definição e/ou resolução de problemas de diversas áreas
//      - Computação
//          - Forma de solucionar problemas computáveis
//          - Buscam desenvolvimento de algoritmos mais eficientes
//  - Definição - G = (V, A)
//      - V -> Conjunto de Vértices
//          - Representação das Entidades
//              - Depende da natureza do problema
//          - São adjacentes se existir uma aresta conectando eles
//      - A -> Conjunto de Arestas
//          - Também chamado de 'arco'
//          - Está associado a dois vértices -> (v1, v2)
//          - Faz a ligação entre eles
//      - Exemplo
//          - G(V, A)
//              - V = {1, 2, 3, 4}
//              - A = {{1, 2}, {1, 4}, {2, 3}, {3, 4}}
//  - Tipos de Grafos
//      - Direcionado ou Digrafo
//          - Existe uma orientação quanto ao sentido da aresta
//      - Não Direcionado
//          - Não existe orientação quanto ao sentido da aresta
//  - Grau do Vértice
//      - Número de aresta que chegam ou partem dele
//      - Nos Digrafos
//          - Grau de Entrada
//              - Arestas que chegam
//          - Grau de Saída
//              - Arestas quem saem
//  - Laço
//      - Vértice de Partida é o mesmo Vértice de Chegada
//  - Caminho
//      - Sequência de vértices de modo que existe sempre uma aresta ligando o
//          vértice anterior com o seguinte
//  - Caminho Simples
//      - Nenhum dos vértices no caminho se repete
//  - Comprimento do caminho
//      - É o número de arestas que o caminho usa
//  - Ciclo
//      - Caminho começa e termina no mesmo vértice
//  - Grafo acíclico
//      - Não contém "ciclos simples"
//          - Cada vértice aparece apenas uma vez cada
//  - Arestas múltiplas ou Multigrafos
//  - Permite mais de uma aresta conectando o mesmo par de vértices
//     - Nesse caso, arestas são ditas paralelas
//  - Grafo Trivial
//      - É um grafo com um único vértice e sem arestas
//  - Grafo Simples
//      - Grafo não direcionado, sem laços e sem arestas paralelas
//  - Grafo Completo
//      - Grafo simples onde cada vértice se conecta com todos os outros vértices
//  - Grafo Regular
//      - É um grafo onde todos os vértices possuem o mesmo grau
//  - SubGrafo
//      - Um grafo "Gs(Vs, As)" é chamado de SubGrafo de "G(V, A)" se:
//          - "Vs" está contido em "V"
//          - "As" está contido em "A"
//  - Grafo bipartido
//      - Grafo cujos vértices podem ser divididos em dois conjuntos
//      - Arestas ligam os vértices que estão em conjuntos diferentes, nunca ligando
//          vértices do mesmo conjunto
//  - Grafo Conexo
//      - Existe um caminho partindo de qualquer vértice até qualquer outros vértice
//  - Grafo Desconexo
//      - Não existe um caminho ligando dois vértices selecionados
//  - Grafos Isoformos
//      - Dois grafos, G1(V1, A1) e G2(V2, A2), são isomorfos se existe uma função
//          que faça o mapeamento de vértices e arestas de modo que os dois grafos
//          se tornem coincidentes.
//          - É um mesmo grafo, aparentemente diferente por estar nomeado de modo diferente
//  - Grafo Ponderado
//      - As arestas do grafo possuem Peso
//  - Grafo Hamiltoniano
//      - Grafo que possui ao menos um caminho que visita cada Vértice apenas uma vez
//      - Detectar um grafo Hamiltoniano é uma terefa muito difícil
//  - Ciclo Hamiltoniano
//      - Ciclo que visita cada vértice apenas uma vez
//  - Grafo Euleriano
//      - Grafo que possui um ciclo que visita cada aresta apenas uma vez
//  - Grafo Semi-Euleriano
//      - Grafo que possui um caminho que visita cada aresta apenas uma vez
//  - Representação de Grafo (Depende da aplicação)
//      - Matriz de Adjacência
//          - Grafo muito conectado
//          - Matriz N x N
//              - N -> Número de vértices
//          - Alto custo computacional
//              - O(n²)
//          - Aresta é representado por uma "marca" na posição i,j da matriz
//      - Lista de Adjacência
//          - Grafo muito esparso (espalahdo)
//          - Possui uma Lista, estática ou Dinâmica
//              - Cada posição da lista representa um vértice
//              - Cada vértice da lista aponta para todos os vértices que ele tem conexão
//          - Será utilizado ListaGrafo.c e ListaGrafo.h para representar a Lista
//  - Busca em Grafo
//      - Consiste em explorar um grafo
//      - Processo sistemático de como caminhos por seus Vértices e Arestas
//      - Depende do vértice inicial
//      - Pode ser necessário visistar todos os vértices, alguns problemas podem ser
//          resolvidos visitando apenas um subconjunto dos vértices
//      - Principais tipos de Busca
//          - Busca em profundidade
//              - Partindo de um vértice inicial, é explorado o máximo possível cada um
//                  dos ramos antes de retroceder ("BackTracking")
//              - Quando Utilizar
//                  - Encontrar componentes conectados e fortemente conectados
//                  - Ordenação topológica de um grafo
//                  - Resolver quebra-cabeças (ex. Labirinto)
//          - Busca em Largura
//              - Partindo de um vértice inicial, é explorado todos os vértices visinhos.
//                  Em seguida, o processo é repetido para cada vértice vizinho, visitando
//                  os vértices ainda inexplorados
//              - Quando Utilizar
//                  - Achar componentes conectados
//                  - Achar todos os vértices conectados a apenas 1 componente
//                  - Achar o menor caminho entre dois vértices
//                  - Testar Bipartição em Grafos
//          - Busca pelo Menor Caminho
//              - Partindo de um vértice inicial, calcula a menor distância desse vértice a
//                  todos os demais
//              - Agoritmo de Dijkstra
//                  - Resolve esse problema para grafos "dirigido" ou "não dirigido" com
//                      arestas de peso "não negativo"

#include "stdlib.h"
#include "stdio.h"
#include "ListaGrafo.h"

int main(){
    // Grafo *gr;
    // gr = cria_grafo(10, 7, 0);
    // insere_aresta(gr, 0, 1, 0, 0);
    // insere_aresta(gr, 1, 2, 0, 0);
    // insere_aresta(gr, 2, 5, 0, 0);
    // insere_aresta(gr, 5, 3, 0, 0);
    // insere_aresta(gr, 3, 4, 0, 0);
    // remove_aresta(gr, 3, 4, 0);
    // remove_aresta(gr, 5, 3, 0);
    // libera_grafo(gr);

    Grafo *gr;
    int eh_digrafo = 1;
    gr = cria_grafo(5, 5, 0);
    insere_aresta(gr, 0, 1, eh_digrafo, 0);
    insere_aresta(gr, 1, 3, eh_digrafo, 0);
    insere_aresta(gr, 1, 2, eh_digrafo, 0);
    insere_aresta(gr, 2, 4, eh_digrafo, 0);
    insere_aresta(gr, 3, 0, eh_digrafo, 0);
    insere_aresta(gr, 3, 4, eh_digrafo, 0);
    insere_aresta(gr, 4, 1, eh_digrafo, 0);
    int visita_profundidade[5];
    busca_profundidade(gr, 0, visita_profundidade);
    int visita_largura[5];
    busca_largura(gr, 0, visita_largura);
    int anterior_menor_caminho[5];
    float distancia_menor_caminho[5];
    menor_caminho(gr, 0, anterior_menor_caminho, distancia_menor_caminho);
    libera_grafo(gr);
    return 0;
}
