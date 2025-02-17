/* This file is automatically generated.  Do not edit. */
#ifndef _SELINUX_FLASK_H_
#define _SELINUX_FLASK_H_

#define SECCLASS_SECURITY                                 1
#define SECCLASS_PROCESS                                  2
#define SECCLASS_PROCESS2                                 3
#define SECCLASS_SYSTEM                                   4
#define SECCLASS_CAPABILITY                               5
#define SECCLASS_FILESYSTEM                               6
#define SECCLASS_FILE                                     7
#define SECCLASS_DIR                                      8
#define SECCLASS_FD                                       9
#define SECCLASS_LNK_FILE                                10
#define SECCLASS_CHR_FILE                                11
#define SECCLASS_BLK_FILE                                12
#define SECCLASS_SOCK_FILE                               13
#define SECCLASS_FIFO_FILE                               14
#define SECCLASS_SOCKET                                  15
#define SECCLASS_TCP_SOCKET                              16
#define SECCLASS_UDP_SOCKET                              17
#define SECCLASS_RAWIP_SOCKET                            18
#define SECCLASS_NODE                                    19
#define SECCLASS_NETIF                                   20
#define SECCLASS_NETLINK_SOCKET                          21
#define SECCLASS_PACKET_SOCKET                           22
#define SECCLASS_KEY_SOCKET                              23
#define SECCLASS_UNIX_STREAM_SOCKET                      24
#define SECCLASS_UNIX_DGRAM_SOCKET                       25
#define SECCLASS_SEM                                     26
#define SECCLASS_MSG                                     27
#define SECCLASS_MSGQ                                    28
#define SECCLASS_SHM                                     29
#define SECCLASS_IPC                                     30
#define SECCLASS_NETLINK_ROUTE_SOCKET                    31
#define SECCLASS_NETLINK_TCPDIAG_SOCKET                  32
#define SECCLASS_NETLINK_NFLOG_SOCKET                    33
#define SECCLASS_NETLINK_XFRM_SOCKET                     34
#define SECCLASS_NETLINK_SELINUX_SOCKET                  35
#define SECCLASS_NETLINK_ISCSI_SOCKET                    36
#define SECCLASS_NETLINK_AUDIT_SOCKET                    37
#define SECCLASS_NETLINK_FIB_LOOKUP_SOCKET               38
#define SECCLASS_NETLINK_CONNECTOR_SOCKET                39
#define SECCLASS_NETLINK_NETFILTER_SOCKET                40
#define SECCLASS_NETLINK_DNRT_SOCKET                     41
#define SECCLASS_ASSOCIATION                             42
#define SECCLASS_NETLINK_KOBJECT_UEVENT_SOCKET           43
#define SECCLASS_NETLINK_GENERIC_SOCKET                  44
#define SECCLASS_NETLINK_SCSITRANSPORT_SOCKET            45
#define SECCLASS_NETLINK_RDMA_SOCKET                     46
#define SECCLASS_NETLINK_CRYPTO_SOCKET                   47
#define SECCLASS_APPLETALK_SOCKET                        48
#define SECCLASS_PACKET                                  49
#define SECCLASS_KEY                                     50
#define SECCLASS_DCCP_SOCKET                             51
#define SECCLASS_MEMPROTECT                              52
#define SECCLASS_PEER                                    53
#define SECCLASS_CAPABILITY2                             54
#define SECCLASS_KERNEL_SERVICE                          55
#define SECCLASS_TUN_SOCKET                              56
#define SECCLASS_BINDER                                  57
#define SECCLASS_CAP_USERNS                              58
#define SECCLASS_CAP2_USERNS                             59
#define SECCLASS_SCTP_SOCKET                             60
#define SECCLASS_ICMP_SOCKET                             61
#define SECCLASS_AX25_SOCKET                             62
#define SECCLASS_IPX_SOCKET                              63
#define SECCLASS_NETROM_SOCKET                           64
#define SECCLASS_ATMPVC_SOCKET                           65
#define SECCLASS_X25_SOCKET                              66
#define SECCLASS_ROSE_SOCKET                             67
#define SECCLASS_DECNET_SOCKET                           68
#define SECCLASS_ATMSVC_SOCKET                           69
#define SECCLASS_RDS_SOCKET                              70
#define SECCLASS_IRDA_SOCKET                             71
#define SECCLASS_PPPOX_SOCKET                            72
#define SECCLASS_LLC_SOCKET                              73
#define SECCLASS_CAN_SOCKET                              74
#define SECCLASS_TIPC_SOCKET                             75
#define SECCLASS_BLUETOOTH_SOCKET                        76
#define SECCLASS_IUCV_SOCKET                             77
#define SECCLASS_RXRPC_SOCKET                            78
#define SECCLASS_ISDN_SOCKET                             79
#define SECCLASS_PHONET_SOCKET                           80
#define SECCLASS_IEEE802154_SOCKET                       81
#define SECCLASS_CAIF_SOCKET                             82
#define SECCLASS_ALG_SOCKET                              83
#define SECCLASS_NFC_SOCKET                              84
#define SECCLASS_VSOCK_SOCKET                            85
#define SECCLASS_KCM_SOCKET                              86
#define SECCLASS_QIPCRTR_SOCKET                          87
#define SECCLASS_SMC_SOCKET                              88
#define SECCLASS_INFINIBAND_PKEY                         89
#define SECCLASS_INFINIBAND_ENDPORT                      90
#define SECCLASS_BPF                                     91
#define SECCLASS_XDP_SOCKET                              92
#define SECCLASS_MCTP_SOCKET                             93
#define SECCLASS_PERF_EVENT                              94
#define SECCLASS_ANON_INODE                              95
#define SECCLASS_IO_URING                                96
#define SECCLASS_USER_NAMESPACE                          97

