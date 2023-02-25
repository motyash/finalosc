from scapy.all import *

target_ip = "192.168.1.1"
target_port = 80

ip_packet = IP(dst=target_ip)
tcp_packet = TCP(dport=target_port, flags="S")
payload = "exampel"

packet = ip_packet / tcp_packet / Raw(load=payload)

send(packet)


