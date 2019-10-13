#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

extern uint8_t minS8(uint8_t x, uint8_t y);
extern uint8_t minU8(uint8_t x, uint8_t y);
extern int32_t isLessThanS32(int32_t x, int32_t y);

extern void strCopy(char* strTO, char* strFrom);
extern void strConcat(char* strTO, char* strFrom);

extern uint16_t isEqualU16(uint16_t x, uint16_t y);
extern uint16_t isEqualS16(uint16_t x, uint16_t y);

extern uint32_t shiftLeftU32(uint32_t x, uint32_t p);
extern uint32_t shiftU32(uint32_t x, int32_t p);
extern int32_t shiftS32(int32_t x, int32_t p);



int main()
{
	
	printf("Shift start\r\n");
  uint32_t a, p, pa;
  a = 143;
  p = 7;
  pa = shiftLeftU32(a, p);
  printf("z = %u\r\n", a);
  printf("ze = %u\r\n", p);
  printf("shiftLeftU32 = %u\r\n", pa);


  uint32_t a1, pa1;
  int32_t p1;
  a1 = 143;
  p1 = 0;
  pa1 = shiftU32(a1, p1);
  printf("z = %u\r\n", a1);
  printf("ze = %d\r\n", p1);
  printf("shiftU32 = %u\r\n", pa1);


  int32_t a11, pa11;
  int32_t p11;
  a11 = -143;
  p11 = -4;
  pa11 = shiftS32(a11, p11);
  printf("z = %d\r\n", a11);
  printf("ze = %d\r\n", p11);
  printf("shiftS32 = %d\r\n", pa11);



	printf("Shift start\r\n");


  uint16_t za, z1a, zfa;
  za = 143;
  z1a = 143;
  zfa = isEqualU16(za, z1a);
  printf("z = %u\r\n", za);
  printf("ze = %u\r\n", z1a);
  printf("isEqual = %u\r\n", zfa);

  int16_t ma, na, oa;
  ma = -20;
  na = -20;
  oa = isEqualS16(ma, na);
  printf("m = %d\r\n", ma);
  printf("n = %d\r\n", na);
  printf("isSEqual = %d\r\n", oa);


  uint8_t z, z1, zf;
  z = 142;
  z1 = 143;
  zf = minU8(z, z1);
  printf("z = %u\r\n", z);
  printf("ze = %u\r\n", z1);
  printf("min = %u\r\n", zf);

  int32_t m, n, o;
  m = -20;
  n = -10;
  o = isLessThanS32(m, n);
  printf("m = %d\r\n", m);
  printf("n = %d\r\n", n);
  printf("min bool = %d\r\n", o);

  uint32_t d, e, f;
  d = -142;
  e = -141;
  f = isLessThanS32(d, e);
  printf("d = %d\r\n", d);
  printf("e = %d\r\n", e);
  printf("f = d + e = %u\r\n", f);


 char* word = malloc(5);
 char* second = "karki";
 
strCopy(word, "karki");
printf("%s\r\n", word);


 char* sec = "mohan";
 strConcat(word, " mohan");
printf("%s\r\n", word);


  return EXIT_SUCCESS;
}


