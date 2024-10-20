# An Interview with Brian Kernighan

> [Source](https://www.talisman.org/~erlkonig/misc/kernighan-interview/)

# Introduction

During the summer of 1999 I had the chance to be a research intern at Bell Labs, the research arm of Lucent Technologies. I dared then to ask Dennis Ritchie and Brian Kernighan for an autograph on their C Book.
In the summer of 2000 I went again at Bell Labs for a research stage. This time I boldly ventured to ask Brian Kernighan for an interview for the Romanian computer magazine PC Report Romania, for which I am assistant editor. He has very kindly replied:

    Date: Mon, 10 Jul 2000 14:52:15 -0400
    To: mihaib@research.bell-labs.com
    From: "Brian Kernighan"
    Subject: re: odd request
    
    sure, no problem.  i'm probably pretty boring, but since
    i don't read romanian, you can make things up...
    
    come by any time; i'm mostly around.
    
    brian

The interview has appeared in the August issue of the magazine, in Romanian. However, I reckoned that Mr. Kernighan's opinions may make very interesting reading for an English-speaking audience too, so I decided to also release (with his approval) the interview in English. Here it is; enjoy! BTW: nothing is made up!

# The Interview

M: What is the correct way to pronounce your name? I heard that it is not the obvious way?

K: It's pronounced Kernihan, the g is silent.

M: You chose to work in computer science when this was not such an obvious career choice. Can you tell us about how you made this choice and what you think in retrospect about this choice?

K: It's true that I started working with computers probably in the mid to late sixties, when things were fairly early on, and it was entirely by accident. I think I saw my first computer in 1963; it was an old IBM 650. I didn't do any serious programming until in 1964 when I was in my last year of college. But it was fun, and it was before computer science was in any sense a field. When I went to graduate school there was a Computer Science program in the Electrical Engineering Department at Princeton. This was fairly typical of a lot of places: computer science was not a separate academic field, it was just part of some department that might have a computer or people interested in computation, so I just backed into it, entirely by accident. This has been a lucky accident, because obviously the field has had a lot of interesting things happen.

M: You've been in this area for a long time, and you've been a very important player in the evolution of computer science. Some of your work has had a profound impact. Can you point out some things that you consider fundamental advances in computer science in the last 30 years, some changes of paradigm that have happened?

K: I think that there have been a fair number of changes, not necessarily in ``computer science'', but in computing in general. Obviously the fact that hardware has gotten enormously faster: Moore's law, although it is a simple quantitative change, its exponential growth applied for 30 years makes an enormous change; some piece of that relies on computer science, but not much. At the same time, the thing I am more familiar with, and more interested in technically, is the use of various kinds of programming languages so that we're better able to convey to a machine what we want to do. The growth of languages, of the technology for understanding how to express things for a machine, has had an enormous impact as well. Of course, as machines had gotten more powerful, you could afford to devote more resources and use languages that were not efficient 25 or 30 years ago but which are now usable. Other important changes are algorithmic improvements, which truly belong to computer science; also the idea of NP-completeness, which enables us to think about what's easy and what's hard. But as far as I am concerned, the thing I find most interesting is the growth in programming languages.

M: Over the years you have worked on many different areas: graph algorithms, software engineering and software tools, digital typography, but most of your research was in programming languages. What are your current research interests?

K: [laughing] It's interesting, what I've been doing for the last couple of days is a hack-attack back to almost my earliest roots in computerized document preparation or digital typography if you like. I have been working on taking eqn, which is a program Lorinda Cherry and I wrote back in 1974, and converting it to produce output in XML or HTML, so we can put mathematics more easily on web pages. There are a lot of people who have tried various takes on this, but none of them seem to be very good or at least not ready for use yet. We have a local need for it, so I am sitting there and working on it, a C program that I wrote literally more than 25 years ago. It's a very small C program, and I am having great deal of fun trying to fix it up. This is one piece of what I am doing, a very small thing, but it's kind of fun go back and redo something that I've spent time on so many years ago.

The other thing that I'm working on is a language called AMPL which David Gay and Bob Fourer and I did; AMPL is a language for specifying optimization problems, for setting things up like linear programming problems. We're trying to wrap it up so that it can be used as part of larger processes. We're putting an object-oriented interface on it, so it can be buried inside of some other programs or used as a COM or CORBA object.

These are the two things that I'm doing at the moment.

M: Speaking of programming languages, does the eqn program still compile?

K: Yes, it still compiled, I probably hadn't compiled it for five or ten years and it compiled without any problem whatsoever. It's a very simple and small C program; I probably converted it to ANSI C back in the late '80s. What I've been doing is mostly throwing things away because the output language now is simpler than before.

M: Most people probably know you because of the C book, so let me ask you a couple of questions about the C language. C indeed has had a very profound influence; what do you think are the most valuable features of the C language?

K: C is the best balance I've ever seen between power and expressiveness. You can do almost anything you want to do by programming fairly straightforwardly and you will have a very good mental model of what's going to happen on the machine; you can predict reasonably well how quickly it's going to run, you understand what's going on and it gives you complete freedom to do whatever you want. C doesn't put constraints in your way, it doesn't force you into using a particular programming style; on the other hand, it doesn't provide lots and lots of facilities, it doesn't have an enormous library, but in terms of getting something done with not too much effort, I haven't seen anything to this day that I like better. There are other languages that are nice for certain kinds of applications, but if I were stuck on a desert island with only one compiler I'd want a C compiler.

M: Actually C is also my favorite programming language, and I've written a lot of programs in it, but since I began writing compilers for C, I have to confess I've begun to like it less. Some things are very hard to optimize. Can you tell us about the worse features of C, from your point of view?

K: I can't comment on the "worse", but remember, C is entirely the work of Dennis Ritchie, I am but a popularizer and in particular I cannot say what is easier or hard to compile in C. There are some trivial things that are wrong with C: the switch statement could have been better designed, the precedences of some operators are wrong, but those are trivial things and everybody's learned to live with them. I think that the real problem with C is that it doesn't give you enough mechanisms for structuring really big programs, for creating ``firewalls'' within programs so you can keep the various pieces apart. It's not that you can't do all of these things, that you can't simulate object-oriented programming or other methodology you want in C. You can simulate it, but the compiler, the language itself isn't giving you any help. But considering that this is a language which is almost 30 years old now and was created when machines were tiny compared to what they are today, it's really an amazing piece of work and has stood the test of time extremely well. There's not much in it that I would change.

Sometimes I do write C++ instead of C. C++ I think is basically too big a language, although there's a reason for almost everything that's in it. When I write a C program of any size, I probably will wind-up using 75, 80, 90% of the language features. In other words, most of the language is useful in almost any kind of program. By contrast, if I write in C++ I probably don't use even 10% of the language, and in fact the other 90% I don't think I understand. In that sense I would argue that C++ is too big, but C++ does give you may of the things that you need to write big programs: it does really make it possible for you to create objects, to protect the internal representation of information so that it presents a nice facade that you can't look behind. C++ has an enormous amount of mechanism that I think is very useful, and that C doesn't give you.

M: I have a question about research in language design. It's interesting for instance that Java is very much hyped and the community is split among the merits and flaws of the language. The language has indeed acquired some nice features proposed by researchers in the area (like garbage collection), but also the researchers point some of its weaknesses (like the arrays which are covariant and they shouldn't be). There's a whole body of research done in programming languages nowadays, and a very interesting body of research in functional programming languages, but you don't see this research to really influence the real world, i.e. what people are really using on an everyday basis. Instead all sorts of ad-hoc languages pop up like Perl or Python or stuff like that. Where do you see the fault; what's not right?

