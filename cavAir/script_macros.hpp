//#include "\x\cba\addons\main\script_macros_mission.hpp"

#define QUOTE(var) #var
#define DOUBLES(var1,var2) ##var1##_##var2
#define TRIPLES(var1,var2,var3) ##var1##_##var2##_##var3

#define GVAR(var1) DOUBLES(PREFIX,var1)
#define EGVAR(var1,var2) TRIPLES(PREFIX,var1,var2)
#define QGVAR(var1) QUOTE(GVAR(var1))
#define QEGVAR(var1,var2) QUOTE(EGVAR(var1,var2))
#define QQGVAR(var1) QUOTE(QGVAR(var1))
#define QQEGVAR(var1,var2) QUOTE(QEGVAR(var1,var2))
#define FUNC(var) TRIPLES(PREFIX,fnc,var)
#define EFUNC(var1,var2) FUNC(DOUBLES(var1,var2))
#define EEFUNC(var1,var2) FUNC(TRIPLES(var1,var2,var3))
#define QFUNC(var) QUOTE(FUNC(var))
#define QEFUNC(var1,var2) QUOTE(EFUNC(var1,var2))
#define QEEFUNC(var1,var2) QUOTE(EEFUNC(var1,var2,var3))
