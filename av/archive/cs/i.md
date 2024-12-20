# Computer Stuff

We tricked rocks into thinking

<div id=toc>
Table of Contents:

- [GNU/Linux](#linux)
	- [Alpine](#alpine)
	- [Interjection](#interjection)
- [UNIX](#unix)
	- [Africa](#africa)
	- [Fast Food](#fast-food)
	- [Origin of Pipes](#pipes)
	- [scsh](#scsh)
	- [Unix Philosophy](#unix-philosophy)
</div>

## <a name=linux>GNU/Linux</a>

### <a name=alpine>Alpine</a>

"I use Linux as my operating system," I state proudly to the unkempt, bearded man. He swivels around in his desk chair with a devilish gleam in his eyes, ready to mansplain with extreme precision. "Actually", he says with a grin, "Linux is just the kernel. You use GNU+Linux!' I don't miss a beat and reply with a smirk, "I use Alpine, a distro that doesn't include the GNU coreutils, or any other GNU code. It's Linux, but it's not GNU+Linux."

The smile quickly drops from the man's face. His body begins convulsing and he foams at the mouth and drops to the floor with a sickly thud. As he writhes around he screams "I-IT WAS COMPILED WITH GCC! THAT MEANS IT'S STILL GNU!" Coolly, I reply "If windows was compiled with gcc, would that make it GNU?" I interrupt his response with "-and work is being made on the kernel to make it more compiler-agnostic. Even you were correct, you wont be for long."

With a sickly wheeze, the last of the man's life is ejected from his body. He lies on the floor, cold and limp. I've womansplained him to death.

### <a name=interjection>Interjection</a>

I'd just like to interject...

I'd just like to interject for a moment. What you're refering to as Linux, is in fact, GNU/Linux, or as I've recently taken to calling it, GNU plus Linux. Linux is not an operating system unto itself, but rather another free component of a fully functioning GNU system made useful by the GNU corelibs, shell utilities and vital system components comprising a full OS as defined by POSIX

Many computer users run a modified version of the GNU system every day, without realizing it. Through a peculiar turn of events, the version of GNU which is widely used today is often called Linux, and many of its users are not aware that it is basically the GNU system, developed by the GNU Project

There really is a Linux, and these people are using it, but it is just a part of the system they use. Linux is the kernel: the program in the system that allocates the machine's resources to the other programs that you run. The kernel is an essential part of an operating system, but useless by itself; it can only function in the context of a complete operating system. Linux is normally used in combination with the GNU operating system: the whole system is basically GNU with Linux added, or GNU/Linux. All the so-called Linux distributions are really distributions of GNU/Linux!

## <a name=unix>UNIX</a>

### <a name=africa>Africa</a>

I liken starting one's computing career with Unix, say as a undergraduate, to being born in East Africa. It is intolerably hot, your body is covered with lice and flies, you are malnourished and you suffer from numerous curable diseases. But, as far as young East Africans can tell, this is simply the natural condition and they live within it. By the time they find out differently, it is too late. They already think that the writing of shell scripts is a natural act.

Ken Pier, Xerox PARC (~1980s?)

### <a name=fast-food>Fast Food</a>

Last night I dreamed that the Real World had adopted the "Unix Philosophy"

I went to a fast-food place for lunch. When I arrived, I found that the menu had been taken down, and all the employees were standing in a line behind the counter waiting for my orders. Each of them was smaller than I remembered, there were more of them than I'd ever seen before, and they had very strange names on their nametags

I tried to give my order to the first employee, but he just said something about a “syntax error.” I tried another employee with no more luck. He just said “Eh?” no matter what I told him. I had similar experiences with several other employees. (One employee named “ed” didn't even say “Eh?,” he just looked at me quizzically.) Disgusted, I sought out the manager (at least it said “man” on his nametag) and asked him for help. He told me that he didn't know anything about “help,” and to try somebody else with a strange name for more information.

The fellow with the strange name didn't know anything about “help” either, but when I told him I just wanted to order he directed me to a girl named “oe,” who handled order entry. (He also told me about several other employees I couldn't care less about, but at least I got the information I needed.)

I went to “oe” and when I got to the front of the queue she just smiled at me. I smiled back. She just smiled some more. Eventually I realized that I shouldn't expect a prompt. I asked for a hamburger. She didn't respond, but since she didn't say “Eh?” I knew I'd done something right. We smiled at each other a little while longer, then I told her I was finished with my order. She directed me to the cashier, where I paid and received my order.

The hamburger was fine, but it was completely bare… not even a bun. I went back to “oe” to complain, but she just said “Eh?” a lot. I went to the manager and asked him about “oe.” The manager explained to me that “oe” had thousands of options, but if I wanted any of them I'd have to know in advance what they were and exactly how to ask for them.

He also told me about “vi,” who would write down my order and let me correct it before it was done, and how to hand the written order to “oe.” “vi” had a nasty habit of not writing down my corrections unless I told her that I was about to make a correction, but it was still easier than dealing directly with “oe.”

By this time I was really hungry, but I didn't have enough money to order again, so I figured out how to redirect somebody else's order to my plate. Security was pretty lax at that place. As I was walking out the door, I was snagged by a giant Net. I screamed and woke up.

`The above essay is found on the net dating back to at least 1984. The author may be Bob Peirce.`

### <a name=pipes>Origin of Pipes</a>

In a typewritten piece of paper, Doug Mcllroy described pipes long before the advent of Unix.

Summary--what's most important. To put my strongest concerns into a nutshell:

- We should have some ways of coupling programs like garden hose--screw in another segment when it becomes necessary to massage data in another way. This is the way of IO also.
- Our loader should be able to do link-loading and controlled establishment.
- Our library filing scheme should allow for rather general indexing, responsibility, generations, data path switching.
- It should be possible to get private system components (all routines are system components) for buggering around with.

_M. D. McIlroy, October 11, 1964_

### <a name=scsh>scsh</a>

Shell programming terrifies me. There is something about writing a simple shell script that is just much, much more unpleasant than writing a simple C program, or a simple COMMON LISP program, or a simple Mips assembler program. Is it trying to remember what the rules are for all the different quotes? Is it having to look up the multi-phased interaction between filename expansion, shell variables, quotation, backslashes and alias expansion? Maybe it's having to subsequently look up which of the twenty or thirty flags I need for my grep, sed, and awk invocations. Maybe it just gets on my nerves that I have to run two complete programs simply to count the number of files in a directory (ls | wc -l), which seems like several orders of magnitude more cycles than was really needed - Olin Shivers, author of scsh, 1994

### <a name=unix-philosophy>Unix Philosophy</a>

This is the Unix philosophy: 

"Write programs that do one thing and do it well. Write programs to work together. Write programs to handle text streams, because that is a universal interface" - Doug McIlroy, the inventor of Unix pipes.  

McIlroy78 The Bell System Technical Journal. Bell Laboratories. M. D. McIlroy, E. N. Pinson, and B. A. Tague. Unix Time-Sharing System Forward 1978 57 6, part 2. p. 1902.

Eric S. Raymond, in his book The Art of Unix Programming, summarizes the Unix philosophy as the widely-used KISS Principle, "Keep it Simple Stupid"

In 1994 Mike Gancarz (a member of the team that designed the X Window System), which sums it up in 9 paramount precepts:

- Small is beautiful
- Make each program do one thing well
- Build a prototype as soon as possible
- Choose portability over efficiency
- Store data in flat text files
