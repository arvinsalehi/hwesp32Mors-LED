// Learning project

// Use only one core
#if CONFIG_FREEERTOS_UNICORE
static const BaseType_t app_cpu = 0;
#else
static const BaseType_t app_cpu = 1;
#endif

const char* MORSCODE[][2] = {
    {"A", ".-"},    
    {"B", "-..."}, 
    {"C", "-.-."},  
    {"D", "-.."},   
    {"E", "."},     
    {"F", "..-."},  
    {"G", "--."},   
    {"H", "...."},  
    {"I", ".."},    
    {"J", ".---"},  
    {"K", "-.-"},   
    {"L", ".-.."},  
    {"M", "--"},    
    {"N", "-."},    
    {"O", "---"},   
    {"P", ".--."},  
    {"Q", "--.-"},  
    {"R", ".-."},   
    {"S", "..."},   
    {"T", "-"},     
    {"U", "..-"},   
    {"V", "...-"},  
    {"W", ".--"},   
    {"X", "-..-"},  
    {"Y", "-.--"},  
    {"Z", "--.."},  
    {"1", ".----"}, 
    {"2", "..---"}, 
    {"3", "...--"}, 
    {"4", "....-"}, 
    {"5", "....."}, 
    {"6", "-...."}, 
    {"7", "--..."}, 
    {"8", "---.."}, 
    {"9", "----."}, 
    {"0", "-----"}, 
};

const int T = 100;  

const int morseTimingDictionary[][2] = {
    {1, T},     
    {2, 3 * T}, 
    {3, T},     
    {4, 3 * T}, 
    {5, 7 * T}, 
};

static const int led_pin = LED_BUILTIN;

const char* searchMorsCode(char letter) {
  for(int i; i < 36; i++) {
    if (MORSCODE[i][0][0] = letter) { 
      return MORSECODE[i][1];
    }
    return nullptr
  }
}


void toggleLED(void *parameter) {
  //TODO
  while(1) {
    digitalWrite(led_pin, HIGH);
    vTaskDelay(500 / portTICK_PERIOD_MS);
    digitalWrite(led_pin, LOW);
    vTaskDelay(500 / portTICK_PERIOD_MS);
  }
}

