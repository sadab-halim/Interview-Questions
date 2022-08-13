## Data Flow
### Simplex Mode 
- The communication is unidirectional, as on a one-way street. 
- Only one of the two devices on a link can transmit; the other can only receive.
- Keyboards and traditional monitors are examples of simplex devices.

### Half-Duplex Mode
- Each station can both transmit and receive, but not at the same time. 
- When one device is sending, the other can only receive, and vice versa.
- The half-duplex mode is like a one-lane road with traffic allowed in both directions. 
- Walkie-talkies is an example of half-duplex systems

### Full-Duplex Mode 
- Both stations can transmit and receive simultaneously.
- The full-duplex mode is like a two-way street with traffic flowing in both directions at the same time. 
- In full-duplex mode, signals going in one direction share the capacity of the link: with signals going in the other direction. 
- This sharing can occur in two ways: Either the link must contain two physically separate transmission paths, one for sending and the other for receiving; or the capacity of the channel is divided between the signals traveling in both directions.

## Peer-to-Peer Network
- This type of network model forms a small environment of up to 10 computers by linking them together with equal privilege and responsibilities for data processing without any dedicated server.

## Client Server Network
- This is a client-server based network model that enables clients to access the resources like audios, videos from the Server. 
- Clients are all the computers or end users that communicate with each other through a server. 
- The Server is the central computer or central controller that makes a response to the clients ‘request and secures, manages the computer network.

## Hybrid Network
This network model is the combined architecture of the network models defined above.

## Components of Computer Network
- **NIC**: Netowrk Interface Card (NIC) is a physical network interface defined as the hardware component that enables a computer to connect to a network. It is used in both wired and wireless connections.

- **Hub**: A computer hub is a basic type of wired network device by which multiple connected computers can communicate via broadcast communication.

- **Switch**: Switch is a computer hardware component that is used to connect multiple devices on a computer network. Its feature are more advanced than features.

- **Router**: Router is a networking device used to connect a LAN with an internet connection that forwards data packets between computer networks.

- **Modem**: A modem (MOdulator/DEModulator) is a hardware device used to transmit digital data over transmission media like a telephone line, a cable or satellite etc.

- **Cables and Connectors**: Cable is a transmission media used for transmitting digital singals. Optical-Fibre Cable, Co-axial cable, and Twisted Pair Cable are the three types of cable used for transmission of digital signals.

## Topologies
A Network Topology is the arrangement with which computer systems or network devices are connected to each other. 

## Types of Topologies
### Bus Topology
- The bus topology is designed in such a way that all the stations are connected through a single cable known as a backbone cable.
- Each node is connected to the backbone cable by drop cable or directly connected to the backbone cable.
- The bus topology is mainly used in 802.3 (ethernet) and 802.4 standard networks.
- When a node wants to send a message over the network, it puts a message over the network. All the stations available in the network will receive the message whether it has been addressed or not.
- The backbone cable is considered as a “single lane” through which the message is broadcast to all the stations.

### Star Topology
- Star Topology is an arrangement of the network in which every node is connected to the central hub, switch or a central computer.
- The central computer is known as a server, and the peripherical devices attached to the server are known as clients.
- Coaxial cable or RJ-45 cables are used to connect the computers.
- Hub or Switches are mainly used as connection devices in a physical star topology.

### Ring Topology
- Ring topology is like a bus topology but with connected ends
- The node that receives the message from the previous computer will retransmit to the next node.
- The data flows in one direction, i.e., unidirectional
- The data flows in a single loop continuously known as an endless loop.
- It has no terminated ends.
- The data in a ring topology flow in a clockwise direction
- The most common access method of the ring topology is token passing
   - Token passing: is a network access method in which token is passed from one node to another node
   - Token: is a frame that circulates around the network.

### Mesh Topology
- Mesh technology is an arrangement of the network in which computers are interconnected with each other through various redundant connection
- There are multiple paths from one computer to another computer
- It does not contain the switch, hub or any central computer which acts as a central part of communication
- The internet is an example of the mesh technology
- Mesh topology is mainly used for WAN implementations where communication failures are a critical concern.
- Mesh topology is mainly used for wireless networks.

Mesh Topology is divided into two categories:
- **Full Mesh Topology:** Each computer is connected to all the computers available in the network.
- **Partial Mesh Topology:** Not all but certain computers are connected to those computers with which they can communicate frequently.

