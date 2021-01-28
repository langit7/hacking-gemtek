struct multy_user_struct{

	const char *level_tag;

	char *level_a;	/* Administrator, means Super User	 0.Can't see.		1. Can see but can't modify.	2. Can see and can modify. */
	char *level_o;	/* Operator, means Operator  */
	char *level_e;	/* End User, means End user. */

};

struct multy_user_struct multy_user_menu[] = {

		/* Status */
		{"01010101","2","2","2"},
		{"01010102","2","2","2"},
		{"01010201","2","2","2"},
		{"01010401","2","2","2"},
		{"01010402","2","2","2"},
		{"01020101","2","2","2"},
		{"01020102","2","2","2"},
		{"01020201","2","2","2"},
		{"01020202","2","2","2"},
		{"01020401","2","2","2"},
		{"01020501","2","2","2"},
		{"01020601","2","2","2"},
		{"01020701","2","2","2"},
		{"01020801","2","2","2"},
		{"01020901","2","2","2"},
		{"01021001","2","2","2"},
		{"01021101","2","2","2"},
		{"01030101","2","2","2"},/*Serial ID*/
		{"01021102","2","2","2"},/*WiFi Working Channel*/
		{"01021103","2","2","2"},/*WiFi Clients Table*/
		{"01021104","2","2","2"},/*AP Firmware Version*/
		{"01021105","2","2","2"},/*wifi info status string*/
		{"01030112","2","2","2"},/*108GN_GP,108GN_GP_P1 hidden Lease Obtained,lease expires*/
		{"01030102","2","2","2"},
		{"01030103","2","2","2"},
    {"01030104","2","2","2"},
		{"01030105","2","2","2"},
    {"01030106","2","2","2"},
		{"01030107","2","2","2"},
		{"01030108","2","2","2"},/*Model ID*/
		{"01030109","2","2","2"},/*Hardware Version*/
		{"01030110","2","2","2"},/*Firmware Creation Date */
		{"01030111","2","2","2"},/*Serial Number*/
		{"01030113","2","2","2"},/*Device Location for Status*/
		{"01030114","2","2","2"},/*WiMAX_Driver_Version*/
		{"01030115","2","2","2"},/* WAN mac in network status */
		{"01030116","2","2","2"},/*show Manufacturer in about by Bolt*/
		{"01040101","2","2","2"},
		{"01040102","2","2","2"},
		{"01040201","2","2","2"},
		{"01040202","2","2","2"},
		{"01040301","2","2","2"},
		{"01040302","2","2","2"},
		{"01040401","2","2","2"},
		{"01040501","2","2","2"},
		{"01040601","2","2","2"},
		{"01040701","2","2","2"},
		{"01050101","2","2","2"},
		{"01060001","2","2","2"},
		{"01060002","2","2","2"},/* show RSRP0, RSRP1, CINR0, CINR1 hidden RSRP, SINR for sequans*/
		{"01060003","2","2","2"},/* hidden RSRP0, RSRP1, CINR0, CINR1, show RSRP, SINR for sky sequans*/
    {"01060005","2","2","2"},/* show LTE Information for sequans*/
		{"01060031","2","2","2"},/*Cell ID use to cms value is RealCellID for Gemtek*/
		{"01060032","2","2","2"},/*Cell ID use to cms value is CellID for customer*/
		{"01060004","2","2","2"},/* eNodeBID */
		{"01060006","2","2","2"},/* RRC State */
		{"01070001","2","2","2"},/* signal strength for linkem*/
		{"01070002","2","2","2"},/* link quality for linkem*/
		/* WiMAX */
		{"02010101","2","2","2"},
		{"02010201","2","2","2"},
		{"02010301","2","2","2"},
		{"02020102","2","2","2"},
		{"02030101","2","2","2"},
		{"02030201","2","2","2"},
		{"02030301","2","2","2"},
		{"02030401","2","2","2"},
		{"02030501","2","2","2"},/* Max Tx Power for sequans*/
		{"02030601","2","2","2"},/* MS Mobility Support*/
		{"02030602","2","2","2"},/*Idle mode timer of MS Mobility Support*/
		
