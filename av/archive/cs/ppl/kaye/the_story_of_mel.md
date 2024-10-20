<h1>The Story of Mel</h1>
<small>Mirrored from <a href="http://www.catb.org/jargon/html/story-of-mel.html">http://www.catb.org/jargon/html/story-of-mel.html</a></small>
<p>This was posted to Usenet by its author, Ed Nather
(<tt class="email">&lt;<a href="mailto:nather@astro.as.utexas.edu">nather@astro.as.utexas.edu</a>&gt;</tt>), on May 21, 1983.</p><div class="literallayout"><p><br/>
A recent article devoted to the <span class="emphasis"><em>macho</em></span> side of programming<br/>
made the bald and unvarnished statement:<br/>
<br/>
    Real Programmers write in FORTRAN.<br/>
<br/>
Maybe they do now,<br/>
in this decadent era of<br/>
Lite beer, hand calculators, and “<span class="quote">user-friendly</span>” software<br/>
but back in the Good Old Days,<br/>
when the term “<span class="quote">software</span>” sounded funny<br/>
and Real Computers were made out of drums and vacuum tubes,<br/>
Real Programmers wrote in machine code.<br/>
Not FORTRAN.  Not RATFOR.  Not, even, assembly language.<br/>
Machine Code.<br/>
Raw, unadorned, inscrutable hexadecimal numbers.<br/>
Directly.<br/>
<br/>
Lest a whole new generation of programmers<br/>
grow up in ignorance of this glorious past,<br/>
I feel duty-bound to describe,<br/>
as best I can through the generation gap,<br/>
how a Real Programmer wrote code.<br/>
I'll call him Mel,<br/>
because that was his name.<br/>
<br/>
I first met Mel when I went to work for Royal McBee Computer Corp.,<br/>
a now-defunct subsidiary of the typewriter company.<br/>
The firm manufactured the LGP-30,<br/>
a small, cheap (by the standards of the day)<br/>
drum-memory computer,<br/>
and had just started to manufacture<br/>
the RPC-4000, a much-improved,<br/>
bigger, better, faster — drum-memory computer.<br/>
Cores cost too much,<br/>
and weren't here to stay, anyway.<br/>
(That's why you haven't heard of the company,<br/>
or the computer.)<br/>
<br/>
I had been hired to write a FORTRAN compiler<br/>
for this new marvel and Mel was my guide to its wonders.<br/>
Mel didn't approve of compilers.<br/>
<br/>
“<span class="quote">If a program can't rewrite its own code</span>”,<br/>
he asked, “<span class="quote">what good is it?</span>”<br/>
<br/>
Mel had written,<br/>
in hexadecimal,<br/>
the most popular computer program the company owned.<br/>
It ran on the LGP-30<br/>
and played blackjack with potential customers<br/>
at computer shows.<br/>
Its effect was always dramatic.<br/>
The LGP-30 booth was packed at every show,<br/>
and the IBM salesmen stood around<br/>
talking to each other.<br/>
Whether or not this actually sold computers<br/>
was a question we never discussed.<br/>
<br/>
Mel's job was to re-write<br/>
the blackjack program for the RPC-4000.<br/>
(Port?  What does that mean?)<br/>
The new computer had a one-plus-one<br/>
addressing scheme,<br/>
in which each machine instruction,<br/>
in addition to the operation code<br/>
and the address of the needed operand,<br/>
had a second address that indicated where, on the revolving drum,<br/>
the next instruction was located.<br/>
<br/>
In modern parlance,<br/>
every single instruction was followed by a GO TO!<br/>
Put <span class="emphasis"><em>that</em></span> in Pascal's pipe and smoke it.<br/>
<br/>
Mel loved the RPC-4000<br/>
because he could optimize his code:<br/>
that is, locate instructions on the drum<br/>
so that just as one finished its job,<br/>
the next would be just arriving at the “<span class="quote">read head</span>”<br/>
and available for immediate execution.<br/>
There was a program to do that job,<br/>
an “<span class="quote">optimizing assembler</span>”,<br/>
but Mel refused to use it.<br/>
<br/>
“<span class="quote">You never know where it's going to put things</span>”,<br/>
he explained, “<span class="quote">so you'd have to use separate constants</span>”.<br/>
<br/>
It was a long time before I understood that remark.<br/>
Since Mel knew the numerical value<br/>
of every operation code,<br/>
and assigned his own drum addresses,<br/>
every instruction he wrote could also be considered<br/>
a numerical constant.<br/>
He could pick up an earlier “<span class="quote">add</span>” instruction, say,<br/>
and multiply by it,<br/>
if it had the right numeric value.<br/>
His code was not easy for someone else to modify.<br/>
<br/>
I compared Mel's hand-optimized programs<br/>
with the same code massaged by the optimizing assembler program,<br/>
and Mel's always ran faster.<br/>
That was because the “<span class="quote">top-down</span>” method of program design<br/>
hadn't been invented yet,<br/>
and Mel wouldn't have used it anyway.<br/>
He wrote the innermost parts of his program loops first,<br/>
so they would get first choice<br/>
of the optimum address locations on the drum.<br/>
The optimizing assembler wasn't smart enough to do it that way.<br/>
<br/>
Mel never wrote time-delay loops, either,<br/>
even when the balky Flexowriter<br/>
required a delay between output characters to work right.<br/>
He just located instructions on the drum<br/>
so each successive one was just <span class="emphasis"><em>past</em></span> the read head<br/>
when it was needed;<br/>
the drum had to execute another complete revolution<br/>
to find the next instruction.<br/>
He coined an unforgettable term for this procedure.<br/>
Although “<span class="quote">optimum</span>” is an absolute term,<br/>
like “<span class="quote">unique</span>”, it became common verbal practice<br/>
to make it relative:<br/>
“<span class="quote">not quite optimum</span>” or “<span class="quote">less optimum</span>”<br/>
or “<span class="quote">not very optimum</span>”.<br/>
Mel called the maximum time-delay locations<br/>
the “<span class="quote">most pessimum</span>”.<br/>
<br/>
After he finished the blackjack program<br/>
and got it to run<br/>
(“<span class="quote">Even the initializer is optimized</span>”,<br/>
he said proudly),<br/>
he got a Change Request from the sales department.<br/>
The program used an elegant (optimized)<br/>
random number generator<br/>
to shuffle the “<span class="quote">cards</span>” and deal from the “<span class="quote">deck</span>”,<br/>
and some of the salesmen felt it was too fair,<br/>
since sometimes the customers lost.<br/>
They wanted Mel to modify the program<br/>
so, at the setting of a sense switch on the console,<br/>
they could change the odds and let the customer win.<br/>
<br/>
Mel balked.<br/>
He felt this was patently dishonest,<br/>
which it was,<br/>
and that it impinged on his personal integrity as a programmer,<br/>
which it did,<br/>
so he refused to do it.<br/>
The Head Salesman talked to Mel,<br/>
as did the Big Boss and, at the boss's urging,<br/>
a few Fellow Programmers.<br/>
Mel finally gave in and wrote the code,<br/>
but he got the test backwards,<br/>
and, when the sense switch was turned on,<br/>
the program would cheat, winning every time.<br/>
Mel was delighted with this,<br/>
claiming his subconscious was uncontrollably ethical,<br/>
and adamantly refused to fix it.<br/>
<br/>
After Mel had left the company for greener pa$ture$,<br/>
the Big Boss asked me to look at the code<br/>
and see if I could find the test and reverse it.<br/>
Somewhat reluctantly, I agreed to look.<br/>
Tracking Mel's code was a real adventure.<br/>
<br/>
I have often felt that programming is an art form,<br/>
whose real value can only be appreciated<br/>
by another versed in the same arcane art;<br/>
there are lovely gems and brilliant coups<br/>
hidden from human view and admiration, sometimes forever,<br/>
by the very nature of the process.<br/>
You can learn a lot about an individual<br/>
just by reading through his code,<br/>
even in hexadecimal.<br/>
Mel was, I think, an unsung genius.<br/>
<br/>
Perhaps my greatest shock came<br/>
when I found an innocent loop that had no test in it.<br/>
No test.  <span class="emphasis"><em>None</em></span>.<br/>
Common sense said it had to be a closed loop,<br/>
where the program would circle, forever, endlessly.<br/>
Program control passed right through it, however,<br/>
and safely out the other side.<br/>
It took me two weeks to figure it out.<br/>
<br/>
The RPC-4000 computer had a really modern facility<br/>
called an index register.<br/>
It allowed the programmer to write a program loop<br/>
that used an indexed instruction inside;<br/>
each time through,<br/>
the number in the index register<br/>
was added to the address of that instruction,<br/>
so it would refer<br/>
to the next datum in a series.<br/>
He had only to increment the index register<br/>
each time through.<br/>
Mel never used it.<br/>
<br/>
Instead, he would pull the instruction into a machine register,<br/>
add one to its address,<br/>
and store it back.<br/>
He would then execute the modified instruction<br/>
right from the register.<br/>
The loop was written so this additional execution time<br/>
was taken into account —<br/>
just as this instruction finished,<br/>
the next one was right under the drum's read head,<br/>
ready to go.<br/>
But the loop had no test in it.<br/>
<br/>
The vital clue came when I noticed<br/>
the index register bit,<br/>
the bit that lay between the address<br/>
and the operation code in the instruction word,<br/>
was turned on —<br/>
yet Mel never used the index register,<br/>
leaving it zero all the time.<br/>
When the light went on it nearly blinded me.<br/>
<br/>
He had located the data he was working on<br/>
near the top of memory —<br/>
the largest locations the instructions could address —<br/>
so, after the last datum was handled,<br/>
incrementing the instruction address<br/>
would make it overflow.<br/>
The carry would add one to the<br/>
operation code, changing it to the next one in the instruction set:<br/>
a jump instruction.<br/>
Sure enough, the next program instruction was<br/>
in address location zero,<br/>
and the program went happily on its way.<br/>
<br/>
I haven't kept in touch with Mel,<br/>
so I don't know if he ever gave in to the flood of<br/>
change that has washed over programming techniques<br/>
since those long-gone days.<br/>
I like to think he didn't.<br/>
In any event,<br/>
I was impressed enough that I quit looking for the<br/>
offending test,<br/>
telling the Big Boss I couldn't find it.<br/>
He didn't seem surprised.<br/>
<br/>
When I left the company,<br/>
the blackjack program would still cheat<br/>
if you turned on the right sense switch,<br/>
and I think that's how it should be.<br/>
I didn't feel comfortable<br/>
hacking up the code of a Real Programmer.<br/>
</p></div><p>This is one of hackerdom's great heroic epics, free verse or no.  In a
few spare images it captures more about the esthetics and psychology of
hacking than all the scholarly volumes on the subject put together.  (But for
an opposing point of view, see the entry for 
<a href="R/Real-Programmer.html"><i class="glossterm">Real Programmer</i></a>.)</p><p>[1992 postscript — the author writes: “The original
submission to the net was not in free verse, nor any approximation to it
— it was straight prose style, in non-justified paragraphs.  In bouncing
around the net it apparently got modified into the ‘free verse' form now
popular.  In other words, it got hacked on the net.  That seems appropriate,
somehow.” The author adds that he likes the ‘free-verse' version
better than his prose original...]</p><p>[1999 update: Mel's last name is now known.  The manual for the LGP-30
refers to “<span class="quote">Mel Kaye of Royal McBee who did the bulk of the programming
[...] of the ACT 1 system</span>”.]</p><p>[2001: The Royal McBee LPG-30 turns out to have one other claim to
fame. It turns out that meteorologist Edward Lorenz was doing weather
simulations on an LGP-30 when, in 1961, he discovered the “<span class="quote">Butterfly
Effect</span>” and computational chaos.  This seems, somehow,
appropriate.]</p><p>[2002: A copy of the programming manual for the LGP-30 lives at <a href="http://ed-thelen.org/comp-hist/lgp-30-man.html" target="_top">http://ed-thelen.org/comp-hist/lgp-30-man.html</a>]</p><!--#include file="/foot" -->

