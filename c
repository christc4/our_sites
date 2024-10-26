#!/bin/rc

path=(. /bin)

fn runh { $*(1) $*(2-) }

fn tmp {
	for (h in $bar) {
		runh $$h
	}
	runh $md
}

fn run {
	rpaf=`{echo $REQUEST_URI}
	lpaf=av$rpaf
	ifs='/'
	args = `{echo $rpaf}

	if (test -d $lpaf) {
		lpaf = $lpaf^'i'
	}

	rpafs='/'; conf_wd='/'

	for (i in $args) {
		conf_wd = $conf_wd^$i
		rpafs = ($rpafs $conf_wd)
		conf_wd = $conf_wd'/'
	}

	md = (mh $lpaf.md)
	echo; tmp
}

fn sbar {
	ls -F av/./$rpafs | sed -e 's,/+\./+,/,g' \
	-e '/\/i\.(md)$/d' \
	-e '/\/s\.(json)$/d' \
	-e 's/\.(md)$//' -e 's!^av!!' | sort | awk -F/ '
	function p(x, y, s) { for (i=0; i<x-y; i++) printf s }
	BEGIN {
		lNF = 2
		print "<style>nav li ul{padding-left:.5em}body{display:flex;flex-wrap:wrap;margin:0 26%}article{flex:1}nav{min-width:12em}nav ul{border-bottom:1px solid;}nav ul{list-style: none}a:hover{color: red}</style><meta charset=utf-8><nav><ul>"
	}

	{
		sub("/$", "", $0)
		p(NF, lNF, "<li><ul>"); p(lNF, NF, "</ul>")
		lNF = NF; fp = $NF
		printf "<li><a href=\%s\>%s</a>", $0, fp
	}

	END {
		p(lNF, 2, "</ul>")
		print "</ul></nav><article><p>Site under construction, a lot of pages especially code may be broken"
	}'
}

fn add {
	_l = $1^_^$#$1
	$_l = $*(2-)
	$1 = ($$1 $_l)
}

add bar sbar; run
