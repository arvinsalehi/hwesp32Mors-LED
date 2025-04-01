// Learning project

// Use only one core
#if CONFIG_FREEERTOS_UNICORE
static const BaseType_t app_cpu = 0;
#else
static const BaseType_t app_cpu = 1;
#endif

void dit() {
    printf("dit ");
}

void dat() {
    printf("dat ");
}

const void* MORSECODE[][3] = {
    {"A", dit, dat},    
    {"B", dat, dit, dit, dit}, 
    {"C", dat, dit, dat, dit},  
    {"D", dat, dit, dit},   
    {"E", dit},     
    {"F", dit, dit, dat, dit},  
    {"G", dat, dat, dit},   
    {"H", dit, dit, dit, dit},  
    {"I", dit, dit},    
    {"J", dit, dat, dat, dat},  
    {"K", dat, dit, dat},   
    {"L", dit, dat, dit, dit},  
    {"M", dat, dat},    
    {"N", dat, dit},    
    {"O", dat, dat, dat},   
    {"P", dit, dat, dat, dit},  
    {"Q", dat, dat, dit, dat},  
    {"R", dit, dat, dit},   
    {"S", dit, dit, dit},   
    {"T", dat},     
    {"U", dit, dit, dat},   
    {"V", dit, dit, dit, dat},  
    {"W", dit, dat, dat},   
    {"X", dat, dit, dit, dat},  
    {"Y", dat, dit, dat, dat},  
    {"Z", dat, dat, dit, dit},  
    {"1", dit, dat, dat, dat, dat}, 
    {"2", dit, dit, dat, dat, dat}, 
    {"3", dit, dit, dit, dat, dat}, 
    {"4", dit, dit, dit, dit, dat}, 
    {"5", dit, dit, dit, dit, dit}, 
    {"6", dat, dit, dit, dit, dit}, 
    {"7", dat, dat, dit, dit, dit}, 
    {"8", dat, dat, dat, dit, dit}, 
    {"9", dat, dat, dat, dat, dit}, 
    {"0", dat, dat, dat, dat, dat}, 
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

