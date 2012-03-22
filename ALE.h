/* NETWORK DEFINITIONS */
#define BROADCAST 255
#define COORDINATOR 0

/* LIGHT RELATED DEFINITIONS */
#define CCT 1
#define WW 0
#define CW 1
#define WARMWHITE 0
#define COOLWHITE 1
#define WARM 0
#define COOL 1
#define WW_PIN 5
#define CW_PIN 6

/* SHARED VARIABLE DEFINITIONS */
/* booleans */
#define VAR_LIGHTON 0
/* 8-bit ints */
#define VAR_CCT 0
#define VAR_INT 1
/* 16-bit ints */

/* 32-bit ints */

/* FUNCTION CALL DEFINITIONS */
#define OFF 0              
#define ON 1
#define TOGGLE 2
#define INTENSITY_TO 3
#define CCT_TO 4     
#define CCT_INTENSITY_TO 5
#define LIGHT_PARAMETERS 6
#define POGO 10

#define HELLO_WORLD 101  	//Introduce self to the network
#define HELLO_NODE 102		//Return the favour
#define REQUEST_INFO 110	//Request the most basic info of the node
#define SUBMIT_INFO 111		//Submit the most basic info of the node
#define REQUEST_BOOL 112	//Request for a boolean
#define SUBMIT_BOOL 113		//The response of requesting a boolean
#define REQUEST_VAR_8 114	//Request for an 8-bit variable
#define	SUBMIT_VAR_8 115	//The response of requesting an 8-bit variable
#define REQUEST_VAR_16 116	//Request for an 16-bit variable
#define SUBMIT_VAR_16 117	//The response of requesting a 16-bit variable
#define GET_FIRMWARE 118	//Requests the firmware information from the node
#define FIRMWARE_INFO 119	//Reports the info regarding the firmware


#define ERROR_MESSAGE 255	//An error message

/* OTHER DEFINITIONS */
#define STD_DURATION 1000
#define SWITCH_DURATION 100
#define FIRMWARE 101
#define DEBUG 255