K: That is unfortunately a very good question, and there's a certain amount of discussion here at Bell Labs between a very strong group in functional programming languages and a group using very much ad-hoc, pragmatic languages. I honestly don't know why the functional languages don't succeed. For instance ML, which is arguably the best combination, perhaps the one that ought to succeed: in spite of being a very well designed language, thought hard about by a lot of good people over a very long time, embodying an enormous amount of effort of compiler technology, still does not seem to be broadly used. I will oversimplify a lot, and probably offend my friends, by saying that the only thing people do with ML is to make ML compilers. [laughing] I'm overstating intentionally, but it has some of that flavor, and I don't really understand why. I think, speaking only for myself, part of the reason that ML in particular, and functional programming languages in general have not caught on more broadly, is that they're aimed at people who have mathematical sophistication, who are able to think in more abstract ways, that lots of other folks, and I include myself, have trouble with. Whereas languages like C are very operational, you can see how every single piece of them maps into what's going on in the machine in a very very direct sense. If I had been brought up at a different time and in a different environment perhaps I'd be totally comfortable in ML and would find C unsafe, a little dangerous, not very expressive. But my sense is that the functional languages come out of a fairly mathematical community and require a fairly mathematical line of reasoning and therefore are difficult for the people on the street.

M: So I guess, the suggestion is for the researchers to somehow lower the language level, to promote the good qualities?

