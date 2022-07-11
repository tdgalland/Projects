#!/bin/bash
#----------------------MODSLEEP----------------------#
modsleep() {
	now=`date +%s`
	mod="$1"
	to_sleep=`expr "$mod" - '(' "$now" % "$mod" ')'`
	sleep "$to_sleep"
}
#----------------------------------------------------#
sleep 15
while true
do
    HOUR="$(date +"%H")"
    if [ $HOUR -ge 22 -o $HOUR -le 7 ]
    then
        lookandfeeltool -a #'DarkTheme' && sleep 15      <- Dark Theme Here
    else
        lookandfeeltool -a #'LightTheme' && sleep 15     <- Light Theme Here
    fi
    modsleep 3600
done
exit 0
