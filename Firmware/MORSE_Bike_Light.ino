/*
                #####                                                           
              ##########                                                        
             ###     ###                                                        
             ###     ###                                                        
             ###     ###                                                        
             ###     ###                                                        
             ###     ###                                                
             ###     ##########                                                 
             ###     ##################                                        
             ###     ###     ##############                                   
             ###     ###     ####     #######                               
             ###     ###     ####     ###   ###                                
  ######     ###     ###     ####     ###   ######                            
###########  ###     ###     ####     ###       ###                            
####     #######                      ###       ###                            
#######      ###                                 ###                            
  #####                                          ###                            
  #######                                        ###                            
     ####                                        ###                            
      ######                                     ###                            
         ###                                  #####                            
         #######                             ####                               
            ####                             ###                                                         
             #######                     #######
                ####                     ####                                   
                #############################                                   
                #############################                                   

                Hardware used: Seeeduino xiao               
                Built for a Workshop at MediaDock HSLU D&K
                Based on the following Examples: 
*/





String ToBeMorsed = "MediaDock";
String Space = " "; 
const int LED = 9;
float Blinktempo = 0.06;

void setup() {
  Serial.begin(9600);
  Serial.println("Morse Lamp Started");
  delay(200);
}

void Dash() {
  float time_step = Blinktempo / 3;
  for (float t = 0; t < 2 * PI; t += time_step) {
    float value = (cos(t - PI) * 0.5 + 0.5) * 255;
    analogWrite(LED, value);
    delay(1);
  }
  Serial.println("-");
  delay(30);
}

void Dot() {
  float time_step = Blinktempo;
  for (float t = 0; t < 2 * PI; t += time_step) {
    float value = (cos(t - PI) * 0.5 + 0.5) * 255;
    analogWrite(LED, value);
    delay(1);
  }
  Serial.println(".");
  delay(30);
}

void Break() {
  delay(50);
}

