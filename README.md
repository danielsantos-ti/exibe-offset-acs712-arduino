# Exibe Offset ACS712 com Arduino

Este repositório contém um exemplo simples de código para Arduino que realiza a leitura do valor de offset de um sensor de corrente ACS712 e exibe o resultado no Monitor Serial.

## Sobre o Projeto

O **ACS712** é um sensor de corrente que utiliza um valor de referência (offset) para representar a ausência de corrente elétrica no circuito. Este código permite:

- Realizar a leitura do valor de offset no pino analógico configurado.
- Exibir o valor no Monitor Serial para ajuste ou calibração.

## Funcionalidades

- Leitura do valor de saída do sensor ACS712.
- Exibição contínua do valor lido com intervalo configurável.
- Modulação com função para organizar o código.

## Como Usar

1. Conecte o sensor ACS712 ao pino analógico do Arduino (padrão: A5).
2. Faça o upload do código para sua placa Arduino usando o Arduino IDE.
3. Abra o Monitor Serial para visualizar o valor do offset lido.

## Circuito Exemplo

- **Sensor ACS712**
  - VCC: 5V
  - GND: GND
  - OUT: Conectado ao pino A5 do Arduino

## Contribuição

Sinta-se à vontade para abrir issues, propor melhorias ou contribuir com o projeto!


