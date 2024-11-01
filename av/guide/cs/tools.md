Computers are the closest thing mankind has to magic

<div id=toc>
Table of Contents

- [Core Utils](#core-utils)
	- [tree](#tree)
		- [Generate sitemap](#tree-sitemap)
	- [sed](#sed)
- [imagemagick](#imagemagick)
- [ffmpeg](#ffmpeg)
- [sshfs](#sshfs)
- [tmux](#tmux)

<hr>

`$EDITOR`

- [acme](#acme)
- [vim](#vim)

</div>

## <a name=core-utils>Core Utils</a>

### <a name=tree>tree</a>

#### <a name=tree-sitemap>Generate sitemap</a>

`tree -H ./ > sitemap.html`

### <a name=sed>sed</a>

## Removing all instances of the "<" sign

	sed -i 's/>//g' yourfile.md

- `-i` tells sed to edit the file, rather than output modified text to standard outputA
- `s` stands for substitution
- `//` The replacement string is between the second and third slashes. Since there is nothing between these slashes, sed replaces > with nothing 
- `g` stands for global, replacing every instance

## Change all instances of a string

	sed -i 's/webp/avif/g' filename

Creates backup

	sed -i.bak 's/webp/avif/g' filename

## Remove the pattern "../"

	sed -i 's/\.\.\///g' filename.html

## Misc

	sed -i 's/\<str\>/gif/g' filename.html

s/\<str\>/gif/g: Substitute (s) str with gif, where \< and \> ensure that only the exact word str is replaced, not occurrences where str is a part of another word.

@

## Loop

	for file in *.md; do sed -i 's|\.pix/||g' "$file"; done

removes every instance of .pix/

sed 's/="\./="/' filename


sed 's/\.md//g' filename

## <a name=ghostscript>ghostscript</a>

`gs -dSAFER -dBATCH -dNOPAUSE -sDEVICE=pngalpha -r300 -sOutputFile=output-PERCENTSIGNd.png input.pdf`

# Imagemagick

todo

`convert -background none -fill black -pointsize 48 label:"c@avsbq.org·" -virtual-pixel none -distort Arc 360 avsemail.pn`

 ## Remove Whitespace

	convert -trim

## Flip images

To flip horizontally

	convert input.jpg -flip output.jpg

To flip vertically

	convert input.jpg -flop output.jpg

## Dithering

	convert tux.webp -resize 384 -dither FloydSteinberg -remap pattern:gray50 tux.webp

Ordered

	convert invader.webp -colorspace gray -ordered-dither o8x8 invader2.webp

## Rotate

## Anti-clockwise

	convert dumbbell.jpg -rotate -90 dumbbell1.jpg

## Clockwise

Same command as before but! omit the `-` before `90`

# ffmpeg

For delay

	ffmpeg -i a.mp4 -itsoffset 2 -i a.m4a -c:v copy -c:a aac -strict experimental b.mp4

Combine video and audio

	ffmpeg -i a.mp4 -i a.m4a -c:v copy -c:a aac -strict experimental b.mp4

## converting videos

	ffmpeg -i a.mkv -codec copy a.mp4

## <a name=sshfs>SSHFS</a>

2024/10/05

From local machine 

	sudo sshfs root@avsbq.org:/var/www/werc/sites/ /mnt/avsbq.org

## Common error

If you recently reinstalled server OS and try again you might get an error and even if you've made a previous successful ssh connection...

	Connection reset by peer

First, 

	Subsystem sftp /usr/lib/openssh/sftp-server

Add this line to

`/mnt/ssh/sshd_config`

<object data=/src/sshfs1.txt width=530 height=60></object>

<object data=/src/sshfs-error-log.txt width=870 height=320></object>

Remove offending key

`ssh-keygen -R avsbq.org`

reattemppt connection

If it says 'remote host has disconnected'

on OpenBSD it's `rcctl restart sshd`

## <a name=tmux>tmux</a>

## <a name=acme>acme</a>

<details><summary>Resources used:</summary>
[evbogdanox](//github.com/evbogdanov/acme/blob/master/README.md)
</details>

<img src="/pix/acme-mouse-chords.png" style="width:410px; height: auto;"> Image by Tom Lieber

`Edit =`

Find current line number

`:13`

Go to the 13th line

`:0`

Go to file beginning

`:$` 


:1,5 or Edit 1,5 select lines 1..5
Edit , d clear window
Edit , < echo hello world replace window body with some text
Edit , < erl -man maps replace window body with erlang manual
Edit , s/text/TEXT/g or Edit , | sed 's/text/TEXT/g' global replace
$winid current window id
echo some text | 9p write acme/$winid/body append to the end of current window
keyboard shortcuts:
ctrl-u delete from cursor to start of line
ctrl-w delete word before the cursor
ctrl-h delete character before the cursor
ctrl-a move cursor to start of the line
ctrl-e move cursor to end of the line
ctrl-i tab
ctrl-j enter
ctrl-f filepath autocompletion
press esc to select the last typed text
press esc again to delete any selected text

## <a name=vim>vim</a>

### <a name=Movement

<img src="/pix/vim-movement-table.png" style="width:450px; height: auto;">

Vim tutorial


## What you MUST do

### No. 1

Stop using default keybinds to save a file, don't bother with 

To default save a file one has to...

- hold shift
- press ':'
- enter 'w'

if you are not already in escape mode one has to 

- press 'esc'

that is too many keypresses,

even 'ZZ' is no good  

# Useful

- `gj` and `gk`
	- move cursor up and down to wrapped part of a line
- `g0` and `g$`
	- move cursos te first and last letter of wrapped line
- `gq`
	- turn long line into multiple lines
- `gu` and `gU` 
	- uncapitalize and capitalize words/lines
- `~` and `g~`
- `gf` 
	- open highlighted text as file
- `gJ`
	- conjoining lines without leaving spaces
- `<`
	- remove indent, first highlight

- `>` 
	- apply indent, firsh highlight

Vim includes a man page viewer, :Man , in its runtime files. Even better, you can just place your cursor on a word in the buffer and press <Leader>K ( \K ) to see the man page for that word.24 May 2013


set mouse=a

<img src="/pix/vim-cigarretes.avif" style="width:250px; height: auto;">

### <a name=vim-personal-config>Personal config</a>

<object data=/src/conf/vimrc.txt></object>