		{"02040101","2","2","2"},/*only show username and password in EAP-TTLS for Linkem*/
		{"02040301","2","2","2"},/*onclick function does not work */
		{"02040401","2","2","2"},/*option show or hide for GP_Mobinnet*/
		{"02040201","2","2","2"},/*check username format in EAP-TTLS for Linkem*/
		{"02050100","2","2","2"},/*NAP-ID Filter in scanner*/
		{"02050200","2","2","2"},/*Available BSID List in scanner*/
		{"02060100","2","2","2"},/*WiMAX Advanced*/
		{"02060200","2","2","2"},/*VoIP Interface Setting in advanced*/
		{"02060201","2","2","2"},/*WiMAX->NDS->NAP-ID Filter*/
		{"02060202","2","2","2"},/*Preferred BS Configuration */
		{"02060203","2","2","2"},/*WiMAX->NDS->Last Found Channels */ 
		 /* Network */
		{"03010101","2","2","2"},/*[DHCP] Operation Mode : NAT Mode */
		{"03010103","2","2","2"},
		{"03010104","2","2","2"},
		{"03010105","2","2","2"},
		{"03010106","2","2","2"},
		{"03010126","2","2","2"},/*check 10.254.254 domain*/
		{"03010107","2","2","2"},
		{"03010108","2","2","2"},
		{"03010109","2","2","2"},
		{"03010110","2","2","2"},
		{"03010111","2","2","2"},
		{"03010112","2","2","2"},/*[Static / DHCP] Operation Mode : Tunnel Mode */
		{"03010113","2","2","2"},/*[DHCP] WAN MGMT and Data Interface ,multi PDN is ON*/			
		{"03010114","2","2","2"},
		{"03010115","2","2","2"},/*[DHCP] Operation Mode : Tunnel - gre */		
		{"03010117","2","2","2"},/*[DHCP] Operation Mode : Routing Mode */
    {"03010118","2","2","2"}, 	
    {"03010119","2","2","2"},/*[DHCP/Static] Operation Mode : Bridge Mode */
    {"03010120","2","2","2"},/*[DHCP/Static] L2TP and BCP=Enable for WLTFQR_117GN */
    {"03010121","2","2","2"},/*[DHCP/Static] Operation Mode : Tunnel - NAT Support */	
    {"03010122","2","2","2"},/*[DHCP/Static] IPsec Tunnel in L2TP and PPTP */	
    {"03010123","2","2","2"},/*[DHCP/Static] WAN DATA Gateway Address for TELRAD and BRT */	
    {"03010124","2","2","2"},/*check box enable dscp page for gemtek */
		{"03010125","2","2","2"},/*VoIP DSCP Configuration */
		{"03010128","2","2","2"},/*Hide Data&VoIP DSCP Configuration in layer 2 Tunnel mode */
		{"03010127","2","2","2"},/*MTU from 576 to 1600 alert message*/
		{"03010201","2","2","2"},/*[Static] Operation Mode : NAT Mode */
		{"03010203","2","2","2"},
		{"03010204","2","2","2"},
		{"03010205","2","2","2"},
		{"03010206","2","2","2"},
		{"03010207","2","2","2"},
		{"03010208","2","2","2"},
		{"03010209","2","2","2"},/*[DHCP] WAN MGMT and Data Interface ,multi PDN is ON*/		
		{"03010210","2","2","2"},	
		{"03010211","2","2","2"},/*[Static] Operation Mode : Tunnel - gre */		
		{"03010212","2","2","2"},/*[Static] Operation Mode : Routing Mode */	
		{"03020101","2","2","2"},
		{"03020112","2","2","2"},
		{"03020103","2","2","2"},/*DHCP Starting / Ending IP Address in DHCP Server*/
		{"03020111","2","2","2"},/*Enable DHCP Server and dns From ISP cannot be moidfyed for mobily*/
		{"03020102","2","2","2"},
		{"03020122","2","2","2"},/*WAN Setting title*/
		{"03020132","2","2","2"},/*LAN Setting title*/
		{"03020104","2","2","2"},/*DHCP relay*/ 
		{"03020105","2","2","2"},/*Primary, Secondary, Tertiary DNS*/
		{"03030101","2","2","2"},
		{"03040101","2","2","2"},
		{"03050101","2","2","2"},
		{"03060101","2","2","2"},
		{"03060201","2","2","2"},
		{"03060301","2","2","2"},/*VLAN Membership Configuration*/
		{"03060401","2","2","2"},/*VLAN Membership Table*/
		{"03060501","2","2","2"},
		{"03060601","2","2","2"},/*VoIP VLAN Configuration*/
		{"03070101","2","2","2"},
		{"03070201","2","2","2"},
		{"03070301","2","2","2"},
		{"03070401","2","2","2"},
		{"03070501","2","2","2"},
		{"03070601","2","2","2"},
		{"03070701","2","2","2"},
		{"03070801","2","2","2"},
		{"03070901","2","2","2"},
		{"03071001","2","2","2"},
		{"03071101","2","2","2"},
		{"03071201","2","2","2"},
		{"03071301","2","2","2"},
		{"03071302","2","2","2"},/*IP Passthrough*/
		{"03080001","2","2","2"},/*32 count in static routing*/
		/* Firewall */
		{"04010101","2","2","2"},
		{"04010102","2","2","2"},
		{"04010103","2","2","2"},
		{"04010104","2","2","2"},
		{"04010105","2","2","2"},/*Allow Ping from WAN*/
		{"04010106","2","2","2"},
		{"04010107","2","2","2"},
		{"04010108","2","2","2"},/*Allow HTTPs login from WAN*/
		{"04010109","2","2","2"},
		{"04010110","2","2","2"},
		{"04010111","2","2","2"},
		{"04010112","2","2","2"},
		{"04010113","2","2","2"},
		{"04010114","2","2","2"},
		{"04010115","2","2","2"},
    {"04010116","2","2","2"},
    {"04010117","2","2","2"},
		{"04020101","2","2","2"},
		{"04030101","2","2","2"},/*l2 filter*/
		{"04030102","2","2","2"},/*run Packet counter in L2filter/L3 data,mgmt filter*/
		{"04030103","2","2","2"},/*not run Packet counter in L2filter/L3 data,mgmt filter*/
		{"04050101","2","2","2"},
		{"04060101","2","2","2"},
		{"04060201","2","2","2"},
		{"04060301","2","2","2"},/*Enable UPnP IGD in operation mode is NAT */
		{"04060401","2","2","2"},/*Alert the information of firmware disabled */
		{"04060402","2","2","2"},/*qos->Enable VoIP QoS */

