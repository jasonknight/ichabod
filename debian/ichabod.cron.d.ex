#
# Regular cron jobs for the ichabod package
#
0 4	* * *	root	[ -x /usr/bin/ichabod_maintenance ] && /usr/bin/ichabod_maintenance
