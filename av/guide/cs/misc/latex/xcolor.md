# Xcolor

	\documentclass{article}
	\usepackage[dvipsnames]{xcolor}
	\colorlet{LightRubineRed}{RubineRed!70}
	\colorlet{Mycolor1}{green!10!orange}
	\definecolor{Mycolor2}{HTML}{00F9DE}
	\begin{document}
	\pagecolor{black}
	\color{white}% set the default colour to white
	This document presents several examples showing how to use the \texttt{xcolor} package 
	to change the colour of \LaTeX{} page elements.
	\begin{itemize}
	\item \textcolor{Mycolor1}{First item}
	\item \textcolor{Mycolor2}{Second item}
	\end{itemize}
	\noindent
	{\color{LightRubineRed} \rule{\linewidth}{1mm}}
	\noindent
	{\color{RubineRed} \rule{\linewidth}{1mm}}
	\end{document}