K: I didn't really answer the other part of your question, why research in languages has not had as much effect as it should have. I think actually it has had an effect, in places like parser technology, code generation, no matter what the language is: research had a big effect on building language tools but less on the design of languages per se.

The languages that succeed are very pragmatic, and are very often fairly dirty because they try to solve real problems. C++ is a great example of a language that in many ways has serious flaws. One of the flaws is that it tried very hard to be compatible with C: compatible at the object level, compatible very closely at the source level. Because of this there are places where there's something ugly in the language, weird syntactic problems, strange semantic behaviors. In one sense this is bad, and nobody should ever do that, but one of the reasons that C++ succeeded was precisely that it was compatible with C, it was able to use the C libraries, it was usable by the base of existing C programmers, and therefore people could back into it and use it fairly effectively without having to buy into a whole new way of doing business. And this is not the case for ML, which was being done at about the same time and, at least partly, in almost the same place, but which took a very different view of the world. As a pragmatic thing, C++ is extremely successful but it paid a certain price by being compatible with the previous language.

M: So you're an advocate of incremental evolution. I see that you're an author of eight books, all of them co-authored. Does this mean that you have a collaborative research style?

K: If you're going to write a book it is a heck a lot easier to get someone else to do a lot of the work [laughing]. I have been very fortunate in having very good collaborators on all of these books and in that sense it is just enormously easy. It is easier to do something like a book, which needs six months or a year of work, if you've got somebody else who's also working on it with you. Also it's a sanity check, helping to make sure you don't go too far off in one direction: you've got somebody else steering you back into what they think is the right direction.

I think everything I've done I've done with somebody else: it's more fun to work with other people than to lock yourself in an office and do it all by yourself. And I think I'm probably better at listening and finding somebody who's got a good idea and then working with that person on the good idea rather than try to invent one of my own.

M: Speaking of sanity checks, I am working on a project which involves a large code base; some functions which are edited by several people: they constantly change the style of the indentation and identifiers. You have published some books on coding style: does your style always match your co-author's style, or do you have problems in reconciling?

K: [laughing] That's also a nice question. Occasionally I've had, ``trouble'' is not the word, but with co-authors, there have been discussions about where to put the braces, where to put the spaces and how to spell identifier names. Most of those things have been pretty trivial, partly because my co-authors have been right around here and we have grown up in the same kind of cultural background. But for instance when Rob Pike and I were working on ``The Practice of Programming'' a couple of years ago, we had pretty intense discussions about trivial keywords like ``where do you put the spaces''. How many spaces do you put? I like to put spaces after things like if and while and for and Rob does not. I won that part of the battle, but there was some other part of the battle I lost, I don't even remember now what it was. We definitely didn't agree 100%, but we came to a friendly settlement of the whole thing.

The more people you have working on something and the bigger the program, the harder it's going to be, and at some point you have to have agreed-upon standards that everybody sticks to and mechanized tools like pretty-printers that just enforce doing it by the rules, because otherwise you lose too much time and there's real chance for making mistakes.

M: You just mentioned pretty-printers; what other programming tools and programming environments do you favor?

K: When I have a choice I still do all my programming in Unix. I use Rob Pike's sam editor, I don't use Emacs. When I can't use sam I use vi for historical reasons, and I am still quite comfortable with ed [laughing]; I know, that's even before you guys where born. And it's partly a question of history: I knew Bill Joy when he was working on vi.

