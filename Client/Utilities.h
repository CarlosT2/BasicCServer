#ifndef Utilities
#define Utilities
#include <stdlib.h>
#include <string.h>

#include <winsock2.h>
#include <winsock.h>
void my_WsaStart(){
    WSA wsa = {0};
    if(0>WsaStartup( MakeWord(2,2),
        &wsa){
        printf("noWsa");
        exit(-1);
}
struct SOCKADDR_IN createSOCKADDR_IN(
int sin_addr, int family, saddr){
    SOCKADDR_IN sockaddrin
#endif