void loop() {

  // Morse Code based on the following Table ---> https://de.wikipedia.org/wiki/Morsecode#Standard-Codetabelle
  
  ToBeMorsed = String(ToBeMorsed + Space); 
  for (int i = 0; i < ToBeMorsed.length(); i++) {
    char c = ToBeMorsed.charAt(i);
    delay(500);
    Serial.println(c);
    switch (c) {
      case 'a':
      case 'A':  // .-
        Dot();
        Dash();
        Break();
        break;
      case 'b':
      case 'B':  // -...
        Dash();
        Dot();
        Dot();
        Dot();
        Break();
        break;
      case 'c':
      case 'C':  // -.-.
        Dash();
        Dot();
        Dash();
        Dot();
        Break();
        break;
      case 'd':
      case 'D':  // -..
        Dash();
        Dot();
        Dot();
        Break();
        break;
      case 'e':
      case 'E':  // .
        Dot();
        Break();
        break;
      case 'f':
      case 'F':  // ..-.
        Dot();
        Dot();
        Dash();
        Dot();
        Break();
        break;
      case 'g':
      case 'G':  // --.
        Dash();
        Dash();
        Dot();
        Break();
        break;
      case 'h':
      case 'H':  // ....
        Dot();
        Dot();
        Dot();
        Dot();
        Break();
        break;
      case 'i':
      case 'I':  // ..
        Dot();
        Dot();
        Break();
        break;
      case 'j':
      case 'J':  // .---
        Dot();
        Dash();
        Dash();
        Dash();
        Break();
        break;
      case 'k':
      case 'K':  // -.-
        Dash();
        Dot();
        Dash();
        Break();
        break;
      case 'l':
      case 'L':  // .-..
        Dot();
        Dash();
        Dot();
        Dot();
        Break();
        break;
      case 'm':
      case 'M':  // --
        Dash();
        Dash();
        Break();
        break;
      case 'n':
      case 'N':  // -.
        Dash();
        Break();
        break;
      case 'o':
      case 'O':  // ---
        Dash();
        Dash();
        Dash();
        Break();
        break;
      case 'p':
      case 'P':  // .--.
        Dot();
        Dash();
        Dash();
        Dot();
        Break();
        break;
      case 'q':
      case 'Q':  // --.-
        Dash();
        Dash();
        Dot();
        Dash();
        Break();
        break;
      case 'r':
      case 'R':  // .-.
        Dot();
        Dash();
        Dot();
        Break();
        break;
      case 's':
      case 'S':  // ...
        Dot();
        Dot();
        Dot();
        Break();
        break;
      case 't':
      case 'T':  // -
        Dash();
        Break();
        break;
      case 'u':
      case 'U':  // ..-
        Dot();
        Dot();
        Dash();
        Break();
        break;
      case 'v':
      case 'V':  // ...-
        Dot();
        Dot();
        Dot();
        Dash();
        Break();
        break;
      case 'w':
      case 'W':  // .--
        Dot();
        Dash();
        Dash();
        Break();
        break;
      case 'x':
      case 'X':  // -..-
        Dash();
        Dot();
        Dot();
        Dash();
        Break();
        break;
      case 'y':
      case 'Y':  // -.--
        Dash();
        Dot();
        Dash();
        Dash();
        Break();
        break;
      case 'z':
      case 'Z':  // --..
        Dash();
        Dash();
        Dot();
        Dot();
        Break();
        break;
      case ' ':  // LongBREAK????
        Break();
        Break();
        Break();
        break;
      case '.':  // .-.-.-
        Dot();
        Dash();
        Dot();
        Dash();
        Dot();
        Dash();
        Break();
        break;
      case ',':  // --..--
        Dash();
        Dash();
        Dot();
        Dot();
        Dash();
        Dash();
        Break();
        break;
      case ':':  // ---...
        Dash();
        Dash();
        Dash();
        Dot();
        Dot();
        Dot();
        Break();
        break;
      case ';':  // -.-.-.
        Dash();
        Dot();
        Dash();
        Dot();
        Dash();
        Dot();
        Break();
        break;
      case '?':  // ..--..
        Dot();
        Dot();
        Dash();
        Dash();
        Dot();
        Dot();
        Break();
        break;
      case '!':  // -.-.--
        Dash();
        Dot();
        Dash();
        Dot();
        Dash();
        Dash();
        Break();
        break;
      case '\'':  //apostrophe .----.
        Dot();
        Dash();
        Dash();
        Dash();
        Dot();
        Break();
        break;
      case '"':  //quotation mark .-..-.
        Dot();
        Dash();
        Dot();
        Dot();
        Dash();
        Dot();
        Break();
        break;
      case '-':  // -....-
        Dash();
        Dot();
        Dot();
        Dot();
        Dot();
        Dash();
        Break();
        break;
      case '_':  // ..--.-
        Dot();
        Dot();
        Dash();
        Dash();
        Dot();
        Dash();
        Break();
      case '/':  //  -..-.
        Dash();
        Dot();
        Dot();
        Dash();
        Dot();
        Break();
        break;
      case '(':
      case '<':  // -.--.
        Dash();
        Dot();
        Dash();
        Dash();
        Dot();
        Break();
        break;
      case ')':
      case '>':  // -.--.-
        Dash();
        Dot();
        Dash();
        Dash();
        Dot();
        Dash();
        Break();
        break;
      case '@':  // .--.-.
        Dot();
        Dash();
        Dash();
        Dot();
        Dash();
        Dot();
        Break();
        break;
      case '1':  // .----
        Dot();
        Dash();
        Dash();
        Dash();
        Dash();
        Break();
        break;
      case '2':  // ..---
        Dot();
        Dot();
        Dash();
        Dash();
        Dash();
        Break();
        break;
      case '3':  // ...--
        Dot();
        Dot();
        Dot();
        Dash();
        Dash();
        Break();
        break;
      case '4':  // ....-
        Dot();
        Dot();
        Dot();
        Dot();
        Dash();
        Break();
        break;
      case '5':  // .....
        Dot();
        Dot();
        Dot();
        Dot();
        Dot();
        Break();
        break;
      case '6':  // -....
        Dash();
        Dot();
        Dot();
        Dot();
        Dot();
        Break();
        break;
      case '7':  // --...
        Dash();
        Dash();
        Dot();
        Dot();
        Dot();
        Break();
        break;
      case '8':  // ---..
        Dash();
        Dash();
        Dash();
        Dot();
        Dot();
        Break();
        break;
      case '9':  // ----.
        Dash();
        Dash();
        Dash();
        Dash();
        Dot();
        Break();
        break;
      case '0':  // -----
        Dash();
        Dash();
        Dash();
        Dash();
        Dash();
        Break();
        break;
    }  // end switch case
  }
}
