/****************************************************************************************//*                                    ICEBREAKER.H                                      *//****************************************************************************************//*          (c) 1995 by Magnet Interactive Studios, inc. All rights reserved.           *//****************************************************************************************//*  Revision History:                                                                   *//*  v5.6	    5/5/95	 Icebreaker Golden Master version. By Andrew Looney.			       *//*  v6.1	   8/21/95	 Began making changes for Icebreaker Two. By Andrew Looney.		    *//****************************************************************************************/#ifndef ICEBREAKER#define ICEBREAKER 1#define VERSION    "6.6"/* this line is to be removed before the final delivery: */#define TESTING 1/****************************** Artwork descriptors *************************************/#define AMBIGUOUS             	0#define NOTHING						0#define HARMLESS              	0#define YELLOW_PYRAMID     	   1#define LTBLUE_PYRAMID    		   2#define PINK_PYRAMID    		   3#define LURKER_PYRAMID   			4#define LIME_PYRAMID    		   5#define BLUE_PYRAMID					6#define RED_PYRAMID					7#define GREEN_PYRAMID				8#define PURPLE_PYRAMID				9#define RAINBOW_PYRAMID			 	10#define STEEL_PYRAMID				11#define SLIMY_PYRAMID				12#define MIRROR_PYRAMID				13#define CONCRETE_PYRAMID			14#define YELLOW_SEEKER     	     	15#define LTBLUE_SEEKER    		  	16#define PINK_SEEKER    		   	17#define LIME_SEEKER    		   	18#define ZOMBIE							19#define LURKER							20#define JUGGERNAUT					21#define PSYCHO							22#define MEANY							23#define NASTY							24#define GRUMPY							25#define DORMANT_REDCOAT				26#define WAKING_REDCOAT				27#define ACTIVE_REDCOAT				28#define DORMANT_BUMMER				29#define WAKING_BUMMER				30#define ACTIVE_BUMMER				31#define DORMANT_CHAMELEON			32#define WAKING_CHAMELEON			33#define ACTIVE_CHAMELEON			34#define PHANTOM_BOULDER			 	35#define BOULDER0						36#define BOULDER1						37#define BOULDER2						38#define BOULDER3						39#define BOULDER4						40#define BOULDER5						41#define BOULDER6						42#define BOULDER7						43#define BOULDER8						44#define BOULDER9						45#define BOULDERA						46#define BOULDERD						47#define GA_TILE						48#define GB_TILE						49#define GC_TILE						50#define GD_TILE						51#define GE_TILE						52#define GF_TILE						53#define DA_TILE						54#define DB_TILE						55#define DC_TILE						56#define DD_TILE						57#define DE_TILE						58#define HA_TILE 						59#define HB_TILE 						60#define HC_TILE 						61#define HD_TILE 						62#define HE_TILE						63#define UA_TILE						64#define UB_TILE						65#define UC_TILE						66#define UD_TILE						67#define UE_TILE						68#define IA_TILE	 					69#define IB_TILE 						70#define IC_TILE 						71#define ID_TILE 						72#define WA_TILE 						73#define WB_TILE 						74#define WC_TILE 						75#define WD_TILE 						76#define S1_TILE 						77#define SA_TILE 						78#define SB_TILE 					   79#define L1_TILE 						80#define LA_TILE 						81#define LB_TILE 						82#define PA_TILE						83#define PB_TILE 						84#define PC_TILE 						85#define PD_TILE 						86#define PE_TILE 						87#define PF_TILE 						88#define PG_TILE 						89#define PH_TILE 						90#define PI_TILE 						91#define PJ_TILE 						92#define PL_TILE 						93#define PM_TILE 						94#define P1_TILE 						95#define GB2PA_TILE 					96#define IA2PB_TILE 					97#define HD2PC_TILE 					98#define WA2PD_TILE 					99#define GA2PE_TILE 				  100#define HA2PF_TILE 				  101#define IB2PG_TILE 				  102#define DD2PH_TILE 				  103#define DB2PI_TILE 				  104#define DA2PJ_TILE 				  105#define UD2P1_TILE 				  106#define DC2PJ_TILE 				  107#define IC2PB_TILE 				  108#define ID2PB_TILE 				  109#define GC2PA_TILE 				  110#define GD2PA_TILE 				  111#define GE2PA_TILE 				  112#define GF2PA_TILE 				  113#define DE2PJ_TILE 				  114#define HB2PC_TILE 				  115#define HC2PL_TILE 				  116#define HE2PC_TILE 				  117#define UA2P1_TILE 				  118#define UB2P1_TILE 				  119#define UC2PM_TILE 				  120#define UE2PM_TILE 				  121#define WB2PD_TILE 				  122#define WC2PD_TILE 				  123#define WD2PD_TILE 				  124#define FA_TILE					  125#define FB_TILE					  126#define BIRTH_SCENE				  127#define DEATH_SCENE				  128#define SPLIT_SCENE				  129#define DUDEMEYER					  130#define FIREBALL					  131#define WHITE_MIRROR_ART		  132#define BLACK_MIRROR_ART		  133#define BROWN_MIRROR_ART		  134#define SLIME_TRANSFORMATION	  135#define LAVA_TRANSFORMATION	  136#define SEEKER_MATERIALIZATION  137#define TOTAL_ART_ELEMENTS		  138  /* This should be one greater than the last object */#define FIRST_STATIC_PYRAMID		BLUE_PYRAMID#define LAST_STATIC_PYRAMID		CONCRETE_PYRAMID#define FIRST_RAINBOW_OPTION	   YELLOW_PYRAMID#define LAST_RAINBOW_OPTION	   PURPLE_PYRAMID#define FIRST_PLAIN_TILE	   	GA_TILE#define LAST_PLAIN_TILE	   		UE_TILE#define FIRST_LAVA_TILE	   		L1_TILE#define LAST_LAVA_TILE	   		LB_TILE#define FIRST_SLIME_TILE	   	S1_TILE#define LAST_SLIME_TILE	   		SB_TILE#define FIRST_SWAMP_TILE	   	WA_TILE#define LAST_SWAMP_TILE	   		WD_TILE#define FIRST_ICE_TILE	   		IA_TILE#define LAST_ICE_TILE	   		ID_TILE#define FIRST_PIT_TILE	   		PA_TILE#define LAST_PIT_TILE	   		P1_TILE#define FIRST_SEEKER	   			YELLOW_SEEKER#define LAST_SEEKER	   			ACTIVE_CHAMELEON#define FIRST_RANDOM_SEEKER		YELLOW_SEEKER#define LAST_RANDOM_SEEKER	   	MEANY#define FIRST_BOULDER				PHANTOM_BOULDER#define LAST_BOULDER					BOULDERD#define FIRST_PITFORMATION			GB2PA_TILE#define LAST_PITFORMATION			WD2PD_TILE/*************************** assorted symbol defintions *********************************/#define ROWS_ON_SCREEN         8#define ROWS_IN_LANDSCAPE      14#define COLUMNS_ON_SCREEN      12   /* this number must be even! */#define COLUMNS_IN_LANDSCAPE   14#define TOTAL_SCREEN_TILES     (ROWS_ON_SCREEN    *  COLUMNS_ON_SCREEN)#define TOTAL_LANDSCAPE_TILES  (ROWS_IN_LANDSCAPE *  COLUMNS_IN_LANDSCAPE)#define TILE_WIDTH_25  	 		18#define HALF_TILE_WIDTH   		36#define TILE_WIDTH_75  			54#define TILE_WIDTH    			73#define TILE_HEIGHT_25     	 9#define HALF_TILE_HEIGHT     	18#define TILE_HEIGHT_75			27#define TILE_HEIGHT           36#define SCREEN_CENTER_X       160L#define SCREEN_CENTER_Y       120L#define SCREEN_WIDTH          320L#define SCREEN_HEIGHT         240L#define INITIAL_UPPER_LEFT_X  ((-74) << 16)#define INITIAL_UPPER_LEFT_Y  ((-94) << 16)#define NORTH         0#define NORTHEAST     1#define EAST          2#define SOUTHEAST     3#define SOUTH         4#define SOUTHWEST     5#define WEST          6#define NORTHWEST     7#define NO_DIRECTION  8#define RANDOM        9#define STANDARD_FRAME_RATE   (1 << 16)#define LINEHEIGHT            (12)#define LEFTMARGIN            (30)#define FUDGE_FACTOR          (5 << 16)#define PYRAMID_POP_DELAY     3#define FOREVER					TRUE#define NO_AXIS               0#define X_AXIS                1#define Y_AXIS                2#define PLUS_DIRECTION        1#define MINUS_DIRECTION       2#define CHAMELEON_RANGE_X		TILE_WIDTH#define CHAMELEON_RANGE_Y		TILE_HEIGHT#define PICK_AND_PLAY_MODE		0#define GAME_ABORT				1#define SELF_PLAY_MODE			2#define CANNED_DEMO_MODE		3#define DEMO_MODE_ABORT 		4#define EASY						0#define MEDIUM						1#define HARD						2#define INSANE						3#define MAX_FILE_BYTES			5000#define BENCHMARK_SAMPLE_SIZE 15#define TAB							(9)#define MAX_DETECTABLE_COLLISIONS  7#define FRAME_RATE_12_PER_SECOND  66800 /* microseconds */#define FRAME_RATE_15_PER_SECOND  58000 /* microseconds */#define FRAME_RATE_29_PER_SECOND  34900 /* microseconds */#define MAGNET_3D0_DEVELOPER_ID_NUMBER  1365#define PERIMETER_DISTANCE_X	400#define PERIMETER_DISTANCE_Y	390#define MUSIC_ON		0#define MUSIC_OFF		1#define MUSIC_MUTED	2#define WELCOME_MOVIE	0#define PITS_MOVIE		1#define PURPLE_MOVIE		2#define PINK_MOVIE		3#define RAINBOW_MOVIE	4#define CYANIDE_MOVIE	5#define ICE_MOVIE			6#define LIMEYS_MOVIE		7#define ROCKS_MOVIE		8#define CONCRETE_MOVIE	9#define LAVA_MOVIE		10#define CHAMELEON_MOVIE	11#define SLIME_MOVIE		12#define LURKERS_MOVIE	13#define SWAMP_MOVIE		14#define ZOMBIE_MOVIE		15#define MEANY_MOVIE		16#define VICTORY_MOVIE	17#define PANASONIC_MOVIE	18#define MEMCHECK_MASK	15/*************************** collision detection settings *******************************//* Note: see also: hardcoded values in dudemeyer::initialize_variables()                *//*            and: hardcoded values in solids::InitializeSolids()  (for BOULDERs)       */#define PYRAMID_COL_DETECT_X       		 7#define PYRAMID_COL_DETECT_Y            4#define FIREBALL_COL_DETECT_X           3#define FIREBALL_COL_DETECT_Y           3#define HAZARD_X_COL_DETECT_ADJUSTMENT  4#define HAZARD_Y_COL_DETECT_ADJUSTMENT  3/***************************** movement rate settings ***********************************/#define ICEBREAKER_VERT_SPEED   (4 << 16)#define ICEBREAKER_HORZ_SPEED   (6 << 16)#define FIREBALL_SPEED         (30 << 16)/********************************* health values ****************************************/#define NOT_DEAD					0#define DEAD						1#define STUMBLING					2#define FELL_INTO_A_PIT			3#define CAUGHT_BY_SEEKER		4#define CONSUMED_BY_LAVA		5#define DISSOLVED_IN_SLIME		6#define SPLITTING					7#define SPLITTING_STASIS		8#define SHOT_BY_FIREBALL		9#define MATERIALIZING_1			10#define MATERIALIZING_2			11#define MATERIALIZING_3			12/********************************* macro definitions ************************************/#define FIND_CENTER_X(X)    ((X->ccb_XPos + ((X->ccb_Width  / 2) << 16)) >> 16)#define FIND_CENTER_Y(X)    ((X->ccb_YPos + ((X->ccb_Height / 2) << 16)) >> 16)#define ABS(X)              (X) < 0 ? (-(X)) : (X)/*************************** meta level artwork files ***********************************/#define BACKGROUND_IMAGE      "$boot/IceFiles/MetaArt/solid_black.cel"#define THREEDO_LOGO          "$boot/IceFiles/MetaArt/3DOLogo.cel"#define ICEBREAKER_SPLASH	   "$boot/IceFiles/MetaArt/ice_2_logo.cel"#define GAME_OVER             "$boot/IceFiles/MetaArt/game_over.cel"#define YOU_WIN               "$boot/IceFiles/MetaArt/you_win.cel"#define UNDERWATER_ANIM       "$boot/IceFiles/MetaArt/Underwater.anim"#define MAGNET_DENTSU_LOGO    "$boot/IceFiles/MetaArt/magnetdentsu.cel"#define MAGNET_LOGO           "$boot/IceFiles/MetaArt/magnet.cel"#define ARROW_N               "$boot/IceFiles/MetaArt/arrows/arrow_n.cel"#define ARROW_S               "$boot/IceFiles/MetaArt/arrows/arrow_s.cel"#define ARROW_E               "$boot/IceFiles/MetaArt/arrows/arrow_e.cel"#define ARROW_W               "$boot/IceFiles/MetaArt/arrows/arrow_w.cel"#define ARROW_NE              "$boot/IceFiles/MetaArt/arrows/arrow_ne.cel"#define ARROW_SE              "$boot/IceFiles/MetaArt/arrows/arrow_se.cel"#define ARROW_NW              "$boot/IceFiles/MetaArt/arrows/arrow_nw.cel"#define ARROW_SW              "$boot/IceFiles/MetaArt/arrows/arrow_sw.cel"/********************************** Prototypes ******************************************/extern void  Benchmark();extern void  RegulateSpeed(int32 speed_limit);extern bool  HasThisMuchTimePassedYet(int32 time_in_seconds, bool start_timing_now);extern int32 RandomNumber (int32 lower_bounds, int32 upper_bounds);extern bool  GravitateTowardsPoint (CCB *target, int32 speed, int32 desired_x,                                    int32 desired_y);extern bool	 ObjectVisible (CCB *target);extern bool  PointVisible (int32 x, int32 y);extern bool  LoadArtwork (void);extern bool  InitSystemClock(void);extern void  ShutdownSystemClock(void);extern bool  Init3D0System (void);extern void  ArtworkMissing (int32 missing_element);extern int32 AreWeLost(int32 our_x,int32 our_y,int32 home_x,int32 home_y,int32 modifier);extern bool  BootIcebreaker (void);extern void  InitializeIcebreaker (int32 leveltoload, int16 difficulty);extern void  IceMovementAdjustments(int32 &x_change, int32 &y_change);extern void  InputGenerator(int32 &x_change, int32 &y_change);extern void  InputHandler (int32 &x_change, int32 &y_change);extern void  ResultsHandler (int32 &x_change, int32 &y_change);extern void  VideoHandler (void);extern void  PullIntoHazard(CCB *tile,int32 tile_type);extern void  AngelFliesAway(void);extern void  UnderwaterEffects(void);extern void  GameOver (bool end_quickly);extern void  ShutdownAllLevelSpecificArtwork(void);extern void  ShutdownForRestart (void);extern void  ShutdownForExit (void);extern void  Quit (void);extern void  ScreenSaver(void);extern int32 PlayALevel(int32 whats_next);extern int	 main();#endif/***************************************** EOF ******************************************/