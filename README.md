# 7th Cavalry Air Jump System (cavAir)
This are a ripout distribution of [cScripts](https://github.com/7Cav/cScripts) halo, line jump and get out system. All functions in this distribution is required t obe added manually.

## Installation
In order to install this script package you only need to [download the latest build](https://github.com/7Cav/cavAirJumpSystem/releases/latest) it and place the content in your mission folder located:
`%USERPROFILE%\Documents\Arma 3 - Other Profiles\[MY ARMA3 USER NAME]\missions\[MY MISSION NAME].[ISLAND]`

*Note! If you have a `description.ext` file included in your mission folder, they will be need to be replaced or edited in order to install this.*

# Functions
## addGetOutHelo
This functions add options to players inside of a helicopter to exit for a desired door by adding `Get Out Left` and `Get Out Right` options.

`[this] call cavAir_fnc_addGetOutHelo`

```
0: Object <OBJECT>
1: Color Action <BOOL>
```

## addHaloJump
This functions add a option for helicopter or airplace passanger to simulate a static line jump witout requiring a parachute.

`[this, 5000, "B_Parachute"] call cavAir_fnc_addHaloJump`

```
0: Vehicle             <OBJECT>
1: Minimum altetude    <NUMBER> (Optional) (Default; 5000)
4: Chute Vehicle Class <OBJECT> (Optional) (Default; "B_Parachute")
```

## addLineJump
This functions add a option for helicopter or airplace passanger to simulate a HALO jump witout the requirement of having parachute equiped.

`[this, 180, 350, 300, "rhs_d6_Parachute"] call cavAir_fnc_addLineJump`
```
0: Vehicle             <OBJECT>
1: Minimum altetude    <NUMBER> (Optional) (Default; 180)
2: Maximum altetude    <NUMBER> (Optional) (Default; 350)
3: Maximum speed       <NUMBER> (Optional) (Default; 310)
4: Chute Vehicle Class <OBJECT> (Optional) (Default; "rhs_d6_Parachute")
```