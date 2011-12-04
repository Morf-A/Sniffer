#include <sys/socket.h> // определение soket
#include <netinet/in.h> //опеделение hosts
#include <linux/if_ether.h> //определение ETH_P_ALL
#include <string.h> //strlen
int main()
{

int sock = socket(PF_INET, SOCK_PACKET,htons(ETH_P_ALL));
int rc=setsockopt(sock, SOL_SOCKET,SO_BINDTODEVICE, "eth0\x00", strlen("eth0\x00")+1);

}

