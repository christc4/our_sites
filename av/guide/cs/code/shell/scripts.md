# Shell Scripts

## Table of Contents

- [One-Liners](#one-liners)
	- [Batch Replace filename char.](#replace-filename-char)
	- [Batch rename filename, uppercase to lower](#file-rename-uppercase-lower)
	- [Batch file rename](#file-rename)
	- [Fuzzy cd](#fuzzy-cd)
	- [Screenshot to clipboard](#screenshot-clipboard)
	- [Shuffle images](#shuffle-images)
- [Batch Image Conversion](#batch-image-conversion)
- [Fuzzy edit](#fuzzy-edit)
	- [v1](#fuzzy-edit1)
	- [v2](#fuzzy-edit2)
- [Generic git-push](#git-push1)

##  <a name='one-liners'>One-Liners</a>

###  <a name='replace-filename-char'>Replace filename char.</a>

`find . -name '* *' | while IFS= read -r f; do mv "$f" "$(echo "$f" | tr ' ' '_')"; done`

This replaces every 'space' with an underscore

###  <a name='file-rename-uppercase-lower'>Convert uppercase filenames to loweer</a>

`for file in *; do mv "$file" "$(echo "$file" | tr '[:upper:]' '[:lower:]')"; done`

###  <a name='file-rename'>Batch file rename</a>

`find . -type f -name 'index.md' -execdir mv '{}' i.md \;`

###  <a name='fuzzy-cd'>Fuzzy cd</a>

`cd $(find /var/www/werc/sites -type d \( -name .git -prune \) -o \( -type d -print \) | fzf) && clear`

###  <a name='screenshot-clipboard'>Screeenshot to clipboard</a>

`import png:- | xclip -selection c -t image/png`

###  <a name='shuffle-images'>Shuffle images</a>

`find . -type f | shuf | nsxiv -ai`

##  <a name='batch-image-conversion'>Batch image conversion</a>

<object data="src/batch-image-conversion1.txt" width="350px" height="340px"></object>

##  <a name='fuzzy-edit'>Fuzzy edit</a>

###  <a name='fuzzy-edit1'>Fuzzy edit v1</a>

<object data="src/fuzzy-edit1.txt" width="350" height="210"></object>

###  <a name='fuzzy-edit2'>Fuzzy edit v2</a>

<object data="src/fuzzy-edit2.txt" width="350" height="272"></object>

##  <a name='git-push1'>Generic git push</a>

<object data="src/git-push.txt" width="350px" height="200px"></object>
