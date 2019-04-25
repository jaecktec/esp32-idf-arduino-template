# Hello World Teplate project with esp-idf and arduino

Using:
- Version 1.0.2 of the [arduino component](https://github.com/espressif/arduino-esp32) 
- Version release/3.2 of the [esp-idf](https://github.com/espressif/esp-idf)

Make sure when moving to this directory to source the .bashrc file

have fun using it!

To use the template simply execute this command:

```
git clone git@github.com:jaecktec/esp32-idf-arduino-template.git esp32-arduino-project && \
cd esp32-arduino-project  && \
git submodule update --init --recursive && \
git remote rm origin  && \
git update-ref -d HEAD  && \
git reset && \
source .bashrc
```
