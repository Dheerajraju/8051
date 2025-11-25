void delay_ms(unsigned int dly)
{
  unsigned char i;
  for(dly;dly>0;dly--)
  {
    for(i=250;i>0;i--);
    for(i=247;i>0;i--);
  }
}
