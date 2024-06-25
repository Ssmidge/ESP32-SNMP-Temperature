# Using a DHT22 sensor with SNMP
## Why?
After CraftComputing released the Axe Effect sensor, I wanted to get one, however I couldn't afford spending $64.99 for each one.
I started researching on the available libraries and existing projects for an ESP32, but none existed, I created this project as a budget SNMP-based network-controlled sensor

## Hardware
| Hardware | Estimated Price | Model                          |
|----------|-----------------|--------------------------------|
| ESP32    | 7 USD           | Any board with atleast 30 pins |
| DHT22    | 5 USD           | Needs atleast 3 pins           |

## Setup
1. Download the repository using the "Download as ZIP" button.
2. Change the SSID and password to your WiFi network's details.
3. Change the data pin for the DHT(11/22) sensor, and finally download it to your ESP32 (ESP8266 is untested) using the Arduino IDE.
4. Connect to the board using a baud rate of 115200.
5. To test, open http://IP/metrics in a web browser
6. Enjoy!
