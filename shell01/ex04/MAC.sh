#!/bin/sh

ifconfig | grep ether | grep -o -E '([[:xdigit:]]{2}:){5}[[:xdigit:]]{2}' 