### Tree Topology




### Hybrid Topology


## Types of Networks
### LAN (Local Area Network)
This network is a connection of two or more personal computers spanned in a small area such as building, office through a communication medium such as twisted pair cable, coaxial cable, etc.

### PAN (Personal Area Network)
This network is spanned for personal use of computing devices (mobile phones, laptops, media player, and play stations), arranged within a person, typically within a range of 10 meters such as Bluetooth, Wi-Fi, USB, etc., and covers an area of 30 feet.

### MAN (Metropolitan Area Network)
This network is inter-connection of different LANs, covers a larger geographic area, uses between banks, and colleges in a city and airline reservation through a telephone exchange line.

### WAN (Wide Area Network)
This network spans over a large geographical area through a telephonic line, fiber optic cable or satellite links used in the sectors of Business, Government, and Education. The Internet is a broad network in the world.

## OSI Layers
- Physical Layer
- Data Link Layer
- Network Layer
- Transport Layer
- Session Layer
- Presentation Layer
- Application Layer

## Summary of Layers
- **Physical Layer:** It provides a physical medium through which bits are transmitted
- **Data Link Layer:** It is used for error free transfer of data frames
- **Network Layer:** It is responsible for moving the packets from source to destination
- **Transport Layer:** It provides reliable message delivery from process to process
- **Session Layer:** It is used to establish, manage and terminate the sessions
- **Presentation Layer:** It is responsible for translation, compressions encryption
- **Application Layer:** This layer provide the services to the users

## TCP/IP Model 
- **Physical Layer:** 
- **Data Link Layer:**
- **Network Layer:**
- **Transport Layer:**
- **Application Layer:**

## Difference between OSI and TCP/IP
|OSI | TCP/IP |
| -- |-------|
| 7 layered architecture | 4 layered architecture |
| Fixed boundaries and functionality for each layer | Flexible architecture with no strict boundaries between layers |
| Low Reliability	| High Reliability |

## IPv4 Address
- An IP address is a 32-bit dynamic address of a node in the network. 
- An IPv4 address has 4 octets of 8-bit each with each number with a value up to 255.
- IPv4 classes are differentiated based on the number of hosts it supports on the network. 
- There are five types of IPv4 classes and are based on the first octet of IP addresses which are classified as Class A, B, C, D, or E

## HTTP and HTTPS protocol
- HTTP is the HyperText Transfer Protocol which defines the set of rules and standards on how the information can be transmitted on the World Wide Web (WWW).  
- It helps the web browsers and web servers for communication. 
- It is a ‘stateless protocol’ where each command is independent with respect to the previous command. HTTP is an application layer protocol built upon the TCP. It uses port 80 by default.

- HTTPS is the HyperText Transfer Protocol Secure or Secure HTTP. It is an advanced and secured version of HTTP. On top of HTTP, SSL/TLS protocol is used to provide security. 
- It enables secure transactions by encrypting the communication and also helps identify network servers securely. It uses port 443 by default

## SMTP Protocol
- SMTP is the Simple Mail Transfer Protocol. 
- SMTP sets the rule for communication between servers. 
- This set of rules helps the software to transmit emails over the internet. - It supports both End-to-End and Store-and-Forward methods. 
- It is in always-listening mode on port 25

## DNS
- DNS is the Domain Name System. 
- It is considered as the devices/services directory of the Internet. 
- It is a decentralized and hierarchical naming system for devices/services connected to the Internet. 
- It translates the domain names to their corresponding IPs.

## Router vs Gateway
- Router is a networking device used for connecting two or more network segments. 
- It directs the traffic in the network. 
- It transfers information and data like web pages, emails, images, videos, etc. from source to destination in the form of packets. 
- It operates at the network layer. 
- The gateways are also used to route and regulate the network traffic but, they can also send data between two dissimilar networks while a router can only send data to similar networks

