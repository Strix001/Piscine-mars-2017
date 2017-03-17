r=$(ifconfig | grep "inet " | sed "s/^.inet //" | grep -v "127.0.0.1")
if [[ $(echo $r | wc -l | awk '{print $1}' ) -eq 0 ]]; then
	echo "Je suis perdu!"
else
	echo $r | awk '{print $1}'
fi