		/* Management */
		{"05010101","2","2","2"},	/* It is special case */
		{"05010102","2","2","2"},	/* It is special case */
		{"05010103","2","2","2"},	/* It is special case */
		{"05010104","2","2","2"},	/* It can't disable superuser account */
		{"05010105","2","2","2"},	/* validate password complexity */
		{"05010106","2","2","2"},	/* It is special case */
		{"05010107","2","2","2"},
		{"05020101","2","2","2"},
		{"05020102","2","2","2"},
		{"05020103","2","2","2"},
		{"05020104","2","2","2"},
		{"05020105","2","2","2"},/*Auto Daylight Saving time*/
		{"05030100","2","2","2"},/*Device Name*/
		{"05030101","2","2","2"},
		{"05030102","2","2","2"},
		{"05030103","2","2","2"},
		{"05030104","2","2","2"},/*Device Location*/		
		{"05040101","2","2","2"},
		{"05040201","2","2","2"},
		{"05040300","2","2","2"},/*title of Integrity Check  */
    {"05040301","2","2","2"},/*image of Integrity Check  */
		{"05040302","2","2","2"},
		{"05040401","2","2","2"},/* Auto firmware rollback in restore page */
		{"05040402","2","2","2"},/* rollback_apply button in restore page */
		{"05040403","2","2","2"},/* title of Rollback Settings in restore page */
		{"05050100","2","2","2"},/*Hidden sys log web item*/
		{"05050101","2","2","2"},
		{"05050102","2","2","2"},
		{"05050103","2","2","2"},/*chagne web to file in Syslog Target for Neo4G*/
		{"05060101","2","2","2"},
		{"05060102","2","2","2"},
		{"05060103","2","2","2"},
		{"05060104","2","2","2"},
		{"05060105","2","2","2"},
		{"05060106","2","2","2"},
		{"05060107","2","2","2"},
		{"05060108","2","2","2"},
		{"05060109","2","2","2"},
		{"05060110","2","2","2"},
		{"05060201","2","2","2"},
		{"05060202","2","2","2"},
		{"05060203","2","2","2"},
		{"05060204","2","2","2"},
		{"05060205","2","2","2"},
		{"05060206","2","2","2"},
		{"05060207","2","2","2"},
		{"05060208","2","2","2"},
		{"05060209","2","2","2"},
		{"05060210","2","2","2"},
		{"05060211","2","2","2"},
		{"05060212","2","2","2"},
		{"05060213","2","2","2"},
		{"05060214","2","2","2"},
		{"05060215","2","2","2"},
		{"05070101","2","2","2"},
		{"05070102","2","2","2"},
		{"05070201","2","2","2"},/*Configuration backup*/
		{"05070301","2","2","2"},/*OTA check version*/
		{"05070302","2","2","2"},/*FTP check */
		{"05070303","2","2","2"},/*fota firmware Upgrade */
		{"05070313","2","2","2"},/*Huawei fota_prim_verurl */
		{"05070314","2","2","2"},/*Huawei FOTA info */
		{"05070315","2","2","2"},/*Huawei FOTA info on boot,timer trigger*/
    {"05070316","2","2","2"},/*Use not reboot in get_fota_response*/
    {"05070317","2","2","2"},/*Use location reload in get_fota_response*/
		{"05070304","2","2","2"},/*show IAD firmware version */
		{"05070305","2","2","2"},/*add a checkbox, fota_auto_gen_url for gp generic */
		{"06010203","2","2","2"},
		{"06010101","2","2","2"},
		{"06020000","2","2","2"},/*RM Setting: Disable*/
		{"06020001","2","2","2"},/*RM Setting: SNMP*/
		{"06020002","2","2","2"},/*RM Setting: TR069*/
		{"06020003","2","2","2"},/*RM Setting: OMA*/
		{"06020004","2","2","2"},/*RM Setting: FTP Auto Upgrade*/
		{"06020005","2","2","2"},/*RM Setting: OMA+SNMP*/
		{"06020006","2","2","2"},/*RM Setting: TR069+SNMP*/
		{"06020008","2","2","2"},/*RM Setting: for tab use command*/
		{"06020010","2","2","2"},/*RM Setting: TR069 body filed*/
		{"06020011","2","2","2"},/*RM Setting: Bootstrap after reboot in TR069 */
		{"06020012","2","2","2"},/*RM SNMP: password complexity validate*/
		{"06020013","2","2","2"},/*RM tr069: password complexity validate*/
		{"15000010","2","2","2"},/*Home Cloud setting: USB Mass Storage Device*/
		{"15000020","2","2","2"},/*Home Cloud setting: Mobile User*/
		{"15000030","2","2","2"},/*OMA: Server Nonce*/
		{"15000031","2","2","2"},/*OMA: Client Nonce*/
		{"15000032","2","2","2"},/*TR069: Certificate Upload*/
		{"15000033","2","2","2"},/*Client Polling Interval in OMA*/
		{"15000034","2","2","2"},/*Client Polling Attempt in OMA*/
		{"15000035","2","2","2"},/*Client Polling Time in OMA*/
		{"15000036","2","2","2"},/*Enable Client Polling in OMA*/
		{"15000037","2","2","2"},/*ACS Server OMA*/
		{"15000038","2","2","2"},/*SNMP Engine ID->WAN MAC remove*/
		/* Wifi */
		{"07010102","2","2","2"},	/* Network Name(SSID) */
		{"07010110","2","2","2"},	/* SSID Broadcast */
		{"07010120","2","2","2"},	/* AP Isolation */
		{"07010201","2","2","2"},	/* Security */
		{"07010202","2","2","2"},	/* open*/
		{"07010203","2","2","2"},	/* 8021x*/
		{"07010204","2","2","2"},	/* WEP AUTO*/
		{"07010205","2","2","2"},	/* WPA2PSK*/
		{"07010206","2","2","2"},	/* WPAPSK*/
		{"07010207","2","2","2"},	/* WPAPSKWPA2PSK*/
		{"07010208","2","2","2"},	/* WPA2*/
		{"07010209","2","2","2"},	/* WPA*/
		{"07010210","2","2","2"},	/* WPA1WPA2*/				
		{"07010301","2","2","2"},	/* Access Control List */
		{"07020401","2","2","2"},	/* WPS */
		{"07020501","2","2","2"},	/* WiFi 11AC Region */
		