I don't use fancy debuggers, I use print statements and I don't use a debugger for anything more than getting a stack trace when the program dies unexpectedly. When I write code on Windows I use typically the Microsoft development environment: they know where all the files are, and how to get all the include files and the like, and I use them, even though in many respects they don't match the way I want do business. I also use good old-fashioned Unix tools; when I run Windows I typically import something like the mks toolkits and I have standard programs that I'm used to for finding things and comparing them and so on.

M: I'll shift again the subject. When I came to the U.S. I was very surprised to discover that there's very high quality research and also fundamental research --- research which is not necessarily aimed to a product or to making money --- such research is made not only in universities, but also in a few large companies. What can you tell us about research at Lucent, a large company, which used to be part of AT&T, an even bigger company?

K: I'll give you the official company line here, although I think that much of it is still true. Research has been a part of this company when it was called ``The Bell System'', AT&T, or Lucent, for a very long time: Bell Labs had its 75th anniversary this year. I think research started as a recognition that there were certain things that people didn't know how to do but had to figure how to do if they were to improve whatever product or service they were going to provide. Of course, in ancient times, that was telephone service; 30 or 40 years ago the telephone technology started to pick up a significant computer component and that brings research in computer science here. I think that the same sort of thing is true for companies like IBM, which runs very effective research labs as well; that's certainly another company that has a very long tradition of supporting the research environment.

There's the interesting question of ``how does a company justify the money it spends on research''. Lucent at this point has 150,000 employees or so; the research part of it, the part that is you and me, is somewhat less that 1% of that, maybe it's 1000 to 1500 people. The company's annual revenue was 38 billion $ in 1999, so we're spending about 400M$ annually on research to keep you and me sitting in comfortable offices thinking great thoughts. That actually seems like a pretty reasonable way to invest, a high-risk but potentially high-reward part of your assets. You have to be thinking ``where are we going to be a few years from now?'', what kinds of problems now bother us, that we have to get some kind of solution to, which we don't need today; it would be nice if we had it today, but we know that we're going to need it in the future. Unfortunately it's really hard to figure out how to do these things, sometimes even what the right problems are. I think that the best mechanism anybody has found yet is to take a small amount of money, 1% let's say, and hire a bunch of bright people, and put them into an environment where they are encouraged to talk to each other, to talk to the people in the rest of the company, to find out what kinds of problems the people in the rest of the company have; people in the rest of the company are also encouraged to come and say ``can you help with this problem that we have?'', and the hope is that by this almost random process, and it really is in many ways random...

M: [Interrupting] But not only that; you have research and development in many other companies; at Bell Labs you are also encouraged to publish!

K: ... I think that the question is ``how does this company differ from other companies in the fact that we publish?''. There're several things that you can see there. One is that the scale is much larger; Lucent Bell Labs may still be the biggest industrial research lab anywhere, doing research of the kind that you would find in the universities in the good old days, essentially undirected research, not focused on products immediately. IBM is at least comparable, and Xerox to some degree, and there are other companies like that. One of the issues is that research here, at least in the computer science group, and in all of the physical sciences, is between hard-core industrial, where they're basically doing research that's strongly focused on product, and academics, where they're mostly doing things because of curiosity or thinking further out. A big industrial lab is stretched between those two: it has more of a focus on things that might be practical, but at the same time it has a finger in the academic world, it has connections to the academic world. And it has to do that, because, among other things, that's the recruiting mechanism: the reason that you're here rather than at Cisco, let's say, is that Cisco doesn't do research; Cisco buys companies. It's not that Cisco is a bad place, Cisco is a wonderful place in many respects, but it does business differently than Lucent. One other thing that we do by playing in the academic world as well as in the industrial development is that we're able to interact with people of universities as equal colleagues, and therefore we can suck in people like you, who are with us for the summer, and perhaps will come back permanently. In this way we get a steady influx of good people. But to do that you have to put something back into the system. We have to let you in, we have to show you all the interesting things, and we have to let you write papers, and we have to write papers ourselves, because otherwise people wouldn't believe that we did anything interesting. So we have to be largely participating members of the scientific or academic community as well as contributing to the welfare or good of the company. That's an interesting and not solved problem, on how to do both of those things and keep from getting too far into one or the other camp.