## Difference between TCP and UDP
| TCP | UDP |
|-----|-----|
| TCP is a connection-oriented protocol. Connection-orientation means that the communicating devices should establish a connection before transmitting data and should close the connection after transmitting the data. | UDP is the Datagram-oriented protocol. This is because there is no overhead for opening a connection, maintaining a connection, and terminating a connection. UDP is efficient for broadcast and multicast types of network transmission. |
| TCP is reliable as it guarantees the delivery of data to the destination router. | The delivery of data to the destination cannot be guaranteed in UDP. |
| TCP provides extensive error-checking mechanisms. It is because it provides flow control and acknowledgment of data. | UDP has only the basic error checking mechanism using checksums. |
| TCP is comparatively slower than UDP. | UDP is faster, simpler, and more efficient than TCP. |
| TCP has a (20-60) bytes variable length header. | UDP has an 8 bytes fixed-length header. |
| TCP doesn’t support Broadcasting. | UDP supports Broadcasting.|
| TCP is used by HTTP, HTTPs, FTP, SMTP and Telnet. | UDP is used by DNS, DHCP, TFTP, SNMP, RIP, and VoIP. |

## ICMP Protocol
- ICMP is the Internet Control Message Protocol. 
- It is a network layer protocol used for error handling. 
- It is mainly used by network devices like routers for diagnosing the network connection issues and crucial for error reporting and testing if the data is reaching the preferred destination in time. 
- It uses port 7 by default

## DHCP Protocol
- DHCP stands for Dynamic Host Configuration Protocol
- It is an application layer protocol used to auto-configure devices on IP networks enabling them to use the TCP and UDP-based protocols. 
- The DHCP servers auto-assign the IPs and other network configurations to the devices individually which enables them to communicate over the IP network. 
- It helps to get the subnet mask, IP address and helps to resolve the DNS. It uses port 67 by default.

## ARP Protocol
- ARP is  Address Resolution Protocol. 
- It is a network-level protocol used to convert the logical address i.e. IP address to the device's physical address i.e. MAC address. 
- It can also be used to get the MAC address of devices when they are trying to communicate over the local network.

## FTP Protocol
FTP is the most widely used protocol for file transfer over the network. FTP uses TCP/IP for communication and it works on TCP port 21.

FTP works on a client/server model where a client requests file from server and server sends requested resource back to the client.

FTP uses out-of-band controlling i.e. FTP uses TCP port 20 for exchanging controlling information and the actual data is sent over TCP port 21.

The client requests the server for a file. When the server receives a request for a file, it opens a TCP connection for the client and transfers the file. After the transfer is complete, the server closes the connection.

## MAC Address
- MAC address is the Media Access Control address. 
- It is a 48-bit or 64-bit unique identifier of devices in the network. 
- It is also called the physical address embedded with Network Interface Card (NIC) used at the Data Link Layer. 
- NIC is a hardware component in the networking device using which a device can connect to the network

## Subnet
- A subnet is a network inside a network achieved by the process called subnetting which helps divide a network into subnets. 
- It is used for getting a higher routing efficiency and enhances the security of the network. 
- It reduces the time to extract the host address from the routing table.

## Hub vs Switch
| Operates at Physical Layer | Operates at Data Link Layer |
| -------------------------- | --------------------------- |
| Hald Duplex Transmission Mode | Full Duplex Transmission Mode |
| Less efficient as there is no way to avoid collisions when more than one nodes sends the packets at the same time | More efficient as the collisions can be avoided or reduced as compared to Hub |

## Firewall
- A firewall is a network security device; it is a protective layer for the server that monitors and filters all the incoming and outgoing network traffic. It uses a set of rules to determine whether to allow or block a specific network traffic. 
- Firewalls can prevent unauthorized use before reaching the servers. Firewalls can be hardware or software-based.

## Types of Firewalls:
- **Packet Filters (Stateless Firewall)** − In the packet filters, if a packet matches then the packet filters set of rules and filters will drop or accept it.

- **Stateful firewall filters** − It is also known as a network firewall; this filter maintains a record of all the connections passing through. It can determine if a packet is either the start of a new connection or a part of an existing connection or is an invalid packet.

- **Application firewall** − A web application firewall is used for HTTP applications. There are sets of rules that are applied to monitor or block data packets from HTTP network traffic. 

## Unicasting vs Multicasting vs Broadcasting
- **Unicasting:** If the message is sent to a single node from the source then it is known as unicasting. This is commonly used in networks to establish a new connection

- **Multicasting:** If the message is sent to a subset of nodes from the source then it is known as multicasting. Used to send the same data to multiple receivers

**Broadcasting:** If the message is sent to all the nodes in a network from a source then it is known as broadcasting. DHCP and ARP in the local network use broadcasting.