		/* multiple ssid */
    {"07020001","2","2","2"}, /* power user is 1, show SSID number */
		{"07020011","2","2","2"}, /* hide wifi EncrypType tkip option */   
    {"07020002","2","2","2"}, /* multiple ssid for WPS */ 
    {"07020101","2","2","2"}, /* Network Name(SSID1) */ 
    {"07020102","2","2","2"}, /* Network Name(SSID2) */ 
    {"07020103","2","2","2"}, /* Network Name(SSID3) */ 
    {"07020104","2","2","2"}, /* Network Name(SSID4) */ 
    {"07020105","2","2","2"}, /* SSID1 Broadcast */ 
    {"07020106","2","2","2"}, /* SSID2 Broadcast */ 
    {"07020107","2","2","2"}, /* SSID3 Broadcast */ 
    {"07020108","2","2","2"}, /* SSID4 Broadcast */ 
    {"07020201","2","2","2"}, /* Security */ 
    {"07020202","2","2","2"}, /* open */ 
    {"07020203","2","2","2"}, /* 8021x */ 
    {"07020204","2","2","2"}, /* WEP AUTO */ 
    {"07020205","2","2","2"}, /* WPA2PSK */ 
    {"07020206","2","2","2"}, /* WPAPSK */ 
    {"07020207","2","2","2"}, /* WPAPSKWPA2PSK */ 
    {"07020208","2","2","2"}, /* WPA2 */
    {"07020209","2","2","2"}, /* WPA */
    {"07020210","2","2","2"}, /* WPA1WPA2 */
    {"07020301","2","2","2"}, /* Access Control List1 */
    {"07020302","2","2","2"}, /* Access Control List2 */
    {"07020303","2","2","2"}, /* Access Control List3 */
    {"07020304","2","2","2"}, /* Access Control List4 */ 
		{"07020305","2","2","2"}, /* Max connected devices */
		{"07020306","2","2","2"}, /* wifi password display */
		{"07030301","2","2","2"}, /*wiFi certified for WLTXFSR_105GN_HUAWEI_NETONE_ANGOLA*/
		{"07030302","2","2","2"}, /* Only read wifi information*/   
		
