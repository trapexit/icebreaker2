##	File:		Makefile##	Contains:	Sample Makefile for a 3DO C++ application##	Written by:	##	Copyright:	� 1994 by The 3DO Company. All rights reserved.#				This material constitutes confidential and proprietary#				information of the 3DO Company and shall not be used by#				any Person or for any purpose except as expressly#				authorized in writing by the 3DO Company.##	Change History (most recent first):##		 <2>	  1/4/94	CDE		Upgraded to Jumpstart2 style makefile#		 <1>	10/28/93	pab		Modified for C++.#######################################		Symbol definitions#####################################Application		=	levelstatObjectDir		=	:Objects:CPLUS			=	armCPlusCC				=	armccASM				=	armasmLINK			=	armlinkStreamDir		=  	Godiva:3DO:Streaming:2p0:DataStream:SubscriberDir	=  {StreamDir}Subscribers:#DebugFlag		=	1DebugFlag		=	0######################################	Default compiler options#####################################CPlusOptions	= -i "{3DOIncludes}" -i "{StreamDir}" -i "{SubscriberDir}" -d __cplusplus -d DEBUG={DebugFlag}#CPlusOptions	= -i "{3DOIncludes}" -d DEBUG={DebugFlag}CDebugOptions	= -g#CDebugOptions	=COptions		= {CDebugOptions} -fa -za1 -zps0 -i "{3DOIncludes}" -d DEBUG={DebugFlag}SDebugOptions	= -g#SDebugOptions	=SOptions		= {SDebugOptions} -bi -i "{3DOIncludes}"LDebugOptions	= -d#LDebugOptions	=LOptions		= {LDebugOptions} -aif -r -b 0x00######################################		Object files######################################NOTE: Add any other required library files here:LIBS			=	�					"{SubscriberDir}subscriber.lib"		�					"{StreamDir}dataacq.lib"			�					"{StreamDir}ds.lib"					�					"{3DOLibs}codec.lib" 				�					"{3DOLibs}Lib3DO.lib"				�					"{3DOLibs}CPlusLib.lib"				�					"{3DOLibs}operamath.lib"			�					"{3DOLibs}filesystem.lib"			�					"{3DOLibs}graphics.lib"				�					"{3DOLibs}audio.lib"				�					"{3DOLibs}music.lib"				�					"{3DOLibs}input.lib"				�					"{3DOLibs}clib.lib"					�					"{3DOLibs}swi.lib"#NOTE: Add any other required object files here:OBJECTS			=	"{ObjectDir}landscape.cp.o" 	�					"{ObjectDir}sounds.cp.o" 		�					"{ObjectDir}dudemeyer.cp.o" 	�					"{ObjectDir}seeker.cp.o" 		�					"{ObjectDir}animation.cp.o" 	�					"{ObjectDir}solids.cp.o"	 	�					"{ObjectDir}weapon.cp.o"	 	�					"{ObjectDir}deadlist.cp.o"	 	�					"{ObjectDir}levels.cp.o"	 	�					"{ObjectDir}nvram.cp.o"	 		�					"{ObjectDir}userif.cp.o"	 	�					"{ObjectDir}FontHandler.cp.o"	�					"{ObjectDir}memcheck.cp.o"		�					"{ObjectDir}PlayMusic.cp.o"		�					"{ObjectDir}PrepareStream.cp.o"	�					"{ObjectDir}{Application}.cp.o"######################################	Default build rules#####################################All				�	{Application}{ObjectDir}		�	:.cp.o			�	.cp	{CPLUS} {CPlusOptions} {DepDir}{Default}.cp -o {TargDir}{Default}.cp.o -comp {CC} {COptions}.c.o			�	.c	{CC} {COptions} -o {TargDir}{Default}.c.o {DepDir}{Default}.c.s.o			�	.s	{ASM} {SOptions} -o {TargDir}{Default}.s.o {DepDir}{Default}.s######################################	Target build rules#####################################{Application}		��	{Application}.make {LIBS} {OBJECTS}	{LINK}	{LOptions}					�			-o {Application}			�			"{3DOLibs}cstartup.o"		�			{OBJECTS}					�			{LIBS}	SetFile {Application} -c 'EaDJ' -t 'PROJ'	modbin {Application} -stack 4000 -debug#	modbin {Application} -stack 4000	stripaif "{Application}" -o "{Application}"#	duplicate "{Application}" "{Application}".sym "{3DORemote}" {3DOAutodup}	duplicate "{Application}" "{3DORemote}" {3DOAutodup}######################################	Include file dependencies#####################################{ObjectDir}{Application}.cp.o � "{3DOLibs}"Lib3DO.lib {Application}.make{ObjectDir}{Application}.cp.o		�	"{3DOLibs}"Lib3DO.lib {Application}.make landscape.h    �																				 animation.h    �																				 sounds.h		�																				 seeker.h		�																				 deadlist.h		�																				 dudemeyer.h	�																				 levels.h		�																				 nvram.h		�																				 userif.h		�																				 solids.h		�																				 FontHandler.h	�																				 weapon.h		�																				 PlayMusic.h	�																				 memcheck.h		�																				 icebreaker.h