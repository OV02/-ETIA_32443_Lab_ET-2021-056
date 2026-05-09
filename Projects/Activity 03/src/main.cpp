#define F CPU 16000000UL
#include <avr/io.h>
int main(void)
{
DDRB = (1<<PB0);
DDRD &= ~(1 << PD2);
while (1)
{
if (PIND & (1<< PD2))
{
PORTB= (1 << PB0);
}
else
{
PORTB &= ~(1 << PB0);
}}}