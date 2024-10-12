# SSHFS

2024/10/05

From local machine 

	sudo sshfs root@avsbq.org:/var/www/werc/sites/ /mnt/avsbq.org

## Common error

If you recently reinstalled server OS and try again you might get an error and even if you've made a previous successful ssh connection...

	Connection reset by peer

First, 

	Subsystem sftp /usr/lib/openssh/sftp-server

Add this line to

	/mnt/ssh/sshd_config

<object data=txt/sshfs1.txt width=530 height=60></object>

<object data=txt/sshfs_error_log.txt width=870 height=320></object>

Remove offending key

	ssh-keygen -R avsbq.org

reattemppt connection

If it says 'remote host has disconnected'

on OpenBSD it's

	rcctl restart sshd
