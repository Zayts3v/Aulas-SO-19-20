# Guião 1

## Exercícios

### Ficheiros

* [Makefile](https://github.com/Zayts3v/Aulas-SO-19-20/blob/master/Guioes/guiao1/Makefile)
* [benchmark.sh](https://github.com/Zayts3v/Aulas-SO-19-20/blob/master/Guioes/guiao1/benchmark.sh) - Script para a pergunta 1
* [mycat.c](https://github.com/Zayts3v/Aulas-SO-19-20/blob/master/Guioes/guiao1/mycat.c)
* [mycp.c](https://github.com/Zayts3v/Aulas-SO-19-20/blob/master/Guioes/guiao1/mycp.c)
* [openfile.c](https://github.com/Zayts3v/Aulas-SO-19-20/blob/master/Guioes/guiao1/open_file.c) - Só para aprenderem a abrir um ficheiro
* [print_args.c](https://github.com/Zayts3v/Aulas-SO-19-20/blob/master/Guioes/guiao1/print_args.c) - Só para introdução
* [write_file.c](https://github.com/Zayts3v/Aulas-SO-19-20/blob/master/Guioes/guiao1/write_file.c)
* [readlnOne.c](https://github.com/Zayts3v/Aulas-SO-19-20/blob/master/Guioes/guiao1/readlnOne.c) - Read line que lê um carater de cada vez.
* [readln.c](https://github.com/Zayts3v/Aulas-SO-19-20/blob/master/Guioes/guiao1/readln.c)
* [readn1One.c](https://github.com/Zayts3v/Aulas-SO-19-20/blob/master/Guioes/guiao1/readn1One.c)
* [readn1.c](https://github.com/Zayts3v/Aulas-SO-19-20/blob/master/Guioes/guiao1/readn1.c)
*
*
*

### .1

Usam-se os ficheiros ```mycp.c``` e ```write_file.c``` e testa-se com o script. Neste momento, cria ficheiros de 1 byte, 10 bytes, 1 megabyte, 10 megabytes e 100 megabytes. O último é muito demorado, aconselho só correr até 10 ou 20 mbs, basta modificar a script.

### .2

Usa-se o ficheiro ```mycat.c``` e testa-se com ```./mycat```. O programa deve repetir todo o texto que o utilizador insere.

### .3

Usa-se o ficheiro ```readlnOne.c``` e testa-se com ```./readlnOne teste_reads.txt```.

### .4

Usa-se o ficheiro ```readln.c``` e testa-se com ```./readln teste_reads.txt```.

### .5

Usam-se os comandos ```time ./readn1One teste_reads.txt``` e ```time ./readn1 teste_reads.txt```para ver as diferenças de desempenhos. Pode-se testar individual com ```./readn1 teste_reads.txt``` ou ```./readn1One teste_reads.txt```. Se não tiver ficheiro *input*, o programa vai ler do *stdin*.

### .6

### .7
