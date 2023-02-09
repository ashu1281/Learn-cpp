#include <assert.h>
#include <string.h>
//#include "caesar_cipher.h"

#define CAPACITY 32


class CaesarCipher {
public:
    static void Encrypt(char* plainText, char* cipherText, size_t size) {
        for (int i = 0; plainText[i] != '\0'; i++) {

            char chg = plainText[i];
                if (chg >= 'a' && chg <= 'z')
                {
                    chg = chg + m_key;
                    if (chg > 'z')
                    {
                        chg = chg - 'z' + 'a' - 1;
                    }
                    cipherText[i] = chg;
                }
                else if (chg >= 'A' && chg <= 'Z')
                {
                    chg = chg + m_key;
                    if (chg > 'Z')
                    {
                        chg = chg - 'Z' + 'A' - 1;
                    }
                    cipherText[i] = chg;
                }
                if (chg == ' ') {
                    cipherText[i] = chg;
                }
        }
    } 

    static void Decrypt(char* cipherText, char* plainText, size_t size) {
        memset(plainText, '\0', size);
        
        for (int i = 0; cipherText[i] != '\0'; i++) {

            char chg = cipherText[i];
            if (chg >= 'a' && chg <= 'z')
            {
                chg = chg - m_key;
                if (chg < 'a')
                {
                    chg = chg + 'a' - 'z' + 1;
                }
                plainText[i] = chg;
            }
            else if (chg >= 'A' && chg <= 'Z')
            {
                chg = chg - m_key;
                if (chg > 'Z')
                {
                    chg = chg + 'Z' - 'A' + 1;
                }
                plainText[i] = chg;
            }
            if (chg == ' ') {
                plainText[i] = chg;
            }
        }
    }


    static int GetKey(){
      
        return m_key;
    }

    static void SetKey(int n) {
        assert(n >= 0);
        m_key = n;
    }
     
private:
    static int m_key;

};
int CaesarCipher::m_key;

int main() {

    // Following test checks
    // - SetKey method of CaesarCipher class
    CaesarCipher::SetKey(3);
    assert(CaesarCipher::GetKey() == 3);

    // Following test case checks
    // - Encrypt method of  CaesarCipher class
    char plainText[CAPACITY] = "ATTACK AT DAWN";
    char cipherText[CAPACITY] = { 0 };
    /*size_t size = CAPACITY;*/
    CaesarCipher::Encrypt(plainText, cipherText, CAPACITY);
    assert(strcmp(cipherText, "DWWDFN DW GDZQ") == 0);

    // Following test case checks
    // - Decrypt method of  CaesarCipher class
    strcpy_s(cipherText, CAPACITY, "WKLV LV IXQ");
    CaesarCipher::Decrypt(cipherText, plainText, CAPACITY);
    assert(strcmp(plainText, "THIS IS FUN") == 0);
}