		/* Mobile */
		{"08010101","2","2","2"},	/* Reset Mobile Network */
		{"08010201","2","2","2"},	/* Mobile Tech Mode Settings */
		{"08010301","2","2","2"},	/* Common Settings */
		{"08010401","2","2","2"},	/* start stop connection button */
		{"08010601","2","2","2"}, /* start stop connection button */
		{"08010701","2","2","2"}, /* Default 4G Mode */	
		
		/* LTE */
		{"09010101","2","2","2"},	/* start stop LTE button */ 
		{"09010201","2","2","2"},	/* PDN Type for sequans ,qualcomm*/
		{"09010211","2","2","2"},	/* special apn option for YTL*/  
		{"09010202","2","2","2"},	/* Default PDN Connection */ 
		{"09010301","2","2","2"},	/* newobj list of PLMN for Sequans*/ 
		{"09010401","2","2","2"},	/* newobj list of PLMN for Qualcomm*/ 
		{"09010501","2","2","2"},	/* show Remaining Attempts in lte_enable_ping*/  
		{"09010502","2","2","2"},	/* show Mapping VLAN*/
		{"09010503","2","2","2"},	/* show VOIP for Multiple PDN*/
		{"09010504","2","2","2"},/*lte_apn_emergency_call*/
		{"09010601","2","2","2"},	/* Dedicated Earfcn List of scan mode in cell selection*/
		{"09010602","2","2","2"},	/* hidden Mode of Earfcn/Frequency Setting in cell selection*/
		{"09010603","2","2","2"},	/* hidden Band of Earfcn/Frequency Setting in cell selection*/
		{"09010604","2","2","2"},	/*GCT when has band 5 show Scan Mode */
		{"09010605","2","2","2"},	/*show CAPS configuration-title */
		{"09010607","2","2","2"},/* hidden Earfcn/Frequency Setting in cell selection*/
		{"09010608","2","2","2"},  /*Antenna Selection*/
		{"09010609","2","2","2"},  /*Lock Specific Cell*/
		{"09010610","2","2","2"},  /*Detected Cell*/
		{"09010612","2","2","2"},  /*LTE Unlock Specific Cell Time*/
		{"09010613","2","2","2"},  /*band_priority*/
		{"09010614","2","2","2"}, /*MFBI support - show CAPS configuration*/
		{"09010616","2","2","2"}, /*Show survey plmn when Network Search's operator is disable*/
    