## google.com
- The browser checks the cache first if the content is fresh and present in cache display the same.
- If not, the browser checks if the IP of the URL is present in the cache (browser and OS) if not then request the OS to do a DNS lookup using UDP to get the corresponding IP address of the URL from the DNS server to establish a new TCP connection.
- A new TCP connection is set between the browser and the server using three-way handshaking.
- An HTTP request is sent to the server using the TCP connection.
- The web servers running on the Servers handle the incoming HTTP request and send the HTTP response.
- The browser process the HTTP response sent by the server and may close the TCP connection or reuse the same for future requests.
- If the response data is cacheable then browsers cache the same.
Browser decodes the response and renders the content

## Domain Name System (DNS)
Domain Name System (DNS)
The Domain Name System (DNS) works on Client-Server Model. It used UDP protocol for transport layer communication. DNS uses hierarchical domain-based naming scheme.

The DNS server is configured with Fully Qualified Domain Names (FQDN) and email addresses mapped with their respective Internet protocol addresses.

A DNS server is requested with FQDN and it responds back with the IP address mapped with it. DNS uses UDP port 53
 
A primary server loads all information from the disk file; the secondary server loads all information from the primary server. 
When the secondary downloads information from the primary, it is called zone transfer.

DNS is a protocol that can be used in different platforms. In the Internet, the domain name space (tree) is divided into three different sections: generic domains, country domains, and the inverse domain.

## Working of DNS:
- DNS is a client/server network communication protocol. DNS clients send requests to the server while DNS servers send responses to the requests.
- Client requests contains a name which is converted into an IP address known as a forward DNS lookups while requests containing an IP address which is converted into a name known as reverse DNS lookups.
- DNS implements a distributed database to store the name of all the hosts available on the Internet.
- If a client like a web browser sends a request containing a hostname, then a piece of software such as DNS resolver sends a request to the DNS server to obtain the IP address associated with a hostname, then it forwards the request to another DNS server.

## Simple Mail Transfer Protocol (STMP)
- The Simple Mail Transfer Protocol (SMTP) is used to transfer electronic mail from one user to another. 
- This task is done by means of email client software (User Agents) the user is using. 
- User Agents help the user to type and format the email and store it until Internet is available.
- When an email is submitted to send, the sending process is handled by Message Transfer Agent which is normally comes inbuilt in email client software.
- Message Transfer Agent uses SMTP to forward the email to another Message Transfer Agent (Server Side). 
- While SMTP is used by end user to only send the emails, the servers normally use SMTP to send as well as receive emails. 
- SMTP uses TCP port 25 and 587.

- Client software uses Internet Access Protocol (IMAP) or Post Office Protocol (POP) protocols to receive emails.

## Simple Network Management Protocol (SNMP)
- It is a framework used for managing devices on the internet.
- It provides a set of operations for monitoring and managing the internet
- It has two components Manager and Agent
- The manager is a host that controls and monitors a set of agents such as routers.
- The protocol designed at the application layer protocol in which a few monitor devices made by different manufacturers and installed on different physical networks.
- It is used in a heterogeneous network made of different LANs and WANs connected by routers or gateways.

### Management with SNMP has three basic ideas:
- A manager checks the agent by requesting the information that reflects the behaviour of the agent.
- A manager also forces the agent to perform a certain function by resetting values in the agent database.
- An agent also contributes to the management process by warning the manager regarding an unusual condition.
 
### Management Components:
Management is not achieved only through SNMP protocol. It is achieved through the use of the other two protocols SMI and MIB.
 
### Structure of Management Information (SMI)
- It is a concept used in network management. 
- Its main function is to define the type of data that can be stored in an object and to show how to encode the data for the transmission over a network.

### Management Information Base (MIB)
MIB is a second component for the network management. Each agent has its own MIB, which is a collection of all the objects that the manager can manage.

MIB is categorized into eight groups: system, interface, address translation, ip, icmp, tcp, udp and egp.

## File Transfer Protocol (FTP)
- FTP is the most widely used protocol for file transfer over the network. 
- FTP uses TCP/IP for communication and it works on TCP port 21.
- FTP works on a client/server model where a client requests file from server and server sends requested resource back to the client.
- FTP uses out-of-band controlling i.e. FTP uses TCP port 20 for exchanging controlling information and the actual data is sent over TCP port 21.
- The client requests the server for a file. 
- When the server receives a request for a file, it opens a TCP connection for the client and transfers the file. 
- After the transfer is complete, the server closes the connection.

