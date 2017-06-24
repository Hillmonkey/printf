
/**
MEMORY LEAK - 2 POINTS
**/

/**
  Betty Doc -====================  4 POINTS DONE!!!===========================
math-helper c:30 describe member 'n'
math-helper c:30 return of _abs
**/


/* hi */

_printf("%s", "This sentence is retrieved from va_args!\n");
/** ============================== 4 POINTS ===================================
msg - [Got] 
Complete the sentence: You know nothing, Jon Snow. 
Complete the sentence: You know nothing, Jon Snow. 
Lengths differ.

(118 chars long) 
[stderr]:  
(0 chars long) 
[Expected] 
Complete the sentence: You know nothing, Jon Snow. 
Complete the sentence: You know nothing, Jon Snow.

(102 chars long) 
[stderr]: [Anything] 
(0 chars long)
**/

_printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
/**  ============================== 4 POINTS ===================================
msg - [Got] 
Complete the sentence: You know nothing, Jon Snow. 
Complete the sentence: You know nothing, Jon Snow. 
Lengths differ.

(118 chars long) 
[stderr]:  
(0 chars long) 
[Expected] 
Complete the sentence: You know nothing, Jon Snow. 
Complete the sentence: You know nothing, Jon Snow.

(102 chars long) 
[stderr]: [Anything] 
(0 chars long)
**/

_printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
/**
Reason: ============================== 4 POINTS =================================== PASSED
msg - [Got] 
With some more args: You know nothing, Jon Snow. 
With some more args: You know nothing, Jon Snow. 
Lengths differ.

(114 chars long) 
[stderr]:  
(0 chars long) 
[Expected] 
With some more args: You know nothing, Jon Snow. 
With some more args: You know nothing, Jon Snow.

(98 chars long) 
[stderr]: [Anything] 
(0 chars long)
**/

_printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
/**
Reason: ============================== 4 POINTS =================================== PASSED
msg - [Got] 
Loading ... 99% Please wait 
Loading ... 99% Please wait 
Lengths differ.

(72 chars long) 
[stderr]:  
(0 chars long) 
[Expected] 
Loading ... 99% Please wait 
Loading ... 99% Please wait

(56 chars long) 
[stderr]: [Anything] 
(0 chars long)
**/

_printf("css%ccs%scscscs", 'T', "Test");
/**
Reason: ============================== 4 POINTS ===================================
msg - [Got] 
cssTcsTestcscscscssTcsTestcscscsLengths differ.

(48 chars long) 
[stderr]:  
(0 chars long) 
[Expected] 
cssTcsTestcscscscssTcsTestcscscs 
(32 chars long) 
[stderr]: [Anything] 
(0 chars long)
**/


printf("man gcc:\n%s", str);
/**  ============================== 4 POINTS ===================================
 where str is a big string
Reason:
msg - [Got] 
man gcc: 
When you invoke GCC , it normally does preprocessing, compilation, assembly and linking. The "overall options" allow you to stop this process at an intermediate stage. For example, the -c option says not to run the linker. Then the output consists of object files output by the assembler.

Other options are passed on to one stage of processing. Some options control the preprocessor and others the compiler itself. Yet other options control the assembler and linker; most of these are not documented here, since you rarely need to use any of them.

Most of the command line options that you can use with GCC are useful for C programs; when an option is only useful with another language (usually C ++ ), the explanation says so explicitly. If the description for a particular option does not mention a source language, you can use that option with all supported languages.

The gcc program accepts options and file names as operands. Many options have multi-letter names; therefore multiple single-letter options m... 
(3398 chars long) 
[stderr]:  
(0 chars long) 
[Expected] 
man gcc: 
When you invoke GCC , it normally does preprocessing, compilation, assembly and linking. The "overall options" allow you to stop this process at an intermediate stage. For example, the -c option says not to run the linker. Then the output consists of object files output by the assembler.

Other options are passed on to one stage of processing. Some options control the preprocessor and others the compiler itself. Yet other options control the assembler and linker; most of these are not documented here, since you rarely need to use any of them.

Most of the command line options that you can use with GCC are useful for C programs; when an option is only useful with another language (usually C ++ ), the explanation says so explicitly. If the description for a particular option does not mention a source language, you can use that option with all supported languages.

The gcc program accepts options and file names as operands. Many options have multi-letter names; therefore multiple single-letter options m... 
(3382 chars long) 
[stderr]: [Anything] 
(0 chars long)
**/

_printf(NULL);
/** ============================== 4 POINTS ===================================
Reason:
msg - [Got]

(0 chars long) 
[stderr]: bash: line 1:   488 Segmentation fault      timeout --preserve-status 5s ./printf_968_14

(89 chars long) 
[Expected]

(0 chars long) 
[stderr]: [Anything] 
(0 chars long)
**/

_printf("%");
/**
Reason:
msg - [Got] 
%Lengths differ.

(17 chars long) 
[stderr]:  
(0 chars long) 
[Expected]

(0 chars long) 
[stderr]: [Anything] 
(0 chars long)
**/


_printf("%!\n");
/** 1 POINT
Reason:
msg - [Got]

%! 
Lengths differ.

(20 chars long) 
[stderr]:  
(0 chars long) 
[Expected] 
%! 
%!

(6 chars long) 
[stderr]: [Anything] 
(0 chars long)
**/


_printf("%K\n");
/** 1 POINT
Reason:
msg - [Got]

%K 
Lengths differ.

(20 chars long) 
[stderr]:  
(0 chars long) 
[Expected] 
%K 
%K

(6 chars long) 
[stderr]: [Anything] 
(0 chars long)
**/
