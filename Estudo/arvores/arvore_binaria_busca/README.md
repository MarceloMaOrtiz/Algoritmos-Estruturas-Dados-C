 Árvore Binária de Busca
  Propriedades
   - Valor do nó determinada a posição do nó da Árvore baseada no nó pai
    - Valores menores ficam a esquerda
    - Valores maiores ficam a direita
   - Não existe valores repetidos

  Principais Operações
   - Inserção
    - Método
     - V < Raiz vai para esquerda
     - V > Raiz vai para direita
     - Com recursão ou sem recursão
     - Caso especial
      - Arvore Vazia
       - Insere na árvore
    - Caso médio -> O(log n)
    - Pior caso -> O(n)
   - Remoção
    - Método
     - Verificar se a árvore está vazia
      - Removendo o último nó a árvore fica vazia
     - Existem 3 tipos, que trabalham juntos
      - 0 filhos
       - Remover o nó
      - 1 filho
       - Remover o nó
       - Linkar no nó filho
      - 2 filhos
       - Remover o nó
       - Pegar o filho da sub-árvore a esquerda que está mais a direita
    - Caso médio -> O(log n)
    - Pior caso -> O(n)
   - Consulta
    - Método
     - Pode ser recursivo ou não
     - Primeiro compare o valor com a raiz
     - Caso valor < raiz vai para esquerda
     - Caso valor > raiz vai para direita
    - Caso médio -> O(log n)
    - Pior caso -> O(n)