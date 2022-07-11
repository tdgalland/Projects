#!/bin/bash 

qdbus org.kde.KWin /Compositor suspend
tuned-adm profile laptop-battery-powersave
