# Change space in filename to underscore

> Tested on OpenBSD 7.5, ksh

<code>find . -name '* *' | while IFS= read -r f; do mv "$f" "$(echo "$f" | tr ' ' '_')"; done</code>
