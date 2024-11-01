#!/bin/rc

path=(. /bin)

fn tmp {
	for (h in $bar) {
		$*(1) $$h $*(2-)
	}
	$*(1) mh $lpaf.md $*(2-)
}

fn run {
	req=`{echo $REQUEST_URI}
	lpaf=av$req
	rpafs='/'; wd='/'; ifs='/'
	arg = `{echo $req}

	if (test -d $lpaf) {
		lpaf = $lpaf^'i'
	}

	for (i in $arg) {
		wd = $wd^$i
		rpafs = ($rpafs $wd)
		wd = $wd'/'
	}

	echo; tmp
}

fn sbar {
	ls -F av/./$rpafs | sed -e 's,/+\./+,/,g' \
	-e '/\/i\.(md)$/d' \
	-e 's/\.(md)$//' -e 's!^av!!' | sort | awk -F/ '
	function p(x, y, s) { for (i=0; i<x-y; i++) printf s }
	BEGIN {
		lNF = 2
		print "<style>img{width:150px}nav li ul{padding-left:.5em}body{display:flex;flex-wrap:wrap;margin:20 26%}article{flex:1}nav{min-width:12em}nav ul{border-bottom:1px solid;}nav ul{list-style: none}#tagcloud{display: flex;flex-wrap: wrap; gap: 5px;font-size: .7em;}#toc{position:fixed;right:140px;padding:10px;width:222px;max-height:80vh;overflow-y:auto;max-height:80vh;z-index:1000}</style><meta charset=utf-8><nav><ul>"
	}

	{
		sub("/$", "", $0)
		p(NF, lNF, "<li><ul>"); p(lNF, NF, "</ul>")
		lNF = NF; fp = $NF
		printf "<li><a href=\%s\>%s</a>", $0, fp
	}

	END {
		p(lNF, 2, "</ul>")
		print "</ul></nav><article><p><b>Site under huge construction, a lot of pages may be broken!</b></p>"
	}'
}

fn add {
	_l = $1^_^$#$1
	$_l = $*(2-)
	$1 = ($$1 $_l)
}

add bar sbar; run