		/* Mobile Mode */
		/* > for current mode - in device page (or About page)*/
		{"11001000","2","2","2"}, /*None*/
		{"11011000","2","2","2"}, /*IEMI include LTE*/
    {"11011001","2","2","2"}, /*include LTE for SEQUANS*/
    {"11011002","2","2","2"}, /*LTE Support Band*/
    {"11011004","2","2","2"}, /*for DES_Mabna use*/
		{"11011012","2","2","2"}, /*UMTS Support Band*/
		{"11011022","2","2","2"}, /*GSM Support Band*/
    {"11011003","2","2","2"}, /*ICCID*/
		{"11021000","2","2","2"}, /*include WiMAX*/
    
    /* voip */
    {"12000010","2","2","2"},
    {"12000011","2","2","2"},/*Global Setting 1*/
		{"12000012","2","2","2"},/*T.38 enable*/
		{"12000013","2","2","2"},/*Line 1*/
		{"12000014","2","2","2"},/*Line 2*/
		{"12000015","2","2","2"},/*line 1 & 2 only display,can not modify*/
		{"12000016","2","2","2"},/*FAX Passthrough for GP P1*/
	  {"12000017","2","2","2"},/*username type for generl */
		{"12000018","2","2","2"},/*username type for ytl*/
		{"12000019","2","2","2"},/*password & Display Name*/	
		{"12000020","2","2","2"},/*debug message*/
		{"12000021","2","2","2"},/*Enable Auto P_CSCF Discovery of Global Setting 1 in voip telephone page*/
	  {"12000022","2","2","2"},/*User Account*/	
		{"12000023","2","2","2"},/*add EDC in voice & Fax option for YTL*/
		{"12000024","2","2","2"},/*Subscribe Event Notification*/
		{"12000025","2","2","2"},/*Call Forward Country Code*/	
		{"12000031","2","2","2"},/*Fax/Modem Re-Invite*/
		{"12000032","2","2","2"},/*DSP Nation*/
		{"12000100","2","2","2"},/*Registrar Address Information in status*/
		{"12000101","2","2","2"},/*user name in status*/
    {"12000102","2","2","2"},/*user name in status for YTL*/
    {"12000103","2","2","2"},/*user account in status*/
		{"12000104","2","2","2"},/*Secondary SIP server information*/
    
