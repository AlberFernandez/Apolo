#ifndef __APOLO__DEFINITIONS__H
#define __APOLO__DEFINITIONS__H

//FUNCTIONS OF FRAME 10XX
#define ID_LOADWORLD 1000
#define ID_LOADMESH 1001
#define ID_NEW 1002
#define ID_TREE 1003
#define ID_VIS_TREE 1004
#define ID_DELETE 1005
#define ID_ORI 1006
#define ID_POSIT 1007
#define ID_COLOR 1008
#define ID_BOX 1009
#define ID_REFER 1010
#define ID_NAME 1011
#define ID_MOVE 1012
#define ID_TIMER 1013
#define ID_SAVEWORLD 1014
#define ID_LOADOBJ 1015
#define ID_SAVEOBJ 1016
#define ID_CONVER 1017
#define ID_CONVERMESH 1018
#define ID_DIS 1019
#define ID_DRAG 1020
#define ID_DRAWBOX 1021
#define ID_COMPRS 1022
#define ID_POS 1023
#define ID_VIS_CONNLOG 1024
#define ID_LASMOD0 1025
#define ID_LASMOD1 1026
#define ID_LASMOD2 1027
#define ID_LASMOD3 1028

#define ID_LOADWORLDXML 1029
#define ID_LOADOBJXML 1030
#define ID_SAVEWORLDXML 1031
#define ID_SAVEOBJXML 1032



#define ID_CHANGEFORM 1033
#define ID_SETDESIGN 1034
#define ID_LINKTO 1035
#define ID_UNLINK 1036
#define ID_MODIFYFACE 1037
#define ID_SHOWLINKS 1038
#define ID_TREESTRUCTURE 1039
#define ID_SAVEASROBOT 1040


//OBJECTS ID 15XX
#define ID_ROBOT 1500
#define ID_DELOBJ 1501
#define ID_ADDFACE 1502
#define ID_ADDSPHERE 1503
#define ID_ADDCYL 1504
#define ID_ADDPRI 1505
#define ID_ADDOBJ 1506
#define ID_ADDNEO 1507
#define ID_ADDSCARA 1508
#define ID_ADDPUMA 1509
#define ID_ADDASEA 1510
#define ID_ADDCOMP 1511
#define ID_POWERCUBE 1512
#define ID_PATROL 1513
#define ID_LMS200 1514
#define ID_LMS100 1515
#define ID_ADDCUSTOM 1516
#define ID_WHEEL 1517
#define ID_LASER 1518
#define ID_NEMOLASER 1519
#define ID_LASER3D 1520
#define ID_ADDFACESET 1521
#define ID_QUADROTOR 1522
#define ID_CAMERA 1523
#define ID_KINECT 1524
#define ID_PERSON 1525
#define ID_MOBILEROBOT 1526
#define ID_ADDIRRPRI 1527
#define ID_SIMPLEJOINT 1528
#define ID_ROBOTGOTO 1529
#define ID_EUITIBOT 1530





//FUNCTIONS OF CHILDFRAME 200X
#define ID_HIDE 2000
#define ID_SPLITHF 2001 
#define ID_SPLITHS 2002 
#define ID_SPLITVF 2003
#define ID_SPLITVS 2004
#define ID_UNSPLITF 2005 
#define ID_UNSPLITS 2006
#define ID_PLAY 2007
#define ID_STOP2 2008
#define ID_CANVASCOLOR 2009


//FUNCTIONS OF TREE 300X
#define ID_LOCATION 3000

