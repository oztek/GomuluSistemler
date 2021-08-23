#include <main.h>

#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOPUT, NOWRT, NODEBUG

#use delay(clock=4M)

void main()
{
   int x, k;
   set_tris_b(0x00); //0000 0000 hepsi output pini atandilar.
   set_tris_d(0x03); //0000 0011 D0 ve D1 input pini atandilar.
   output_b(0); //B pinlerine 0 bas.
   while(TRUE)
   {
      x=1;
      if(input(pin_d0)==1){ //D0 pininden giris 1 ise
         for(k=0;k<8;k++){
            output_b(x); // B pinlerinden x olana 1 ciktisini uret.
            delay_ms(100); // 100ms bekle
            x *= 2; // Bir sonraki cikisa gec. Ornegin RB0 dan RB1 e 
         }
         output_b(x); // B pinlerine 0 gonder
         delay_ms(100); //100ms bekle
      }
   }

}
