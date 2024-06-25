//************************************
//* WiFi Configuration               *
//************************************
const char *ssid = "SSID";  // Wifi network name, will connect to this
const char *password = "PASSWORD"; // and this is the password

//************************************
//* Modules                          *
//************************************
#define PROMETHEUS_ENABLED // Start an HTTP server and expose the temperature and humidity on /metrics
#define SNMP_ENABLED // Expose the temperature and humidity through SNMP

//************************************
//* SNMP Configuration               *
//************************************
const char* readOnlyCommunity = "public";  // Read only community string
const char* readWriteCommunity = "private"; // Read Write community string for set commands

//************************************
//* Sensor Configuration             *
//************************************
// Currently only supports DHT sensors
#define DHTPIN 23     // Digital pin connected to the DHT sensor (Default: 23)
#define DHTTYPE DHT22 // DHT 22 (AM2302), AM2321 (Default: DHT22)