//FUNCTIONS OF CONTROL 400X
#define ID_SLIDER 4000 
#define ID_PLUS 4001 
#define ID_MINUS 4002 
#define ID_NUM 4003 
#define ID_EDIT 4004 
#define ID_ACCEPT 4005 
#define ID_CANCEL 4006 
#define ID_DEFAULT 4007 
#define ID_OTHERFACE 4008
#define ID_ALIGN 4009
#define ID_PRIBASE 4010
#define ID_CHANGEVIEW 4011
#define ID_ZOOMDESIGN 4012
#define ID_VERTICALMOVE 4013
#define ID_HORIZONTALMOVE 4014
#define ID_ADDOWNFACE 4015
#define ID_MOVELEFT 4016
#define ID_MOVERIGHTUP 4017
#define ID_MOVERIGHTDOWN  4018
#define ID_MOVELEFTUP 4019
#define ID_MOVELEFTDOWN 4020
#define ID_CHANGEVERTEX 4021
#define ID_DELETEVERTEX 4022
#define ID_GRIDSIZE 4023
#define ID_ALIGNON 4024
#define ID_ALIGNOFF 4025
#define ID_SHOWTHREED 4026
#define ID_SHOWGRID 4027
#define ID_SUBMENUG 4028
#define ID_FACENUM 4029
#define ID_ZOOMVALUE 4031



#define ID_LINES 4030

#define ID_ERASEVERTEX 4032
#define ID_SELECTPOINTS 4033
#define ID_HALFWAYPOINT 4034
#define ID_ERASEPOINTS 4035
#define ID_ACCEPTFACE 4036
#define ID_TVP 4037 
#define ID_CPT 4038 
#define ID_SPLINE 4039
#define ID_CHOOSETYPETRAJECTORY 4040
#define ID_CHOOSETYPEMOVEMENT 4041
#define ID_CHOOSESYSREFERENCE 4042
#define ID_CHOOSETOMOVE 4043
#define ID_CANCELDESIGN 4044
#define ID_COPYDESIGN 4045
#define ID_PASTEDESIGN 4046
#define ID_VALIDATEXML 4047
#define ID_SHOWEDITXML 4048
#define ID_CLOSEEDITXML 4049
#define ID_SEARCH 4050
#define ID_BREAKDOWN 4051
#define ID_SELECTEDFACE 4052
#define ID_CANCELSELECTION 4053
#define ID_UPDATEXML 4054
#define ID_SELECTW 4055
#define ID_CREATEWORLDXML 4056
#define ID_SELECTEDENTITY 4057
#define ID_ADDNEWENTITY 4058
#define ID_SHOWWORLDXML 4059
#define ID_SAVEXMLEDIT 4060
#define ID_SETSIZE 4061
#define ID_SELECTLISTEDITEM 4062
#define ID_CYLINDCOMPOSED 4063
#define ID_SPHERECOMPOSED 4064
#define ID_IRRPRISMCOMPOSED 4065
#define ID_ADDCOMPPART 4066
#define ID_ADDANOTHERITEM 4067
#define ID_FINISHCOMPOSED 4068
#define ID_SELECTCOMPOSEDTOVIEW 4069
#define ID_TEXTCHANGE 4072
#define ID_SELECTCURRENTCOMPOSED 4073
#define ID_REGPRISMCOMPOSED 4074








// Define  for wxwigets reseved 50XX
//wxID_EXIT 5006
//wxID_ABOUT 5013

//FUNCTIONS OF EDITPROP 600X
#define ID_CANCEL2 6000
#define ID_ACCEPT2 6001
#define ID_ENTER 6002
#define ID_SPIN 6003
#define ID_COLOR2 6004
#define ID_APPLY 6005
#define ID_INCRUP 6007
#define ID_INCRDOWN 6008
#define ID_CHECK 6009

//FUNCTIONS OF MOVECONTROL 700X
#define ID_UP 7000
#define ID_DOWN 7001
#define ID_RIGHT 7002
#define ID_LEFT 7003
#define ID_STOP 7004

//FUNCTIONS OF CONVERTER 800X
#define ID_OPEN 8000
#define ID_SAVE 8001

//FUNCTIONS OF EDIT WIDGETS 900X
#define SLI_VERT 9000
#define CONT_MENU 9001
#define POP_MENU 9002
#define DROP_MENU 9003
#define DIS_SLI 9004
#define DIS_CONT 9005


//SERVERS 95XX
#define ID_LNSERVER 9500
#define ID_STSERVER 9501
#define ID_LNCLIENT 9502
#define ID_STCLIENT 9503



#endif //__APOLO__DEFINITIONS__H