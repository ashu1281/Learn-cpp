#include <assert.h>
#include <string.h>
#include "caesar_cipher.h"

#define CAPACITY 32

int const m_key;
class CaesarCipher {
public:
    int static m_key;

    int GetKey() const {
        
        return m_key;
    }

    void SetKey(int n) {
        assert(n >= 0);
        m_key = n;
    }
    char Encrypt(char* plainText, char* cipherText, CAPACITY) {
        
    }


};


int main() {

    // Following test checks
    // - SetKey method of CaesarCipher class
    CaesarCipher::SetKey(3);
    assert(CaesarCipher::GetKey() == 3);

    // Following test case checks
    // - Encrypt method of  CaesarCipher class
    char plainText[CAPACITY] = "ATTACK AT DAWN";
    char cipherText[CAPACITY] = { 0 };
    CaesarCipher::Encrypt(plainText, cipherText, CAPACITY);
    assert(strcmp(cipherText, "DWWDFN DW GDZQ") == 0);

    // Following test case checks
    // - Decrypt method of  CaesarCipher class
    strcpy_s(cipherText, CAPACITY, "WKLV LV IXQ");
    CaesarCipher::Decrypt(cipherText, plainText, CAPACITY);
    assert(strcmp(cipherText, "THIS IS FUN") == 0);
}


