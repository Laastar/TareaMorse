#include <Morse.h>

Morse morse = Morse(13);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available())
  {
    String palabra = Serial.readString();
    for(int i = 0; i < palabra.length(); i++)
    {
      if(palabra[i] == 'a' || palabra[i] == 'A')
        morse.a();
      if(palabra[i] == 'b' || palabra[i] == 'B')
        morse.b();
      if(palabra[i] == 'c' || palabra[i] == 'C')
        morse.c();
      if(palabra[i] == 'd' || palabra[i] == 'D')
        morse.d();
      if(palabra[i] == 'e' || palabra[i] == 'E')
        morse.e();
      if(palabra[i] == 'f' || palabra[i] == 'F')
        morse.f();
      if(palabra[i] == 'g' || palabra[i] == 'G')
        morse.g();
      if(palabra[i] == 'h' || palabra[i] == 'H')
        morse.h();
      if(palabra[i] == 'i' || palabra[i] == 'I')
        morse.i();
      if(palabra[i] == 'j' || palabra[i] == 'J')
        morse.j();
      if(palabra[i] == 'k' || palabra[i] == 'K')
        morse.k();
      if(palabra[i] == 'l' || palabra[i] == 'L')
        morse.l();
      if(palabra[i] == 'm' || palabra[i] == 'M')
        morse.m();
      if(palabra[i] == 'n' || palabra[i] == 'N')
        morse.n();
      if(palabra[i] == 'o' || palabra[i] == 'O')
        morse.o();
      if(palabra[i] == 'p' || palabra[i] == 'P')
        morse.p();
      if(palabra[i] == 'q' || palabra[i] == 'Q')
        morse.q();
      if(palabra[i] == 'r' || palabra[i] == 'R')
        morse.r();
      if(palabra[i] == 's' || palabra[i] == 'S')
        morse.s();
      if(palabra[i] == 't' || palabra[i] == 'T')
        morse.t();
      if(palabra[i] == 'u' || palabra[i] == 'U')
        morse.u();
      if(palabra[i] == 'v' || palabra[i] == 'V')
        morse.v();
      if(palabra[i] == 'w' || palabra[i] == 'W')
        morse.w();
      if(palabra[i] == 'x' || palabra[i] == 'X')
        morse.x();
      if(palabra[i] == 'y' || palabra[i] == 'Y')
        morse.y();
      if(palabra[i] == 'z' || palabra[i] == 'Z')
        morse.z();
    }
  }
  delay(1000);
}
