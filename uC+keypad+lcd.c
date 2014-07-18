#include <18f4550.h>
#fuses INTRC_IO
#use delay(INTERNAL=8MHZ) 

#define led1     PIN_C0
#define led2     PIN_C1
#define pin_on   output_high
#define pin_off  output_low
#define LCD_DB4   PIN_D4
#define LCD_DB5   PIN_D5
#define LCD_DB6   PIN_D6
#define LCD_DB7   PIN_D7
#define LCD_RS    PIN_D2
#define LCD_E     PIN_D3
#include <lcd1.c>
#include <kbd1.c>

void main()
{
   set_tris_c(0b00000000);
   pin_off(led1);                        
   pin_off(led2);
   char k;
   int a;
   lcd_init();
   kbd_init(); 
   port_b_pullups(TRUE);
   
      delay_ms(100);
      lcd_gotoxy(1,1);
      printf(lcd_putc,"\f HOLA ");
      lcd_gotoxy(1,2);
      printf(lcd_putc," BIENVENIDO");
      delay_ms(1000);
      
      lcd_gotoxy(1,1);
      printf(lcd_putc,"\f COLOQUE EL ");
      lcd_gotoxy(1,2);
      printf(lcd_putc," VALOR EN MIN");
      delay_ms(1000);
      
      lcd_gotoxy(1,1);
      printf(lcd_putc,"\f EL SISTEMA ");
      lcd_gotoxy(1,2);
      printf(lcd_putc," ARRANCARA");
      delay_ms(1000);
      lcd_gotoxy(1,1);
      printf(lcd_putc,"\f AUTOMATICAMENTE ");
      delay_ms(500);
   
   for(;;)
   {
      k=kbd_getc();
      if(k!=0) 
      //printf(lcd_putc,"\f ");
      //lcd_putc(k);
      a=(int)k;
    
      if(k=='1')
      {
         
         output_high(led1);
         output_high(led2);
         printf(lcd_putc,"\f ");
         lcd_putc(k);
         delay_ms(15000);
         printf(lcd_putc,"\f esperando dato");
         pin_off(led1);                        
         pin_off(led2); 
      }
      if(k=='2')
      {
         output_high(led1);
         output_high(led2);
         printf(lcd_putc,"\f ");
         lcd_putc(k);
         delay_ms(30000);
         printf(lcd_putc,"\f esperando dato");
         pin_off(led1);                        
         pin_off(led2); 
      }
      if(k=='3')
      {
         output_high(led1);
         output_high(led2);
         printf(lcd_putc,"\f ");
         lcd_putc(k);
         delay_ms(45000);
         printf(lcd_putc,"\f esperando dato");
         pin_off(led1);                        
         pin_off(led2); 
      }
      if(k=='4')
      {
         output_high(led1);
         output_high(led2);
         printf(lcd_putc,"\f ");
         lcd_putc(k);
         delay_ms(60000);
         printf(lcd_putc,"\f esperando dato");
         pin_off(led1);                        
         pin_off(led2); 
      }
      if(k=='5')
      {
         output_high(led1);
         output_high(led2);
         printf(lcd_putc,"\f ");
         lcd_putc(k);
         delay_ms(60000);
         delay_ms(15000);
         printf(lcd_putc,"\f esperando dato");
         pin_off(led1);                        
         pin_off(led2); 
      }
      if(k=='6')
      {
         output_high(led1);
         output_high(led2);
         printf(lcd_putc,"\f ");
         lcd_putc(k);
         delay_ms(60000);
         delay_ms(30000);
         printf(lcd_putc,"\f esperando dato");
         pin_off(led1);                        
         pin_off(led2); 
      }
      if(k=='7')
      {
         output_high(led1);
         output_high(led2);
         printf(lcd_putc,"\f ");
         lcd_putc(k);
         delay_ms(60000);
         delay_ms(45000);
         printf(lcd_putc,"\f esperando dato");
         pin_off(led1);                        
         pin_off(led2); 
      }
      if(k=='8')
      {
         output_high(led1);
         output_high(led2);
         printf(lcd_putc,"\f ");
         lcd_putc(k);
         delay_ms(60000);
         delay_ms(60000);
         printf(lcd_putc,"\f esperando dato");
         pin_off(led1);                        
         pin_off(led2); 
      }
      if(k=='9')
      {
         output_high(led1);
         output_high(led2);
         printf(lcd_putc,"\f ");
         lcd_putc(k);
         delay_ms(60000);
         delay_ms(60000);
         delay_ms(15000);
         printf(lcd_putc,"\f esperando dato");
         pin_off(led1);                        
         pin_off(led2); 
      }
     
   }

}
 
