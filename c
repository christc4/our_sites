#!/bin/rc
path=(. /bin);fn run{dir=avsbq;cork_root=`{pwd};rpath=`{echo -n $REQUEST_URI};lpath=$dir$rpath;ifs='/'{args=`{echo -n $rpath}};if(test -d $lpath){lpath=$lpath^'index'};cd $dir;rpaths='/';conf_wd='/'; for(i in $args){conf_wd=$conf_wd^$i;rpaths=($rpaths $conf_wd);conf_wd=$conf_wd'/';cd $i};cd $cork_root; body=(m2h $lpath.md); echo; tmp}; fn sbar { echo -n '<style>nav li ul{padding-left:.5em}body{display:flex;flex-wrap:wrap;margin:0 20%}article{flex:1}nav{min-width:12em}nav ul{list-style:none}nav ul{border-bottom:1px solid;}img{width:150}</style><nav><ul>'; ls -F $dir/./$rpaths | sed -e 's,/+\./+,/,g' -e 's,^\./,,' -e '/\/index\.(md)$/d' -e '/\/[^\/]*(\.(md)|\/)$/!d' -e 's/\.(md)$//; s!^'$dir'!!' | sort | awk -F/ 'function p(x,y,s) {for(i=0;i<x-y;i++) printf s} BEGIN { lNF = 2 } { sub("/$", "", $0); p(NF, lNF, "<li><ul>"); p(lNF, NF, "</ul>"); lNF = NF; fp = $NF; gsub(/[\-_]/, " ", fp); printf "<li><a href=\%s\>%s</a>", $0, fp } END { p(lNF, 2, "</ul>"); printf "</ul></nav>" }'; };fn runh{$*(1) $*(2-)};fn tmp{for(h in $bar){runh $$h};runh $body};fn add{_l=$1^_^$#$1;$_l=$*(2-);$1=( $$1 $_l )};add bar sbar;run
