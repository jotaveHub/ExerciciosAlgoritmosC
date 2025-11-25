# Exercícios — Algoritmos em C

Este repositório reúne exercícios e soluções em linguagem C para praticar algoritmos. Ele foi pensado para estudo pessoal, revisões e para compartilhar soluções claras.

## Sobre
Aqui você encontra exercícios resolvidos em C organizados por tópicos (ex.: vetores, matrizes, ordenação, recursão). Cada exercício deve ter:
- arquivo fonte (.c) compilável.

## Requisitos
- Compilador C (gcc, clang ou similar)
- Make (opcional, recomendado)
- Sistema operacional com terminal (Linux, macOS ou Windows + WSL / MinGW)

Recomendado usar padrão C11 ou superior.

## Estrutura sugerida
Obs.: adapte conforme a sua organização atual.
- /exercicios or /src — código fonte (.c)
- /include — cabeçalhos (.h) (se aplicável)
- /bin — binários/execs gerados
- /tests — entradas e saídas de teste (opcional)
- README.md — este arquivo

Exemplo:
```
ExerciciosAlgoritmosC/
├── src/
│   ├── ex01_soma.c
│   ├── ex02_vetor.c
│   └── ...
```

## Como compilar e executar
Compilação simples (arquivo único):
```bash
# compilar
gcc -std=c11 -Wall -Wextra -O2 -o bin/ex01 src/ex01_soma.c

# executar
./bin/ex01
```

Compilar com redirecionamento de arquivo de entrada:
```bash
./bin/ex01 < tests/ex01_input.txt
```

## Contato
Autor: jotaveHub  
GitHub: https://github.com/jotaveHub
