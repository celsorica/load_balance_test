# load_balance_test
Os testes foram escritos utilizando a ferramenta Google Test.
É necessário baixa-la no site : https://github.com/google/googletest.git

1 - Baixe a ferramenta.
git clone https://github.com/google/googletest.git

2 - Entre na pasta googletest o qual foi baixada e compile ela com ajuda do cmake
cd googletest
cmake .

Agora vai existir uma pasta lib com as biblitecas estaticas do googletest

3 - Abra o projeto do load_balance_test no QTCreator e compile

A estrutura dos projetos ficaram assim :

$HOME/projetos/
              /load_balance
              /load_balance_test
$HOME/programas/
               /googletest
               
Mantendo essa estrutur deve-se conseguir compilar os projetos sem maiores problemas.

