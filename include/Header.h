
#ifndef __header_h
#define __header_h

   #if defined(__PCM__)// Mid Range Micro Family
      #include <16F877A.h>
      #fuses HS,NOWDT,NOPROTECT,NOLVP
      #use DELAY(CLOCK=16000000)
      #use rs232(baud=9600,xmit=PIN_C6,rcv=PIN_C7)
   #endif

#endif
