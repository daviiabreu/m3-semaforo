# Ponderada Semana 03 - Semáforo

#### Montagem e Conexões
&nbsp;&nbsp;&nbsp;&nbsp;A montagem do circuito foi realizada com base na estrutura de um semáforo básico, utilizando LEDs de três cores (vermelho, amarelo e verde) e um botão para ligar e desligar o sistema. Os LEDs representam as fases de um semáforo padrão e estão conectados aos pinos digitais do Arduino conforme especificado no código.

&nbsp;&nbsp;&nbsp;&nbsp;Cada LED possui seu respectivo resistor em série, garantindo que a corrente máxima recomendada para o LED não seja ultrapassada, protegendo assim tanto os LEDs quanto o Arduino de possíveis danos. Os resistores foram conectados diretamente em linha com cada LED e com seus respectivos pinos no Arduino.

&nbsp;&nbsp;&nbsp;&nbsp;O botão de controle é ligado ao pino 2 do Arduino para receber a entrada digital e alternar o estado do sistema. Quando pressionado, o botão ativa ou desativa o ciclo do semáforo, que reinicia desde o início toda vez que o botão é pressionado novamente.

#### Funcionamento do Código

O código segue a lógica do semáforo com tempos pré-definidos:
1. **6 segundos no vermelho**: Para indicar parada.
2. **2 segundos no amarelo**: Para transição entre vermelho e verde.
3. **2 segundos no verde**: Indica movimento.
4. **2 segundos adicionais no verde**: Permite mais tempo para travessia de pedestres.
5. **2 segundos no amarelo**: Indica que o semáforo está prestes a mudar para vermelho.

O botão no pino 2 permite alternar entre ligado e desligado do semáforo, reiniciando o ciclo sempre que é pressionado.

#### Especificações dos Componentes

| Quantidade | Componente      | Especificação                        | Função                                             |
|-------|----------|-------------------------------------|----------------------------------------------------|
| 1 | Arduino         | Modelo Uno            | Microcontrolador para controle do sistema          |
| 1 | LED Vermelho    | 5 mm, cor vermelha                  | Indica a fase de parada do semáforo                |
| 1 | LED Amarelo     | 5 mm, cor amarela                   | Indica a fase de atenção do semáforo               |
| 1 | LED Verde       | 5 mm, cor verde                     | Indica a fase de movimento do semáforo             |
| 4 | Resistores      | Resistências variadas                            | Limita a corrente para proteger os LEDs            |
| 1 | Botão           | Táctil, 4 pinos                    | Ativa ou desativa o funcionamento do semáforo      |
| 7 | Fios de conexão | Variado                             | Conexões entre Arduino e componentes               |

## Video 

https://drive.google.com/file/d/1MrarZeeFpEKp-evmftZ2FTjp5-r280qI/view?usp=drivesdk

## Avaliação em pares

### Avaliador: Wildisley Filho

Critério                                                                                                 | Contempla (Pontos) | Contempla Parcialmente (Pontos) | Não Contempla (Pontos) | Nota atribuída |
|---------------------------------------------------------------------------------------------------------|--------------------|----------------------------------|--------------------------|----------------|
| Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores                | Até 3              | Até 1,5                          | 0                        | 3           |
| Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo                  | Até 3              | Até 1,5                          | 0                        | 3              |
| Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) | Até 3              | Até 1,5                          | 0                        | 3              |
| Extra: Implementou um componente de liga/desliga no semáforo e/ou usou ponteiros no código             | Até 1              | Até 0,5                          | 0                        |         1      |

*Pontuação Total: 10*

### Avaliador: Leonardo Ogata

Critério                                                                                                 | Contempla (Pontos) | Contempla Parcialmente (Pontos) | Não Contempla (Pontos) | Nota atribuída |
|---------------------------------------------------------------------------------------------------------|--------------------|----------------------------------|--------------------------|----------------|
| Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores                | Até 3              | Até 1,5                          | 0                        | 3           |
| Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo                  | Até 3              | Até 1,5                          | 0                        | 3              |
| Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) | Até 3              | Até 1,5                          | 0                        | 3              |
| Extra: Implementou um componente de liga/desliga no semáforo e/ou usou ponteiros no código             | Até 1              | Até 0,5                          | 0                        |         1      |

*Pontuação Total: 10*