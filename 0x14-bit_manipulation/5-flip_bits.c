/**
 *flip_bits -  a function that gets number of bits needed to flip
 *@n: how many bit flips are neede to equal m for n
 *m: the number to set other equal
 *Return: the number of fliped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int flips = 0;
unsigned long int xor = (n ^ m);
unsigned long int max = 0x01;

while (max <= xor)
{
if (max & xor)
flips++;
max <<= 1;
}
return (flips);
}
