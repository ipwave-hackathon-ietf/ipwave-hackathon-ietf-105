//Duplicate Address Request
class Ipv6DuplicateAddrReq extends Ipv6NdMessage
{
      
  	 //IP fields 
    Ipv6Address sourceAddress; //Ipv6 source
    Ipv6Address destinationAddress; //Ipv6 dest
    unsigned short curHopLimit;   //hop limit 
    
    //ICMP fields
    type = ICMPv6_NEIGHBOUR_DAR; //type DAR=157, DAC=158
    Ipv6Address registeredAddress; //registered address 
    unsigned short registLifetime;  //registration lifetime 
//    InterfaceToken EUI64;     //EUI-64 
    unsigned int status = 0;  //status
    
        
}


class Ipv6NeighbourSolicitation extends Ipv6NdMessage
{
    type = ICMPv6_NEIGHBOUR_SOL;
    //Additional ICMP fields
    Ipv6Address targetAddress;// MUST NOT be a multicast address.

    //Possible Options   //FIXME these fields are TLV options!

    // The link-layer address for the sender.
    // MUST NOT be included when the source IP address is the unspecified address.
    // Otherwise, on link layers that have addresses this option MUST be included in multicast
    // solicitations and SHOULD be included in unicast solicitations.
    MacAddress sourceLinkLayerAddress;
    
    Ipv6NdAddressRegistrationOption ARO;
    
}