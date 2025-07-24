
# 🃏 Super Trunfo - Cidades do Brasil 🇧🇷

### Desenvolvido por Francisco Rafael franca de lima

---

## 📋 Descrição

Este é um jogo estilo **Super Trunfo** na linguagem em **C**, onde o jogador cadastra uma cidade com diversos atributos e disputa contra uma carta gerada automaticamente pelo computador.

A vitória é definida comparando **dois atributos à escolha do jogador** entre a sua carta e a carta do computador.

---

## 🎮 Como Jogar

1. O jogador informa os dados da sua carta (estado, cidade, população, área, PIB etc.).
2. O computador gera automaticamente uma carta com dados aleatórios:
   - Estado entre A e H (com nome real ou fictício)
   - Cidade correspondente ao estado
   - Código gerado automaticamente (ex: `C01`)
3. O jogador escolhe **dois atributos diferentes** para a comparação.
4. O jogo calcula a soma dos dois atributos e define o vencedor.
5. O resultado é exibido ao final da rodada.

---

## 🧠 Atributos disponíveis

| Letra | Atributo                |
|-------|--------------------------|
| A     | População                |
| B     | Área                     |
| C     | PIB                      |
| D     | Pontos Turísticos        |
| E     | Densidade Demográfica    |
| F     | Super Poder (cálculo especial) |

> O Super Poder é uma métrica fictícia que soma diversos indicadores para definir a "força" da cidade.

---

## 💻 Execução

### Requisitos:
- Compilador C (como `gcc`)
- Terminal

### Compilação:
```bash
gcc super_trunfo.c -o super_trunfo
```

### Execução:
```bash
./super_trunfo
```

---

## 🛠️ Tecnologias Usadas

- Linguagem C
- Biblioteca padrão (`stdio.h`, `stdlib.h`, `string.h`, `time.h`)

---

## 🧪 Exemplo de funcionamento

```
=== CADASTRO DA SUA CARTA ===
Estado (A-H): C
Código da carta: C01
Nome da cidade: Fortaleza
População: 2700000
Área: 314.9
PIB: 58000
Pontos turísticos: 5

=== ESCOLHA OS ATRIBUTOS ===
A - População
B - Área
C - PIB
D - Pontos Turísticos
E - Densidade Demográfica
F - Super Poder

Escolha o primeiro atributo: A
Escolha o segundo atributo: F

=== RESULTADO ===
Sua cidade: Fortaleza
Cidade do computador: Juazeiro do Norte
Atributo 1 (A): 2700000.00 x 454321.00
Atributo 2 (F): 580102.49 x 91201.13
Resultado: 🎉 Você venceu!
```

---

## 📌 Observações

- O jogo é de **uma rodada**.
- A cidade do computador é gerada com base em um estado aleatório entre A e H.
- A densidade demográfica e o PIB per capita são calculados automaticamente.
- O código da carta do computador é adaptado automaticamente com base na letra do estado (ex: "D01" para Distrito Federal).

---

## 📚 Autor

**Francisco Rafael**  
Estudante de Análise e Desenvolvimento de Sistemas  
Desenvolvido em julho de 2025
