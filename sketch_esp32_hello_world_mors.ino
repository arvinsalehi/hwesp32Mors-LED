// Learning project

// Use only one core
#if CONFIG_FREEERTOS_UNICORE
static const BaseType_t app_cpu = 0;
#else
static const BaseType_t app_cpu = 1;
#endif

const char* MORSCODE[][2] = {
    {"A", ".-"},    // A
    {"B", "-..."},  // B
    {"C", "-.-."},  // C
    {"D", "-.."},   // D
    {"E", "."},     // E
    {"F", "..-."},  // F
    {"G", "--."},   // G
    {"H", "...."},  // H
    {"I", ".."},    // I
    {"J", ".---"},  // J
    {"K", "-.-"},   // K
    {"L", ".-.."},  // L
    {"M", "--"},    // M
    {"N", "-."},    // N
    {"O", "---"},   // O
    {"P", ".--."},  // P
    {"Q", "--.-"},  // Q
    {"R", ".-."},   // R
    {"S", "..."},   // S
    {"T", "-"},     // T
    {"U", "..-"},   // U
    {"V", "...-"},  // V
    {"W", ".--"},   // W
    {"X", "-..-"},  // X
    {"Y", "-.--"},  // Y
    {"Z", "--.."},  // Z
    {"1", ".----"}, // 1
    {"2", "..---"}, // 2
    {"3", "...--"}, // 3
    {"4", "....-"}, // 4
    {"5", "....."}, // 5
    {"6", "-...."}, // 6
    {"7", "--..."}, // 7
    {"8", "---.."}, // 8
    {"9", "----."}, // 9
    {"0", "-----"}, // 0
};

const int T = 100;  

const int morseTimingDictionary[][2] = {
    {1, T},     // Dot (.) = 1T
    {2, 3 * T}, // Dash (-) = 3T
    {3, T},     // Space between elements of the same letter = 1T
    {4, 3 * T}, // Space between letters = 3T
    {5, 7 * T}, // Space between words = 7T
};

// pins
static const int led_pin = LED_BUILTIN;

const char* searchMorsCode(char letter) {
  for(int i; i < 36; i++) {
    if (MORSCODE[i][0][0] = letter) { // MORSCODE[i][0][0] to point to char A. wherease MORSCODE[i][0] points to string A
      return MORSECODE[i][1];
    }
    return nullptr
  }
}
// Blink a LED;
void toggleLED(void *parameter) {
  //TODO complete this func. NOT WORKING YET
  while(1) {
    digitalWrite(led_pin, HIGH);
    vTaskDelay(500 / portTICK_PERIOD_MS);
    digitalWrite(led_pin, LOW);
    vTaskDelay(500 / portTICK_PERIOD_MS);
  }
}

