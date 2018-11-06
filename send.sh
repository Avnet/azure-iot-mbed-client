#iothub-explorer send STL496ZG-BG96 $* --login "HostName=XXXX;SharedAccessKeyName=iothubowner;SharedAccessKey=XXXX"
#
az iot device c2d-message send --login "HostName=XXX;SharedAccessKeyName=XXX;SharedAccessKey=XXX" --device-id XXX --data "$*"
