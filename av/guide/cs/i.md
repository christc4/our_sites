Computers are the closest thing mankind has to magic

<div id=toc>
Table of Contents

- [Core Utils](#core-utils)
	- [tree](#tree)
		- [Generate sitemap](#tree-sitemap)
	- [sed](#sed)
- [imagemagick](#imagemagick)
- [ffmpeg](#ffmpeg)
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

`gs -dSAFER -dBATCH -dNOPAUSE -sDEVICE=pngalpha -r300 -sOutputFile=output-%d.png input.pdf`

# Imagemagick

<img src=".pix/imagemagick_wizard.avif" style="width:100px;">

## Remove Whitespace

	convert -trim

## Flip images

To flip vertically

	convert input.jpg -flip output.jpg

To flip horizontally

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
