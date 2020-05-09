This is a cookiecutter template for anyone who wants to create an ESP32 application
who's primary purpose is to be a web server and to be interacted with via a REST
API.

# Usage

```
cookiecutter -c v0.0.0 git@github.com:BrianPugh/cookiecutter-esp32-webserver.git
```


# OTA
This sets up the boiler plate to allow OTA over WiFi via 2 different methods:

1. Querying a URL for TODO upon startup 
2. Uploading over the endpoint `/api/v1/ota`

## WebServer
Many times you just want a web server to serve a REST API to control hardware.
This sets up code and gives you nearby simple examples to base your API of of.


# Misc tips

If you are unfamiliar with working with C/esp-idf projects, this section is 
meant to help out simple oversights/issues.

## Undefined references
If everything compiles, but you are having undefined references at the end
during linking, its probably because your forgot to add the c-file to 
`src/CMakeLists.txt`.
