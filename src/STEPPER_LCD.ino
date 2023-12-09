#include <Stepper.h>
#include <LiquidCrystal.h>

const int PassoPorVolta = 500;  // Passo por Volta do Motor de Passo
Stepper MotorP(PassoPorVolta, 8, 10, 9, 11);
LiquidCrystal lcd(13, 12, 5, 4, 3, 2);

int contagemGiros = 0;  // Variável para contar giros

void setup() {
  // Definir colunas e filas do LCD
  lcd.begin(16, 2);
  // Escrever mensagem no LCD
  lcd.print(" AGED SOLUTIONS");
  MotorP.setSpeed(60);
}

void loop() {
  for (int i = 0; i < 5; i++) {
    MotorP.step(409.2);  // Gira 72 graus
    delay(1000);
    
    // Incrementar a contagem de giros após cada giro curto
    contagemGiros++;
    
    // Verificar se a contagem de giros ultrapassou 4 e reiniciar para 0
    if (contagemGiros > 4) {
      contagemGiros = 0;
    }
    
    // Limpar o display do LCD e exibir a mensagem com base na contagem de giros
    lcd.clear();
    lcd.setCursor(0, 0);
    if (contagemGiros == 0) 
      lcd.print(" AGED SOLUTIONS");

    if (contagemGiros == 1){
      lcd.print("AMOXICILINA 00H");
      lcd.setCursor(0, 1);
      lcd.print("Giros: " + String(contagemGiros));
    }
    
    if (contagemGiros == 2) {
      lcd.print("AMOXICILINA 06H");
      lcd.setCursor(0, 1);
      lcd.print("Giros: " + String(contagemGiros));
    }
     if (contagemGiros == 3) {
      lcd.print("AMOXICILINA 12H");
      lcd.setCursor(0, 1);
      lcd.print("Giros: " + String(contagemGiros));
    }
     if (contagemGiros == 4) {
      lcd.print("AMOXICILINA 18H");
      lcd.setCursor(0, 1);
      lcd.print("Giros: " + String(contagemGiros));
    }
    lcd.setCursor(0, 1);
    
    delay(1000);  // Aguardar um curto período antes de limpar o LCD novamente
  }

  MotorP.step(-2046);  // Gira 360 graus negativos
  delay(1000);
}
