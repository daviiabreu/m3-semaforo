#define vermelho 4
#define amarelo 7
#define verde 8
#define botao 2

bool semaforoAtivo = false;
bool botaoPressionado = false;

unsigned long tempoAnterior = 0;
int estadoSemaforo = 0;
unsigned long intervaloAtual = 1000;

void setup() {
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(botao, INPUT);

  Serial.begin(9600);
}

void loop() {
  // Alterna o estado do semáforo ao pressionar o botão
  if (digitalRead(botao) && !botaoPressionado) {
    botaoPressionado = true;
    semaforoAtivo = !semaforoAtivo;
    estadoSemaforo = 0;
    tempoAnterior = millis();
  }

  if (!digitalRead(botao)) {
    botaoPressionado = false;
  }

  // Controle do semáforo
  if (semaforoAtivo) {
    unsigned long tempoAtual = millis();

    if (tempoAtual - tempoAnterior >= intervaloAtual) {
      tempoAnterior = tempoAtual;

      switch (estadoSemaforo) {
        case 0:
          // Estado 0: Vermelho aceso
          digitalWrite(vermelho, HIGH);
          digitalWrite(amarelo, LOW);
          digitalWrite(verde, LOW);
          intervaloAtual = 6000; // 6 segundos
          estadoSemaforo = 1;
          break;

        case 1:
          // Estado 1: Amarelo aceso
          digitalWrite(vermelho, LOW);
          digitalWrite(amarelo, HIGH);
          digitalWrite(verde, LOW);
          intervaloAtual = 2000; // 2 segundos
          estadoSemaforo = 2;
          break;

        case 2:
          // Estado 2: Verde aceso
          digitalWrite(vermelho, LOW);
          digitalWrite(amarelo, LOW);
          digitalWrite(verde, HIGH);
          intervaloAtual = 2000; // 2 segundos
          estadoSemaforo = 3;
          break;

        case 3:
          // Estado 3: Verde aceso (tempo adicional)
          digitalWrite(vermelho, LOW);
          digitalWrite(amarelo, LOW);
          digitalWrite(verde, HIGH);
          intervaloAtual = 2000; // 2 segundos adicionais
          estadoSemaforo = 4;
          break;

        case 4:
          // Estado 4: Amarelo aceso (antes de voltar para o vermelho)
          digitalWrite(vermelho, LOW);
          digitalWrite(amarelo, HIGH);
          digitalWrite(verde, LOW);
          intervaloAtual = 2000; // 2 segundos
          estadoSemaforo = 0; // Volta para o vermelho
          break;
      }
    }
  } else {
    // Semáforo inativo - apaga todas as luzes
    digitalWrite(vermelho, LOW);
    digitalWrite(amarelo, LOW);
    digitalWrite(verde, LOW);
  }
}
