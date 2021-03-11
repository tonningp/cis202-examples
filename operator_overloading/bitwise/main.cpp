#include<iostream>


int main()
{
   unsigned char a = static_cast<unsigned char>(0xa1);
   // 1010 0001  161
   // 1010 0001 | 0x2 == 1010 0011
   // 01011110  94

   std::cout << (int)(a) << std::endl;
   std::cout << ((int)(a) | 0x2) << std::endl;
   a = static_cast<unsigned char>(0xa3);
   // 1010 0011    161
   // 0000 0010  & 0x2
   // ----------------
   //              0x2 true
   //
   std::cout << ((int)(a) & 0x2) << std::endl;

   //cout << (0xFF & (~a)) << endl;

   return 0;
}
