#!/bin/bash
# Execute this file to recompile locally
c++ -Wall -shared -fPIC -std=c++11 -O2 -I/usr/include -I/home/pkonzen/.cache/dijitso/include ffc_form_8db92be85d5d4335e0aa86528e0b9411e1c87c22.cpp -L/home/pkonzen/.cache/dijitso/lib -Wl,-rpath,/home/pkonzen/.cache/dijitso/lib -ldijitso-ffc_element_e7db48c1635ad4ee6cf361699ff77263f7a701a9 -ldijitso-ffc_element_0fec4b083a6593131f559cf21e5448c0f3d8456e -ldijitso-ffc_element_50da0ce57c35beb4e107029c812314ee1c0a321c -ldijitso-ffc_element_8cdf7e4a46861af16363c8d9dd5807cf5eb2e11e -ldijitso-ffc_coordinate_mapping_6edea55ab240c4169138312a4fd41d9b681a7166 -olibdijitso-ffc_form_8db92be85d5d4335e0aa86528e0b9411e1c87c22.so