M: You've mentioned Rob Pike; you've authored two books with him; I would like to ask a question about a controversial talk he gave, in which he argues that research in computer science systems is basically dead http://www.research.bell-labs.com/who/rob/utah2000.pdf. What do you think about this statement?

K: In fairness, Rob is almost always right, although I wouldn't say that to his face [laughs]. I only looked at the slides of that talk recently, I didn't hear him give it, but I think that in many respects he's right. His observation is that it's hard to do systems work: the scale of things is too large for academic environments sometimes, the reward mechanisms in the academic environments may be wrong. As a result a lot of what happens in real systems work tends to be incremental, performance evaluation rather than synthesizing interesting new combinations. I don't know why that is the case: it may be that it's hard in an academic setting to get proper support, it may be that it takes too long --- Rob's observation is that real systems take five years or more, and that's roughly the duration of graduate studies --- so it's hard to get something that matches the career of a student. I wouldn't say that research in systems is ``dead'', but it's certainly not as alive as it could be.

M: Speaking of academia, I saw that you have taught at least two classes at Princeton. I would like to ask about your opinion on computer science education, because I heard complaints coming from the industry that undergraduates in computer science classes master too much useless theoretical skills and they don't know enough about real program development.

K: I've taught four courses at Princeton and Harvard in the last four or five years, at various levels, but that's not enough to qualify me as an ``expert'' in computer science education. Those are two particular schools and I've taught rather screwball things. I don't think universities should be in the business of teaching things that you should learn at a trade school; I don't think it is the role of a university to teach people how to use, let's say, Visual C++ and its Integrated Development Environment. I think the role of the university is to teach students how to program in a particular flavor of language that has for example object-oriented character, to help students understand the issues and trade-offs that go into families of languages, like C, C++ and Java, and how those relate to languages which slice it in a different way, like functional languages. Teaching students skills so that they can step immediately into a Windows development shop and are able to write COM programs is just not right. That's not what universities should be doing; universities should be teaching things which are likely to last, for a lifetime if you're lucky, but at least 5 or 10 or 20 years, and that means principles and ideas. At the same time, they should be illustrating them with the best possible examples taken from current practice.

At Princeton I taught a junior level course, a combination of software engineering and advanced programming: the students there, at least the seniors in that class, were largely very experienced in the kinds of things that industry probably wants. They were comfortable with Visual C++, they knew how to pick components off the net and glue them together, and they could write Java applications of considerable sophistication. Much of that may have been learned by summer jobs. If industry wants people who have more than a ``useless'' theoretical knowledge [laughs], what it should be doing is making sure it gets these bright kids from school and gives them interesting summer jobs that round out the theoretical ideas and the general insights with specifics of a particular application. People pick up that stuff remarkably fast and if they do interesting things on summer jobs they carry that back into their academic careers. I was pretty impressed by how much the students knew, stuff they had not all learned in class.

M: Speaking of students, what advice would you give to a computer science student who wants to pursue a research path? Maybe you see some areas to be more rewarding that other, and maybe some areas are not interesting anymore?

K: Well, don't take my advice on careers [laughs]. Unfortunately I don't think that there is any good advice. The interesting, sorry, I shouldn't be saying ``interesting'' --- the areas that are difficult are only two: one that it's too hard to write programs that work, and the other that it's too hard to use computers. So if you want things to work on, these are two that you could try. Of course, those are fairly general [laughs], there are a lot of special cases that you could play with. If you make any progress at all, on any aspect, then you have an opportunity to go on and pursue the purely academic side of it or alternatively you may go out and try to make your fortune in a start-up. And at this point it looks like a lot of people would rather make their fortune in a start-up than by spending 5 or 6 years getting a Ph.D. Maybe you're just misguided [laughs].... I think unfortunately the best advice you can give somebody is ``do what you think is interesting, do something that you think is fun and worthwhile, because otherwise you won't do it well anyway''. But that's not any real help.

M: Maybe you can help by being more concrete: can you recommend us some books, computer science books or otherwise, which you think have had a big influence on you?

