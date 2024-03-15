#include <winsock2.h>
#include <winsock.h>
#include "Utilities.h"
#define Myport1 0x7f000001
#define MyPort 1337
int main(int argc, char** argv){
    My_WsaStart();
    struct SOCKADDR_IN = createSockaddrin(
    MyPort, AF_INET, MyPort1);
}