     /* Diagnostic Tools */
		{"13000010","2","2","2"},/*Ping Count, Packet Size, Ping Timeout, Max Hops*/
		{"13000011","2","2","2"},/*Status, Diagnostic Type, IP Address/Domain*/
    /* Iperf */
		{"14000010","2","2","2"},/*Iperf Command*/
    
    /* ipv6 */
		{"10010000","2","2","2"},/*ipv6 wan setting*/
		{"10010100","2","2","2"},/*DHCP-PD Enable in ipv6 wan setting*/
		{"10010200","2","2","2"},/*IPv6 Connection Type*/
		{"10010300","2","2","2"},/*DNS From*/
		{"10020000","2","2","2"},/*ipv6 lan setting*/
		{"10020001","2","2","2"},/*DHCP-PD Enable in ipv6 lan setting*/
		{"10020100","2","2","2"},/*can not modify in ntp and dns field in ipv6 lan setting*/
		{"10020200","2","2","2"},/*sip in ipv6 lan setting*/
		{"10030000","2","2","2"},/*ipv6 lease status table*/
    
    /* IAD */
		/* voip */
    {"16010010","2","2","2"},/*Registration Expiry Time in telephone setting page*/
		{"16010011","2","2","2"},/*Global Setting 1*/
		{"16010012","2","2","2"},/*T.38 enable*/
		{"16010013","2","2","2"},/*Line 1*/
		{"16010014","2","2","2"},/*Line 2*/
		{"16010015","2","2","2"},/*line 1 & 2 only display,can not modify*/
		{"16010020","2","2","2"},/*debug message in telephone setting page*/
		{"16010031","2","2","2"},/*Fax/Modem Re-Invite in telephone setting page*/
		{"16010032","2","2","2"},/*Registrar Address Information in status*/
		{"16010033","2","2","2"},/*user name in status*/
		/*wifi*/
		{"16020402","2","2","2"},   /*Working Channel*/
		{"16020102","2","2","2"},	/* Network Name(SSID) */
		{"16020110","2","2","2"},	/* SSID Broadcast */
		{"16020120","2","2","2"},	/* AP Isolation */
		{"16020201","2","2","2"},	/* Security */
		{"16020202","2","2","2"},	/* open*/
		{"16020203","2","2","2"},	/* 8021x*/
		{"16020204","2","2","2"},	/* WEP AUTO*/
		{"16020205","2","2","2"},	/* WPA2PSK*/
		{"16020206","2","2","2"},	/* WPAPSK*/
		{"16020207","2","2","2"},	/* WPAPSKWPA2PSK*/
		{"16020208","2","2","2"},	/* WPA2*/
		{"16020209","2","2","2"},	/* WPA*/
		{"16020210","2","2","2"},	/* WPA1WPA2*/				
		{"16020301","2","2","2"},	/* Access Control List */
		{"16020401","2","2","2"},	/* WPS */
    
		/* New Web Style */
		/* > Normal */
		{"20000000","2","2","2"}, /* replace it to new style : case in all*/
		/* > For Multi Mode - have to choose one below (case 1 or case 2)
		If the platform isn't in new style , choose case 2.
		If the platform doesn't combine LTE and WiMAX , choose case 2. */
		{"20000001","2","2","2"}, /* [1] for div container_havingTab [new Web]: case in that having tabs (combile LTE and WiMAX)*/
		{"20000002","2","2","2"}, /* [2] for div container: case in no tabs - common (only LTE or only WiMAX)*/
		{"20000003","2","2","2"}, /* [3] for scroll-bar [New Web] : having tabs */
		{"20000004","2","2","2"}, /* [4] for scroll-bar [New Web] : without tabs*/
			
    
    { NULL, NULL, NULL, NULL}
};
