# SUPER TRUNFO EM C [LÓGICA]
  </div>
  <div style="display: inline_block"><br>
  <img align="right" height="600" width="600" src="https://www.google.com/url?sa=i&url=https%3A%2F%2Fwww.androidlista.com.br%2Fitem%2Fandroid-apps%2F531057%2Fsuper-trunfo-battle-cards%2F&psig=AOvVaw0R3TNxHr2dnflatsf0XFF6&ust=1744593394455000&source=images&cd=vfe&opi=89978449&ved=0CBQQjRxqFwoTCMjGmf_q04wDFQAAAAAdAAAAABAc" />
</div>

🛠️ Pré-requisitos
- Tenha o compilador C instalado.
- No Linux/macOS, o GCC geralmente já está disponível ou pode ser instalado com um comando.

- Linux (Debian/Ubuntu): sudo apt install build-essential
- macOS: xcode-select --install
- Windows: Use o MinGW ou o WSL com GCC

1. Abra o terminal ou prompt de comando
2. Navegue até a pasta onde está seu arquivo
3. Compile com o GCC
```shell 
cd /caminho/para/o/arquivo
```
```shell 
gcc programa.c -o programa
```
4. Execute o programa compilado
No Linux/macOS:
```shell 
./programa'''
```
No Windows:
```shell 
programa.exe'''
```

# INSTRUÇÕES
1) USE DUAS CARTAS DE SUPER TRUNFO PARA JOGAR
2) DIGITE OS ATRIBUTOS, UMA CARTA POR VEZ:
-   LETRA DA CARTA (A,B,C,D,E,F,G,H)
-   CODIGO DA CARTA (EX: A00, A01,A02,103...)
-   NOME DO PAÍS DA CARTA
-   POPULAÇÃO
-   AREA
-   PIB
-  NUMERO DE PONTOS TURÍSTICOS
3) AO ENTRAR NO COMPARADOR DE CARTAS, DIGITE UM NUMERO DE 1 A 6
PARA ESCOLHER O PRIMEIRO ATRIBUTO, E DEPOIS O SEGUNDO.

AO FINAL ELE APRESENTARÁ A CARTA VENCEDORA!
   
   



























# ⚠️ Importante!!!
Você pode escolher qualquer um dos desafios para desenvolver. Sinta-se à vontade para começar pelo desafio que mais lhe interessa.

# Desafio Super Trunfo - Países - Comparação das Cartas

Bem-vindo ao desafio "Super Trunfo - Países"! Neste projeto, você desenvolverá um sistema para comparar cartas baseadas em atributos de cidades. O desafio é dividido em três níveis: Novato, Aventureiro e Mestre. Cada nível adiciona novas funcionalidades e complexidades, permitindo um aprendizado progressivo.

## 🏅 Nível Novato

No nível Novato, você começará implementando a lógica básica de comparação entre cartas utilizando estruturas de decisão `if` e `if-else`.

### 🚩 Objetivos:
- **Cadastro de Cartas:** O sistema permitirá ao usuário cadastrar cartas de cidades, incluindo informações como estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos.
- **Comparação de Cartas:** O sistema comparará os atributos de duas cartas e determinará a vencedora com base em uma propriedade específica (população, área, PIB, etc.), escolhida no código.
- **Exibição de Resultados:** Após a comparação, o sistema exibirá qual carta venceu com base na regra: maior valor vence, exceto em densidade populacional, onde o menor valor é o vencedor.

### 📥 Entrada de Dados:
- Os dados das cartas serão inseridos manualmente via terminal.
- O sistema solicitará interativamente as informações de cada carta.

### 📤 Saída de Dados:
- Após o cadastro, as propriedades da cidade serão exibidas de forma organizada.
- O resultado da comparação será mostrado, indicando a carta vencedora.

---

## 🏅 Nível Aventureiro

No nível Aventureiro, você expandirá o sistema para incluir a comparação aninhada e a criação de um menu interativo usando `switch`.

### 🆕 Diferença em relação ao Nível Novato:
- **Menu Interativo:** O usuário poderá escolher diferentes atributos para comparação através de um menu.
- **Comparação Aninhada:** Implementação de lógica de comparação mais complexa, utilizando estruturas aninhadas para tomar decisões baseadas em múltiplos atributos.

### 🚩 Novas Funcionalidades:
- **Cadastro de Cartas:** Similar ao nível Novato, com a adição de comparação de múltiplos atributos.
- **Menu Interativo:** Uso de `switch` para criar um menu que permite ao jogador escolher os atributos a serem comparados.
- **Exibição de Resultados:** O sistema exibirá o resultado da comparação, indicando qual carta venceu e qual atributo foi utilizado.

---

## 🏅 Nível Mestre

No nível Mestre, o desafio se intensifica com a adição de funcionalidades avançadas, como menus dinâmicos e lógica de decisão complexa com operadores ternários.

### 🆕 Diferença em relação ao Nível Aventureiro:
- **Escolha de Dois Atributos:** O usuário poderá escolher dois atributos para comparação entre as cartas.
- **Lógica de Decisão Complexa:** Implementação de estruturas de decisão aninhadas e encadeadas, além do uso de operadores ternários para determinar a carta vencedora.
- **Menus Dinâmicos:** Os menus serão dinâmicos, permitindo uma navegação fluida entre as opções de comparação.

### 🚩 Novas Funcionalidades:
- **Comparação de Dois Atributos:** O sistema comparará dois atributos simultaneamente para determinar a carta vencedora.
- **Lógica Avançada:** Uso de operadores ternários e lógica aninhada para lidar com comparações complexas.
- **Empates:** O sistema será capaz de lidar com empates, exibindo mensagens apropriadas.
- **Exibição de Resultados:** Exibição dos resultados das comparações de forma clara e interativa.

---

## 📋 Requisitos Funcionais Comuns
- **Cadastro de Cartas:** O sistema deve permitir o cadastro de cartas com as informações necessárias.
- **Comparação:** O sistema deve comparar as cartas e determinar a vencedora com base nas regras estabelecidas.
- **Exibição de Resultados:** Os resultados devem ser exibidos de forma clara, indicando a carta vencedora.

## 📌 Requisitos Não Funcionais Comuns
- **Usabilidade:** A interface do usuário deve ser simples e intuitiva.
- **Performance:** O sistema deve executar operações sem atrasos perceptíveis.
- **Manutenibilidade:** O código deve ser bem estruturado e documentado.
- **Confiabilidade:** O sistema deve ser robusto e capaz de lidar com entradas inválidas de forma adequada.

---

Boa sorte no desenvolvimento deste desafio e aproveite para aprender e se divertir enquanto progride pelos níveis!

Equipe de Ensino - MateCheck
