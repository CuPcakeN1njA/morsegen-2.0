/*
 * morsegen 2.0
 * Morse code generator that takes serial input converts it to morse
 * @Author CuPcakeN1njA
 */

int outPin = 2;
String input;
String morseString;
char currentChar;
String index = "abcdefghijklmnopqrstuvwxyz";
String alph[] = {"10111", // a
  "111010101", // b
  "11101011101", // c
  "1110101", // d
  "1", // e
  "101011101", // f
  "111011101", // g
  "1010101", // h
  "101", // i
  "1011101110111", // j
  "111010111", // k
  "101110101", // l
  "1110111", // m
  "11101", // n
  "11101110111", // o
  "10111011101", // p
  "1110111010111", // q
  "1011101", // r
  "10101", // s
  "111", // t
  "1010111", // u
  "101010111", // v
  "101110111", // w
  "11101010111", // x
  "1110101110111", // y
  "11101110101" // z
  };


void setup() {
  Serial.begin(9600);
  pinMode(outPin, OUTPUT);
}

String genMorseString(String input){
  morseString = "";
  for(int i = 0; i<input.length(); i++){
      currentChar = input.charAt(i);
      int pos = index.indexOf(currentChar);
      if((currentChar != ' ')&&(pos > 0)){
        morseString += alph[pos] + "000";
      }else if(currentChar == ' '){
        morseString += "0000000";
      }
      else{}
    }
    return(morseString);
}

void writeMorse(String morseString){
  for(int i = 0; i < morseString.length(); i++){
    if(morseString.charAt(i) == '1'){
      digitalWrite(outPin, HIGH);
    }
    else{
      digitalWrite(outPin, LOW);
    }
    delay(500);
  }
  digitalWrite(outPin, LOW);
}

void loop() {
  while(Serial.available()){
    input= Serial.readString();
    Serial.println(input);
    morseString = genMorseString(input);
    Serial.println(morseString);
    writeMorse(morseString);
  }
}
