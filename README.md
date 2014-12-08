INTRODUÇÃO AOS SISTEMAS DINÂMICOS
===

**TRABALHO APLICAÇÃO DE SISTEMAS DE EDOs**

Por defeito, o programa aplica o Método de Euler a um sistema de EDOs de forma a modelar a propagação do vírus da gripe por uma população.

S(t) representa o nº de indivíduos susceptíveis de serem infetados, i.e., os indivíduos aos quais o vírus ainda não se propagou;

I(t) representa o nº de indivíduos infetados pelo vírus;

Por defeito, o programa usa como parâmetros:

	S'(t) = -0.001 * S(t) * I(t)
	I'(t) = 0.001 * S(t) * I(t) - 0.3 * I(t)

Os seguintes valores são pedidos ao utilizador como input:
- tempo inicial
- número de indivíduos susceptíveis em t0
- número de indivíduos infetados em t0
- Intervalo de amostragem
- tempo final

No final, o programa exporta os valores para um ficheiro em Comma-Separated Values (CSV) para posteriormente ser processado e plotado pelo MATLAB, cujo script encontra-se em /src/isd.m

===
**UTILIZAÇÃO**

1) executar o comando "make" (sem aspas) a partir de /gripe/src/

2) correr o executável "gripe" com o comando "./gripe" (sem aspas) a partir de "/gripe/src/". Com isto, o ficheiro "valores.csv" será gerado.

3) correr o script "gripe.m" no MATLAB a partir de "/gripe/src/"" Com isto, os gráficos de ilustração da aplicação do método serão gerados.

4) caso necessário executar o comando "make clean" para remover os ficheiros gerados nos passos anteriores

===
Editar "funcs.h" e "funcs.c" de acordo com as ODEs pretendidas.
