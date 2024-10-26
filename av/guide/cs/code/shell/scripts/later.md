`du -sk * | sort -nr | awk '{print $1/1024 " MB\t" $2}'`

