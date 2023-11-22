#include <LiquidCrystal.h>

//inicializar o lcd com os pinos correspondentes
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
//definir colunas e filas do lcd
  lcd.begin(16, 2);
// escreve mensagem no lcd
 lcd.print("PARACETAMOL 16H");
}

void loop() {
// coloca o cursor na coluna 0, linha 1
// a linha 1 é a segunda linha, e a linha 0 é a primeira
//  lcd.setCursor(0, 1);
// escreve os segundos
//lcd.print(millis() / 1000);
}