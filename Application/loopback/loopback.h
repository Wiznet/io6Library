#ifndef _LOOPBACK_H_
#define _LOOPBACK_H_

#include <stdint.h>

/* Loopback test debug message printout enable */
#define	_LOOPBACK_DEBUG_

/* DATA_BUF_SIZE define for Loopback example */
#ifndef DATA_BUF_SIZE
	#define DATA_BUF_SIZE			2048
#endif

#define SOCK_TCP4			 (Sn_MR_TCP)
#define SOCK_TCP6			 (Sn_MR_TCP6)
#define SOCK_TCPD			 (Sn_MR_TCPD)

#define SOCK_UDP4			 (Sn_MR_UDP4)
#define SOCK_UDP6			 (Sn_MR_UDP6)
#define SOCK_UDPD			 (Sn_MR_UDPD)

#define AF_INET 2
#define AF_INET6 23
#define AF_INET_DUAL 11

/************************/
/* Select LOOPBACK_MODE */
/************************/
#define LOOPBACK_MAIN_NOBLOCK    0
#define LOOPBACK_MODE   LOOPBACK_MAIN_NOBLOCK

#if 1
int32_t loopback_udps(uint8_t sn, uint8_t* buf, uint16_t port, uint8_t loopback_mode);
int32_t loopback_tcps(uint8_t sn, uint16_t port, uint8_t* buf, uint8_t loopback_mode);
int32_t loopback_tcpc(uint8_t sn, uint8_t* buf, uint8_t* destip, uint16_t destport, uint8_t loopback_mode);

#else
/* TCP server Loopback test example */
int32_t loopback_tcps(uint8_t sn, uint16_t port, uint8_t* buf, uint8_t ip_ver);

/* TCP client Loopback test example */
int32_t loopback_tcpc(uint8_t sn, uint8_t* buf, uint8_t* destip, uint16_t destport, uint8_t ip_ver);

/* UDP Loopback test example */
int32_t loopback_udps(uint8_t sn, uint8_t* buf, uint16_t port, uint8_t ip_ver);
int32_t loopback_tcpc_send(uint8_t sn, uint8_t* buf, uint8_t* destip, uint16_t destport, uint8_t ip_ver);
#endif

#endif