## Hyper Text Transfer Protocol (HTTP)
- The Hyper Text Transfer Protocol (HTTP) is the foundation of World Wide Web. 
- Hypertext is well organized documentation system which uses hyperlinks to link the pages in the text documents.
- HTTP works on a client server model. When a user wants to access any HTTP page on the internet, the client machine at user end initiates a TCP connection to server on port 80. 
- When the server accepts the client request, the client is authorized to access web pages.
- HTTP uses the services of TCP on well-known port 80.
- To access the web pages, a client normally uses web browsers, who are responsible for initiating, maintaining, and closing TCP connections.
- HTTP is a *stateless* protocol which means the server maintains no information about earlier requests by clients.
 
### HTTP versions:
- HTTP 1.0 uses non-persistent HTTP. At most one object can be sent over a single TCP connection.
- HTTP 1.1 uses persistent HTTP. In this version, multiple objects can be sent over a single TCP connection.

### World Wide Web (WWW)
- The WWW today is a distributed client/server service, in which a client using a browser can access a service using a server. 
- However, the service provided is distributed over many locations called sites.
- The documents in the WWW can be grouped into three broad categories: static, dynamic, and active. 
- The category is based on the time at which the contents of the document are determined.

## Cryptography
- Cryptography refers to the science and art of transforming messages to make them secure and immune to attacks. 
- It is a method of storing and transmitting data in a particular form so that only those for whom it is intended can read and process it.
- Cryptography not only protects data from theft or alteration but can also be used for user authentication.

## Components of Cryptography:
- Plaintext and Ciphertext: The original message, before being transformed, is called **plaintext.** 
- After the message is transformed, it is called **ciphertext.** 
- An encryption algorithm transforms the plaintext into ciphertext; a decryption algorithm transforms the ciphertext back into plaintext. 
- The sender uses an encryption algorithm, and the receiver uses a decryption algorithm.

- **Cipher:** Cipher is used to refer encryption and decryption algorithms. It is also used to refer to different categories of algorithms in cryptography.

- **Key:** is number (or a set of numbers) that the cipher, as an algorithm, operates on. To encrypt a message, we need an encryption algorithm, an encryption key and plaintext. These create the ciphertext.

To decrypt a message, we need a decryption algorithm, a decryption key, and the ciphertext. These reveal the original plaintext.

### Types of Cryptography:
- **Symmetric Key Cryptography:** In symmetric-key cryptography, the same key is used by both parties. The sender uses this key and an encryption algorithm to encrypt data; the receiver uses the same key and the corresponding decryption algorithm to decrypt the data.
 
- **Asymmetric Key Cryptography:** In asymmetric or public-key cryptography, there are two keys: a private key and a public key. The private key is kept by the receiver. The public key is announced to the public.

In public-key encryption/decryption, the public key that is used for encryption is different from the private key that is used for decryption. The public key is available to the public, and the private key is available only to an individual.
 
## Digital Signature
- Digital Signatures: is a technique which is used to validate the authenticity and integrity of the message.
- It allows us to verify the author, date and time of signatures, authenticate the message contents. 
- It also includes authentication function for additional capabilities.
- The basic idea behind the Digital Signature is to sign a document. When we send a document electronically, we can also sign it. 
- We can sign a document in two ways: to sign a whole document and to sign a digest.

### Digital Signature is used to achieve the following three aspects:
- Integrity
- Authentication
- Non-Repudiation

## Firewalls
- A firewall is a network security device; it is a protective layer for the server that monitors and filters all the incoming and outgoing network traffic. 
- It uses a set of rules to determine whether to allow or block a specific network traffic. 
- Firewalls can prevent unauthorized use before reaching the servers. Firewalls can be hardware or software-based.

### Types of Firewalls:
- **Packet Filters (Stateless Firewall)** − In the packet filters, if a packet matches then the packet filters set of rules and filters will drop or accept it.

- **Stateful firewall filters** − It is also known as a network firewall; this filter maintains a record of all the connections passing through. It can determine if a packet is either the start of a new connection or a part of an existing connection or is an invalid packet.

- **Application firewall** − A web application firewall is used for HTTP applications. There are sets of rules that are applied to monitor or block data packets from HTTP network traffic. 

