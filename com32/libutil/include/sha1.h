#ifndef LIBUTIL_SHA1_H
#define LIBUTIL_SHA1_H

typedef struct {
    uint32_t state[5];
    uint32_t count[2];
    unsigned char buffer[64];
} SHA1_CTX;

void SHA1Transform(uint32_t state[5], unsigned char buffer[64]);
void SHA1Init(SHA1_CTX* context);
void SHA1Update(SHA1_CTX* context, unsigned char* data, uint32_t len);  /*
JHB */
void SHA1Final(unsigned char digest[20], SHA1_CTX* context);

#endif /* LIBUTIL_SHA1_H */