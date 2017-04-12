#include <Keypad.h>
const byte ROWS = 4; // 4 Rows
const byte COLS = 4; // 4 Columns
// 定義 Keypad 的按鍵
char keys[ROWS][COLS] = {
{'F', 'E', 'D', 'C'}, 
{'B','3','6', '9'},
{'A', '2', '5', '8'}, 
{'0', '1', '4', '7'}
};
// 定義 Keypad 連到 Arduino 的接腳
byte rowPins[ROWS] = {9, 8, 7, 6};
// 連到 Keypad 的 4 個 Rows
byte colPins[COLS] = {13, 12, 11, 10};
// 連到 Keypad 的 4 個 Columns
// 建立 Keypad 物件
Keypad keypad =
Keypad( makeKeymap(keys), rowPins,
colPins, ROWS, COLS );
void setup(){
Serial.begin(9600);
}
void loop(){
char key = keypad.getKey(); // 讀取 Keypad

if (key != NO_KEY){
Serial.println(key);
}
}

