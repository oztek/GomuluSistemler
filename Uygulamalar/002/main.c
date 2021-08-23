#include <main.h>

#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOPUT, NOWRT, NODEBUG

#use delay(clock=4M)

#define BUTON1 pin_b0
#define BUTON2 pin_b1
#define LED pin_b7

void main()
{
   set_tris_b(0x03); //0000 0011 0 ve 1 nolu pinler yani input oldular digerleri ise output
   output_b(0); //outputlarý 0 basýldý.
   while(TRUE)
   {
      if(input(BUTON1)==1){ //BUTON1 e basildiysa
         output_high(LED); //LED i ac
      }
      if(input(BUTON2)==1){
         output_low(LED); //LED i kapat
      }
   }

}
