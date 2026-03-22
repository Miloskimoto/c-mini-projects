# 🖥️ Mini Terminal em C

> Projeto desenvolvido para praticar os fundamentos da linguagem 

---

## 📌 Sobre o projeto

Este projeto consiste em um mini terminal que executa várias funções básicas em C, imprimindo diferentes padrões diretamente no output padrão usando apenas a função `write`.

O objetivo principal é consolidar a base da linguagem antes de avançar para conceitos mais complexos.

---

## 🚀 Funcionalidades

O programa executa:

* 🔤 Impressão do alfabeto (`a → z`)
* 🔄 Alfabeto em ordem reversa (`z → a`)
* 🔢 Números pares
* 🔢 Números ímpares
* 🔗 Combinações de letras (`ab, ac, ad...`)
* 🔁 Impressão de número invertido

---

## 🧠 Conceitos abordados

* Escrita com `write`
* Estruturas de repetição (`while`)
* Condicionais (`if`)
* Operadores aritméticos (`%`, `/`)
* Conversão de inteiros para caracteres (`+ '0'`)
* Organização de código com múltiplos arquivos
* Uso de header (`.h`)

---

## 📁 Estrutura do projeto

```
.
├── main.c
├── ft.h
├── ft_print_alphabet.c
├── ft_print_reverse_alphabet.c
├── ft_print_even_numbers.c
├── ft_print_odd_numbers.c
├── ft_print_comb.c
├── ft_print_number_reverse.c
```

---

## ⚙️ Como compilar e executar

### Compilar:

```bash
gcc *.c -o mini_terminal
```

### Executar:

```bash
./mini_terminal
```

---

## 🖥️ Exemplo de saída

```
=== ALPHABET ===
abcdefghijklmnopqrstuvwxyz

=== REVERSE ===
zyxwvutsrqponmlkjihgfedcba

=== EVEN ===
0, 2, 4, 6, 8

=== ODD ===
1, 3, 5, 7, 9

=== COMBINATIONS ===
ab, ac, ad, ..., yz

=== REVERSE NUMBER ===
1234 -> 4321
```

---

## 🎯 Objetivo de aprendizado

Este projeto foi desenvolvido com foco em:

* Construir uma base sólida em C
* Entender o funcionamento de loops e condições
* Trabalhar diretamente com output de baixo nível (`write`)
