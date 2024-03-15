#ifndef Utilities
#define Utilities
#include <stdlib.h>
#include <string.h>
void my_WsaStart(){
    WSA wsa = {0};
    if(0>WsaStartup( MakeWord(2,2),
        &wsa){
        printf("noWsa");
        exit(-1);
}

#endif
