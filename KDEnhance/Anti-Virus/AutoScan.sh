#!/bin/bash
 
DIR=$HOME/Downloads
ICON=/usr/share/icons/breeze/status/64

# Get rid of old log file, if any
rm $HOME/.virus-scan.log 2> /dev/null
rm $HOME/.virus-quarantine/* 
 
IFS=$(echo -en "\n\b")
 
# Optionally, you can use shopt to avoid creating two processes due to the pipe
shopt -s lastpipe
inotifywait --quiet --monitor --event close_write,moved_to --recursive --format '%w%f' $DIR | while read FILE
# Added '--recursive' so that a directory copied into $DIR also triggers clamscan/clamdscan, although downloads
# from the Web would just be files, not directories.
do
     # Have to check file length is nonzero otherwise commands may be repeated
     if [ -s $FILE ]; then
          # Replace 'date >' with 'date >>' if you want to keep log file entries for previous scans.
          date > $HOME/.virus-scan.log
          clamdscan --move=$HOME/.virus-quarantine $FILE >> $HOME/.virus-scan.log
          SIZE=$(stat -c%s $FILE)
          if [ $SIZE -ge 25000000 ]; then
                notify-send -i $ICON/security-medium.svg "Scanning..." "File is being scanned."
          fi
          RESULT=`egrep -c 'Infected files: [0-9]*[1-9]' $HOME/.virus-scan.log`
          if [ $RESULT -gt 0 ]; then
                notify-send -i $ICON/security-low.svg "Infected File" "$(sed -n '/SCAN/{n;p;n;p;n;p}' $HOME/.virus-scan.log)"
          else 
                notify-send -i $ICON/security-high.svg  "Safe File" "$(sed -n '/SCAN/{n;p;n;p;n;p}' $HOME/.virus-scan.log)"
          fi
     fi
done
