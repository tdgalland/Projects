#!/bin/bash 

qdbus org.kde.KWin /Compositor resume
tuned-adm profile laptop-battery-powersave