#define SECINITSID_KERNEL                                   1
#define SECINITSID_SECURITY                                 2
#define SECINITSID_UNLABELED                                3
#define SECINITSID_FILE                                     5
#define SECINITSID_ANY_SOCKET                               8
#define SECINITSID_PORT                                     9
#define SECINITSID_NETIF                                   10
#define SECINITSID_NETMSG                                  11
#define SECINITSID_NODE                                    12
#define SECINITSID_DEVNULL                                 27

#define SECINITSID_NUM 27

static inline bool security_is_socket_class(u16 kern_tclass)
{
	bool sock = false;

	switch (kern_tclass) {
	case SECCLASS_SOCKET:
	case SECCLASS_TCP_SOCKET:
	case SECCLASS_UDP_SOCKET:
	case SECCLASS_RAWIP_SOCKET:
	case SECCLASS_NETLINK_SOCKET:
	case SECCLASS_PACKET_SOCKET:
	case SECCLASS_KEY_SOCKET:
	case SECCLASS_UNIX_STREAM_SOCKET:
	case SECCLASS_UNIX_DGRAM_SOCKET:
	case SECCLASS_NETLINK_ROUTE_SOCKET:
	case SECCLASS_NETLINK_TCPDIAG_SOCKET:
	case SECCLASS_NETLINK_NFLOG_SOCKET:
	case SECCLASS_NETLINK_XFRM_SOCKET:
	case SECCLASS_NETLINK_SELINUX_SOCKET:
	case SECCLASS_NETLINK_ISCSI_SOCKET:
	case SECCLASS_NETLINK_AUDIT_SOCKET:
	case SECCLASS_NETLINK_FIB_LOOKUP_SOCKET:
	case SECCLASS_NETLINK_CONNECTOR_SOCKET:
	case SECCLASS_NETLINK_NETFILTER_SOCKET:
	case SECCLASS_NETLINK_DNRT_SOCKET:
	case SECCLASS_NETLINK_KOBJECT_UEVENT_SOCKET:
	case SECCLASS_NETLINK_GENERIC_SOCKET:
	case SECCLASS_NETLINK_SCSITRANSPORT_SOCKET:
	case SECCLASS_NETLINK_RDMA_SOCKET:
	case SECCLASS_NETLINK_CRYPTO_SOCKET:
	case SECCLASS_APPLETALK_SOCKET:
	case SECCLASS_DCCP_SOCKET:
	case SECCLASS_TUN_SOCKET:
	case SECCLASS_SCTP_SOCKET:
	case SECCLASS_ICMP_SOCKET:
	case SECCLASS_AX25_SOCKET:
	case SECCLASS_IPX_SOCKET:
	case SECCLASS_NETROM_SOCKET:
	case SECCLASS_ATMPVC_SOCKET:
	case SECCLASS_X25_SOCKET:
	case SECCLASS_ROSE_SOCKET:
	case SECCLASS_DECNET_SOCKET:
	case SECCLASS_ATMSVC_SOCKET:
	case SECCLASS_RDS_SOCKET:
	case SECCLASS_IRDA_SOCKET:
	case SECCLASS_PPPOX_SOCKET:
	case SECCLASS_LLC_SOCKET:
	case SECCLASS_CAN_SOCKET:
	case SECCLASS_TIPC_SOCKET:
	case SECCLASS_BLUETOOTH_SOCKET:
	case SECCLASS_IUCV_SOCKET:
	case SECCLASS_RXRPC_SOCKET:
	case SECCLASS_ISDN_SOCKET:
	case SECCLASS_PHONET_SOCKET:
	case SECCLASS_IEEE802154_SOCKET:
	case SECCLASS_CAIF_SOCKET:
	case SECCLASS_ALG_SOCKET:
	case SECCLASS_NFC_SOCKET:
	case SECCLASS_VSOCK_SOCKET:
	case SECCLASS_KCM_SOCKET:
	case SECCLASS_QIPCRTR_SOCKET:
	case SECCLASS_SMC_SOCKET:
	case SECCLASS_XDP_SOCKET:
	case SECCLASS_MCTP_SOCKET:
		sock = true;
		break;
	default:
		break;
	}

	return sock;
}

#endif
