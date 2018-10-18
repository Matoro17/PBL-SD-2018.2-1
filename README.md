# PBL-SD-2018.2-1
Repositório referente ao primeiro problema da matéria de Sistemas Digitais do semestre 2018.1 da Universidade Estadual de Feira de Santana.

##Equipe
- Gabriel Silva de Azevedo
- Leandro Sampaio

##Instruções do projeto
    O arquivo de descrição da implementação do LCD está na pasta Verilog, com o nome de LCD_driver, já o arquivo base para o código em C se encontra na pasta "código C" com o nome de PBL-SD.c, sendo que estes arquivos estão apenas separados do projeto.
    Para executar o sistema na FPGA, é necessário utilizar o arquivo de compilação do projeto que se encontra dentro de "project\output_files\PBL-SD-1.sof", o qual está preparado para ser descarregado na FPGA EP4CE6E22C8N, a qual possuí o chip da cyclone IV e as próprias pinagens. Caso seja necessário alterar o projeto para outra placa é possivel abrir o arquivo do projeto que se encontra na pasta "project" e lá alterar as configurações e pinagens e configurações de placa do projeto.
    Utilizando o programmer e descarregando o projeto com o NIOS II na placa é possível executar o software em C com o Eclipse índigo presente no próprio Altera Quartus, a pasta do projeto de software em C encontra-se dentro da pasta "project\software\PBL-SD-1" sendo que esta mesma pasta está filiada com a pasta "project\software\PBL-SD-1_bsp" esta que possui os endereços de memoria para as entradas e saídas da placa.
##Informações extras
    Outras duas pastas presentes no repositório são para os diagramas e testes feitos, sendo estes "Esquematicas do projeto" e "Testes" respectivamente, sendo que dentro das esquemáticas existem dois pdf's com os datapath do projeto e a pasta de testes foi utilizada para efetuar o teste do código LCD separado do projeto principal.
