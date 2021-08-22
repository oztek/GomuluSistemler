#include <main.h>

#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOPUT, NOWRT, NODEBUG

#use delay(clock=4M)

void main()
{
   set_tris_b(0); //RB0 output olarak kullan
   while(TRUE)
   {
      output_b(0x01); //RB0 a HEX01 gonderildi. Led yandi.
      delay_ms(500); //500ms bekle
      output_b(0x00); //RB0 s HEX00 gonderildi. Led sondu.
      delay_ms(500); //500ms bekle
      //TODO: User Code
   }

}
