#!/bin/bash

LANG=C xdg-user-dirs-gtk-update
sudo apt update && sudo apt upgrade -y && sudo apt autoremove -y && sudo snap refresh
sudo apt install tree clamtk whois vlc git clang gcc default-jdk