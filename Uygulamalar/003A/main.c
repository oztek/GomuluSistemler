#include <main.h>

#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOPUT, NOWRT, NODEBUG

#use delay(clock=4M)

void main()
{
   set_tris_b(0x00); //0000 0000 hepsi output pini atandilar.
   set_tris_d(0x03); //0000 0011 D0 ve D1 input pini atandilar.
   output_b(0); //B pinlerine 0 bas.
   while(TRUE)
   {
      if(input(pin_d0)==1){ //D0 pininden giris 1 ise
         output_b(1); // B pinlerinden 0000 0001 ciktisi uret. Yani RB0 dan bir ciktisi uret.
         delay_ms(100); // 100ms bekle
         output_b(2); // B pinlerinden 0000 0010 ciktisi uret. Yani RB1 den bir ciktisi uret.
         delay_ms(100); // 100ms bekle
         output_b(4); // B pinlerinden 0000 0100 ciktisi uret. Yani RB2 den bir ciktisi uret.
         delay_ms(100); // 100ms bekle
         output_b(8); // B pinlerinden 0000 1000 ciktisi uret. Yani RB3 den bir ciktisi uret.
         delay_ms(100); // 100ms bekle
         output_b(16); // B pinlerinden 0001 0000 ciktisi uret. Yani RB4 den bir ciktisi uret.
         delay_ms(100); // 100ms bekle
         output_b(32); // B pinlerinden 0010 0000 ciktisi uret. Yani RB5 den bir ciktisi uret.
         delay_ms(100); // 100ms bekle
         output_b(64); // B pinlerinden 0100 0000 ciktisi uret. Yani RB6 den bir ciktisi uret.
         delay_ms(100); // 100ms bekle
         output_b(128); // B pinlerinden 1000 0000 ciktisi uret. Yani RB7 den bir ciktisi uret.
         delay_ms(100); // 100ms bekle
         output_b(0); // B pinlerinden 0000 0000 ciktisi uret. Yani hepsinden sýfýr ciktisi uret.
         delay_ms(100); // 100ms bekle
      }

      //TODO: User Code
   }

}
