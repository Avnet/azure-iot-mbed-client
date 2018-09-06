# Overview
This code provides an example implementation of an Azure IoT Client using a Cellular data connection.  The code follows the style and content of the othere examples Microsoft provides (see https://docs.microsoft.com/en-us/azure/iot-hub/iot-hub-get-started-physical) but is taliored to use the [ARM Mbed OS](https://github.com/ARMmbed/mbed-os) (currently at v5.x) and the [ARM Easy-Connect](https://github.com/ARMmbed/easy-connect) framework. 

Generally speaking, there are two steps necessary to exercise this example code:
1. Setting up and configuring an Azure IoT Hub
2. Creating the IoT Client code and running it on the IoT End Device

This repository focues on step #2.  To learn more about step #1 refer to the Element14 blog post () or any of the [Microsoft examples](https://docs.microsoft.com/en-us/azure/iot-hub/iot-hub-get-started-physical).

# Hardware Used
The hardware platform used for this project consists of:

* STM32 Nucleo-64 development board
* Motion MEMS and environmental sensor board
* Avnet RSR1157 NBIoT BG96 Expansion Board

## Note
  The code used to develop this example utilized the following STM32 Nucleo-L476RG and Quectel BG96 Module Firmware:
  
      * BG96 Modem SW Revision: BG96MAR02A04M1G
      * STM32 Version: 0221 / Build: Mar 16 2018 10:08:46


# Building the samples:
To build the Sample program, you must use the mbed command line tools (mbed CLI).

## On-line compiler
1. Navigate to the [on-line compiler](https://os.mbed.com/compiler)
2. Select the NUCLEO-L496ZG as the platform to be used
3. Select the ***'Import'*** button, then the ***'Click here'*** hyperlink to bring up the import dialog
4. Insert 'https://github.com/jflynn129/aws-iot-device-sdk-mbed-c' as the source dialog and select the ***Update all libraries to the latest revision*** check box. After performing those two steps, select the ***'Import'*** button to import the project into you on-line workspace

The program is now loaded into your on-line workspace, by default, if you press the ***'Compile'*** button, the program is built. Once compiled,  the executable binary file will be placed into your computers 'Downloads' folder so you can copy it to your STM32 board.


# Next steps
After You’ve run this sample application, collected sensor data, and interacted with your IoT hub, you may want to exercise some of the other Azure IoT scenarios.  See the following tutorials:

|Scenario                                  | Azure service or tool               |
|----------------------------------------  |:----------------------------------- |
|[Manage IoT Hub messages]( https://docs.microsoft.com/en-us/azure/iot-hub/iot-hub-explorer-cloud-device-messaging)                  | iothub-explorer tool                |
|[Manage IoT Hub messages](https://docs.microsoft.com/en-us/azure/iot-hub/iot-hub-vscode-iot-toolkit-cloud-device-messaging)                   | VS Code Azure IoT Toolkit extension |
|[Manage your IoT device](https://docs.microsoft.com/en-us/azure/iot-hub/iot-hub-device-management-iot-extension-azure-cli-2-0)                    | Azure CLI 2.0 and the IoT extension |
|[Manage your IoT device](https://docs.microsoft.com/en-us/azure/iot-hub/iot-hub-device-management-iot-toolkit)                    | VS Code Azure IoT Toolkit extension |
|[Save IoT Hub messages to Azure storage]()    | Azure table storage                 |   
|[Visualize sensor data](https://docs.microsoft.com/en-us/azure/iot-hub/iot-hub-live-data-visualization-in-power-bi)                     | Microsoft Power BI                  |
|[Visualize sensor data](https://docs.microsoft.com/en-us/azure/iot-hub/iot-hub-live-data-visualization-in-web-apps)                     | Azure Web Apps                      |
|[Forecast weather with sensor data](https://docs.microsoft.com/en-us/azure/iot-hub/iot-hub-weather-forecast-machine-learning)         | Azure Machine Learning              |
|[Automatic anomaly detection and reaction](https://docs.microsoft.com/en-us/azure/iot-hub/iot-hub-monitoring-notifications-with-azure-logic-apps)  | Azure Logic Apps                    |


