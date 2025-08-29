#include <stdio.h>
//Converting Bytes Into KB,MB,GB//

int main() {
    int bytes=500000000;

    float kb=bytes/1024;
    float mb=bytes/(1024*1024);
    float gb=bytes/(1024*1024*1024);
    
    printf("Bytes=%d\n",bytes);
    printf("KB=%f\n",kb);
    printf("MB=%f\n",mb);
    printf("GB=%f\n",gb);
    
    return 0;
}
