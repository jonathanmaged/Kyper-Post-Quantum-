#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"toy.h"
 
int main() {
    // Define parameters
    short A[TK_K * TK_K * TK_N];
    short t[TK_K * TK_N];
    short s[TK_K * TK_N];
    short u[TK_K * TK_N];
    short v[TK_N];

    // Key generation
    toy_gen(A, t, s);

    // Encryption
    int plaintext = 12; // Example plaintext (4 bits)
    toy_enc(A, t, plaintext, u, v);

    // Decryption
    int decrypted = toy_dec(s, u, v);

    // Display results
    printf("Original plaintext: %d\n", plaintext);
    printf("Decrypted plaintext: %d\n", decrypted);

    return 0;
}