K: The only computer science book I read more than once, that I actually pick up every few years and read parts of again, is The Mythical Man-Month by Fred Brooks, a great book. Partly it's very well written and partly the advice in it, even after more than 25 years, is still highly relevant. There are of course details that are different, some things we approach differently because we have more mechanization and more computer horse-power, but there's an enormous amount of good advice in that, so I recommend it highly. That's the only computer science book I can think of that you read for some combination of pleasure and insight.

There are other books that I reread that are relevant in computing. Books on how to write, write English in my particular case, like ``The Elements of Style'' by Strunk and White. I go back and I reread that every few years as well, because I think the ability to communicate is probably just as important for most people as the ability to sit down and write code. The ability to convey what it is that you're doing is very important.

There's also a great book How to Lie with Statistics, which you might find useful in your own research [laughter].

M: I'll change gears again. Unix and C were created at AT&T and were released under a license which at that time was virtually an open-source license, because AT&T had to do that: being a monopoly it had an agreement with the government, as far as I understand, not to make money out of computers. A lot of people credit this very fact, this liberal license, with the popularity and influence that both Unix and C have had. Recently Lucent has released Plan 9 under an open-source license. What do you think about this ``new'' phenomenon of open-source?

K: I think it's actually a good thing for the most part. The original Unix license was, as you say, largely done the way it was because AT&T was not permitted to be in any business except the telephone business, so they couldn't make serious money on any kind of software. Because of that they were forced into a very sensible decision, which was to give Unix away essentially for free to universities. They did sell it commercially for what amounted to a nuisance fee, but for universities they gave it away and as a result an entire generation of students and their faculty grew up thinking that Unix was the way that you did computing. Unix certainly was much more productive than commercial operating systems which were available at time, and because the source code came along with it, it was easy to see what was going on, and it was easy to make improvements. It built a community of people who were interested in it, motivated by the same things, who were able all to contribute and in that way work themselves up. I think that the current open-source movement has much of the same character. Many of the tools developed in open-source are based on Unix models. Linux is the obvious thing, being, at least on the outside, based on Unix; many of the things that come from the Free Software Foundation are reimplementations of standard tools and languages from Unix. There are of course other projects, arising because of some weird commercial pressure, like Mozilla, the Netscape code, which is now in the public domain, and to which people are contributing as well. I think that the open-source movement is in general a good thing. I am not sure that it will ever replace tailored, professional, rock-solid commercial products sold for profit. But what it might do in a lot of cases, and I think that genuinely it does do in some things like C compilers, is to provide a reference implementation and a standard that's pretty good and that other implementations have to roughly match or why would anybody pay for them? I think that in that sense it's a useful thing. As for Plan 9, I think that's too late, unfortunately. I think Plan 9 was a great idea and it should've been released under an open-source license when it was first done, eight years ago, but our legal guardians would not permit it. I think that they made a grievous mistake. The current open-source license is definitely worth having but it's not clear whether Plan 9, at least as a general-purpose operating system, will have much effect except in a relatively small niche. It has many things going for it which make it valuable in different areas, particularly where you need a small and highly portable operating system, but is it going to take over from Linux? Probably not.

M: I am getting ready to end on a lighter note, but first I'll ask another deeper question. Interpolating from the evolution of the area of computer science so far, what other great advances do you expect in the near, and I don't dare to ask, far future?

K: [laughs] If I could predict the future then I would invest more wisely and I wouldn't have to do these low-paid interviews [n.b. the interview is for free]. Geez, you know, unfortunately I am actually so bad at predicting things.... I am gonna guess that in some sense the situation in computing will be be almost the same: we make a lot of progress, we are able to undertake bigger projects, we can build things which are much more interesting and sophisticated than what we could do 10 years ago. If you look at the kinds of things running on the PC in front of us now, they are enormously more powerful, and flexible than they were 10 years ago. But the amount of messy, intricate, awful code that doesn't work very well and that's underneath all of that has also increased enormously. In some sense I guess we'll continue to make progress, but it'll always be kind-of grimy and not-really-done yet. Because people always take on more than they can reasonably handle, they're always overreaching, and they seem never to go back and clean up the stuff that they did before.

The other thing that I actually worry about is that 
