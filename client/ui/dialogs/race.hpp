#define GW_Race_ID 90000
#define GW_RaceTitle_ID 90012
#define GW_FilterList_ID 90011

#define GW_BUTTON_WIDTH 0.2
#define GW_BUTTON_HEIGHT 0.035

#define GW_BUTTON_GAP_Y 0.005
#define GW_BUTTON_GAP_X 0.0025
#define GW_BUTTON_BACKGROUND {0,0,0,0.7}

#define NEW_X (0.78)
#define NEW_Y (0.3)

#define CT_LISTBOX 5
#define CT_STRUCTURED_TEXT  13

#define CT_MAP_MAIN 101
#define ST_PICTURE 48

#define MARGIN_TOP 0.15
#define MARGIN_BOTTOM 0.81

class RscMapControl {
    access = 1;
    type = 101;
    idc = 51;
    style = 48;

    colorBackground[] = {
        0.969, 0.957, 0.949, 1
    };
    colorOutside[] = {
        0.467, 0.631, 0.851, 1
    };
    colorText[] = {
        0, 0, 0, 1
    };
    font = "PuristaMedium";
    sizeEx = 0.029;
    colorSea[] = {
        0.467, 0.631, 0.851, 0.5
    };
    colorForest[] = {
        0.624, 0.78, 0.388, 0.5
    };
    colorRocks[] = {
        0, 0, 0, 0.3
    };
    colorCountlines[] = {
        0.572, 0.354, 0.188, 0.25
    };
    colorMainCountlines[] = {
        0.572, 0.354, 0.188, 0.5
    };
    colorCountlinesWater[] = {
        0.491, 0.577, 0.702, 0.3
    };
    colorMainCountlinesWater[] = {
        0.491, 0.577, 0.702, 0.6
    };
    colorForestBorder[] = {
        0, 0, 0, 0
    };
    colorRocksBorder[] = {
        0, 0, 0, 0
    };
    colorPowerLines[] = {
        0.1, 0.1, 0.1, 1
    };
    colorRailWay[] = {
        0.8, 0.2, 0, 1
    };
    colorNames[] = {
        0.1, 0.1, 0.1, 0.9
    };
    colorInactive[] = {
        1, 1, 1, 0.5
    };
    colorLevels[] = {
        0.286, 0.177, 0.094, 0.5
    };
    colorTracks[] = {
        0.84, 0.76, 0.65, 0.15
    };
    colorRoads[] = {
        0.7, 0.7, 0.7, 1
    };
    colorMainRoads[] = {
        0.9, 0.5, 0.3, 1
    };
    colorTracksFill[] = {
        0.84, 0.76, 0.65, 1
    };
    colorRoadsFill[] = {
        1, 1, 1, 1
    };
    colorMainRoadsFill[] = {
        1, 0.6, 0.4, 1
    };
    colorGrid[] = {
        0.1, 0.1, 0.1, 0
    };
    colorGridMap[] = {
        0.1, 0.1, 0.1, 0
    };
    stickX[] = {
        0.2, {
            "Gamma", 1, 1.5
        }
    };
    stickY[] = {
        0.2, {
            "Gamma", 1, 1.5
        }
    };
    class Legend {
        colorBackground[] = {
            1, 1, 1, 0.5
        };
        color[] = {
            0, 0, 0, 1
        };
        x = "SafeZoneX + ( ((safezoneW / safezoneH) min 1.2) / 40)";
        y = "SafeZoneY + safezoneH - 4.5 * ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        w = "10 * ( ((safezoneW / safezoneH) min 1.2) / 40)";
        h = "3.5 * ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        font = "PuristaMedium";
        sizeEx = "( ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
    };
    class ActiveMarker {
        color[] = {
            0.3, 0.1, 0.9, 0
        };
        size = 50;
    };
    class Command {
        color[] = {
            1, 1, 1, 1
        };
        icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
        size = 18;
        importance = 1;
        coefMin = 1;
        coefMax = 1;
    };
    class Task {
        colorCreated[] = {
            1, 1, 1, 1
        };
        colorCanceled[] = {
            0.7, 0.7, 0.7, 1
        };
        colorDone[] = {
            0.7, 1, 0.3, 1
        };
        colorFailed[] = {
            1, 0.3, 0.2, 1
        };
        color[] = {
            "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
        };
        icon = "\A3\ui_f\data\map\mapcontrol\taskIcon_CA.paa";
        iconCreated = "\A3\ui_f\data\map\mapcontrol\taskIconCreated_CA.paa";
        iconCanceled = "\A3\ui_f\data\map\mapcontrol\taskIconCanceled_CA.paa";
        iconDone = "\A3\ui_f\data\map\mapcontrol\taskIconDone_CA.paa";
        iconFailed = "\A3\ui_f\data\map\mapcontrol\taskIconFailed_CA.paa";
        size = 27;
        importance = 1;
        coefMin = 1;
        coefMax = 1;
    };
    class CustomMark {
        color[] = {
            0, 0, 0, 1
        };
        icon = "\A3\ui_f\data\map\mapcontrol\custommark_ca.paa";
        size = 24;
        importance = 1;
        coefMin = 1;
        coefMax = 1;
    };
    class Tree {
        color[] = {
            0.45, 0.64, 0.33, 0.4
        };
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
        size = 12;
        importance = "0.9 * 16 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class SmallTree {
        color[] = {
            0.45, 0.64, 0.33, 0.4
        };
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
        size = 12;
        importance = "0.6 * 12 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class Bush {
        color[] = {
            0.45, 0.64, 0.33, 0.4
        };
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
        size = "14/2";
        importance = "0.2 * 14 * 0.05 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class Church {
        color[] = {
            1, 1, 1, 1
        };
        icon = "\A3\ui_f\data\map\mapcontrol\church_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class Chapel {
        color[] = {
            0, 0, 0, 1
        };
        icon = "\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class Cross {
        color[] = {
            0, 0, 0, 1
        };
        icon = "\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class Rock {
        color[] = {
            0.1, 0.1, 0.1, 0.8
        };
        icon = "\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
        size = 12;
        importance = "0.5 * 12 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class Bunker {
        color[] = {
            0, 0, 0, 1
        };
        icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
        size = 14;
        importance = "1.5 * 14 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class Fortress {
        color[] = {
            0, 0, 0, 1
        };
        icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
        size = 16;
        importance = "2 * 16 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class Fountain {
        color[] = {
            0, 0, 0, 1
        };
        icon = "\A3\ui_f\data\map\mapcontrol\fountain_ca.paa";
        size = 11;
        importance = "1 * 12 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class ViewTower {
        color[] = {
            0, 0, 0, 1
        };
        icon = "\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";
        size = 16;
        importance = "2.5 * 16 * 0.05";
        coefMin = 0.5;
        coefMax = 4;
    };
    class Lighthouse {
        color[] = {
            1, 1, 1, 1
        };
        icon = "\A3\ui_f\data\map\mapcontrol\lighthouse_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class Quay {
        color[] = {
            1, 1, 1, 1
        };
        icon = "\A3\ui_f\data\map\mapcontrol\quay_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class Fuelstation {
        color[] = {
            1, 1, 1, 1
        };
        icon = "\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class Hospital {
        color[] = {
            1, 1, 1, 1
        };
        icon = "\A3\ui_f\data\map\mapcontrol\hospital_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class BusStop {
        color[] = {
            1, 1, 1, 1
        };
        icon = "\A3\ui_f\data\map\mapcontrol\busstop_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class Transmitter {
        color[] = {
            1, 1, 1, 1
        };
        icon = "\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class Stack {
        color[] = {
            0, 0, 0, 1
        };
        icon = "\A3\ui_f\data\map\mapcontrol\stack_ca.paa";
        size = 20;
        importance = "2 * 16 * 0.05";
        coefMin = 0.9;
        coefMax = 4;
    };
    class Ruin {
        color[] = {
            0, 0, 0, 1
        };
        icon = "\A3\ui_f\data\map\mapcontrol\ruin_ca.paa";
        size = 16;
        importance = "1.2 * 16 * 0.05";
        coefMin = 1;
        coefMax = 4;
    };
    class Tourism {
        color[] = {
            0, 0, 0, 1
        };
        icon = "\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";
        size = 16;
        importance = "1 * 16 * 0.05";
        coefMin = 0.7;
        coefMax = 4;
    };
    class Watertower {
        color[] = {
            1, 1, 1, 1
        };
        icon = "\A3\ui_f\data\map\mapcontrol\watertower_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
    };
    class Waypoint {
        color[] = {
            0, 0, 0, 1
        };
        size = 24;
        importance = 1;
        coefMin = 1;
        coefMax = 1;
        icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
    };
    class WaypointCompleted {
        color[] = {
            0, 0, 0, 1
        };
        size = 24;
        importance = 1;
        coefMin = 1;
        coefMax = 1;
        icon = "\A3\ui_f\data\map\mapcontrol\waypointCompleted_ca.paa";
    };
    moveOnEdges = 1; //1;
    x = "SafeZoneXAbs";
    y = "SafeZoneY + 1.5 * ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
    w = "SafeZoneWAbs";
    h = "SafeZoneH - 1.5 * ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
    shadow = 0;
    ptsPerSquareSea = 5;
    ptsPerSquareTxt = 3;
    ptsPerSquareCLn = 10;
    ptsPerSquareExp = 10;
    ptsPerSquareCost = 10;
    ptsPerSquareFor = 9;
    ptsPerSquareForEdge = 9;
    ptsPerSquareRoad = 6;
    ptsPerSquareObj = 9;
    showCountourInterval = 0;
    scaleMin = 0.001;
    scaleMax = 0.3;
    scaleDefault = 0.3;
    maxSatelliteAlpha = 0.85;
    alphaFadeStartScale = 2.1;
    alphaFadeEndScale = 2.1;
    fontLabel = "PuristaMedium";
    sizeExLabel = "( ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
    fontGrid = "TahomaB";
    sizeExGrid = 0.02;
    fontUnits = "TahomaB";
    sizeExUnits = "( ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
    fontNames = "PuristaMedium";
    sizeExNames = "( ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 2";
    fontInfo = "PuristaMedium";
    sizeExInfo = "( ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
    fontLevel = "PuristaMedium";
    sizeExLevel = 0.02;
    text = "#(argb,8,8,3)color(1,1,1,1)";
    //text = "\a3\ui_f\data\map_background2_co.paa";
    class power {
        icon = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
        color[] = {
            1, 1, 1, 1
        };
    };
    class powersolar {
        icon = "\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
        color[] = {
            1, 1, 1, 1
        };
    };
    class powerwave {
        icon = "\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
        color[] = {
            1, 1, 1, 1
        };
    };
    class powerwind {
        icon = "\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
        color[] = {
            1, 1, 1, 1
        };
    };
    class shipwreck {
        icon = "\A3\ui_f\data\map\mapcontrol\shipwreck_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1;
        color[] = {
            1, 1, 1, 1
        };
    };
};



// Menu
class GW_Race
{
	idd = GW_Race_ID;
	name = "GW_Race";
	movingEnabled = false;
	enableSimulation = true;	
	onLoad = "uiNamespace setVariable ['GW_Race_Menu', _this select 0]; "; 
  access = ReadAndWrite;

	class controlsBackground
	{
		
    	class Map : RscMapControl
        {
          moveOnEdges = 1;
          colorBackground[] = {1,1,1,1};
          idc = 90001; 
          x = -1 * safezoneW + safezoneX;
          y = 0 * safezoneH + safezoneY;
          w = 3 * safezoneW;
          h = 1 * safezoneH;
        };  
     
  
    
	};

	class controls
	{


    class Title : GW_LargeTitle
    {
        idc = GW_RaceTitle_ID;
        style = ST_CENTER;
        text = "";
        font = "PuristaMedium";

        x = (0.1) * safezoneW + safezoneX;
        y = (0.44) * safezoneH + safezoneY;
        w = 0.8  * safezoneW;
        h = 0.12  * safezoneH;
    };

	class ButtonBlank : GW_RscButtonMenu
    {
      idc = -1;
      text = "";
      onButtonClick = "";
      colorBackgroundFocused[] = {0,0,0,0};
      colorBackground[] = {0,0,0,0};
      colorBackground2[] = {0,0,0,0};
      x = (0) * safezoneW + safezoneX;
      y = (0) * safezoneH + safezoneY;
      w = (GW_BUTTON_WIDTH) * safezoneW;
      h = GW_BUTTON_HEIGHT * safezoneH;

    };

    class MarginBottom : GW_Block
    {
      idc = 90002;
      colorBackground[] = {0,0,0,0.85};
      x = -1;
      y = (MARGIN_BOTTOM + (GW_BUTTON_HEIGHT * 2)) * safezoneH + safezoneY; 
      w = 3;
      h = 0.25 * safezoneH;
    };  

    class MarginTop : GW_Block
    {
      idc = 90003;
      colorBackground[] = {0,0,0,0.85};
      x = -1;
      y = 0 * safezoneH + safezoneY; 
      w = 3;
      h = MARGIN_TOP + (GW_BUTTON_HEIGHT) * safezoneH;
    };      

    class FilterList : GW_RscCombo
    {
      idc = GW_FilterList_ID;
      colorBackground[] = {0,0,0,0.7};
      onLBSelChanged  = "";
      x = (0.015) * safezoneW + safezoneX;
      y = (MARGIN_BOTTOM) * safezoneH + safezoneY;
      w = (GW_BUTTON_WIDTH) * safezoneW;
      h = GW_BUTTON_HEIGHT * safezoneH;
    };

    class ButtonEdit : GW_RscButtonMenu
    {
      idc = -1;
      text = "EDIT";
      onButtonClick = "_this call toggleRaceEditing";
      x = (0.015) * safezoneW + safezoneX;
      y = (MARGIN_TOP) * safezoneH + safezoneY;
      w = (GW_BUTTON_WIDTH/2) * safezoneW;
      h = GW_BUTTON_HEIGHT * safezoneH;

      class TextPos
      {
        left = 0;
        top = 0.0135;
        right = 0;
        bottom = 0;
      };

    };

     class ButtonRename : GW_RscButtonMenu
    {
      idc = -1;
      text = "RENAME";
      onButtonClick = "[] spawn renameCurrentRace";
      x = (0.015 + (GW_BUTTON_WIDTH /2) + GW_BUTTON_GAP_X) * safezoneW + safezoneX;
      y = (MARGIN_TOP) * safezoneH + safezoneY;
      w = (GW_BUTTON_WIDTH/2) * safezoneW;
      h = GW_BUTTON_HEIGHT * safezoneH;

      class TextPos
      {
        left = 0;
        top = 0.0135;
        right = 0;
        bottom = 0;
      };

    };


    
    class ButtonClose : GW_RscButtonMenu
    {
      idc = -1;
      text = "X";
      onButtonClick = "closeDialog 0;";
      x = (0.98 - (GW_BUTTON_WIDTH / 2)) * safezoneW + safezoneX;
      y = (MARGIN_TOP) * safezoneH + safezoneY;
      w = (GW_BUTTON_WIDTH/2) * safezoneW;
      h = GW_BUTTON_HEIGHT * safezoneH;

      class TextPos
      {
        left = 0;
        top = 0.0135;
        right = 0;
        bottom = 0;
      };

    };
    

    class StripeTile : GW_Stripe_Box
    {    
      idc = -1;     
      x = (0.4) * safezoneW + safezoneX;
      y = (MARGIN_BOTTOM) * safezoneH + safezoneY;
      w = GW_BUTTON_WIDTH * safezoneW;
      h = GW_BUTTON_HEIGHT * safezoneH;
    };  

    class ButtonLoad : GW_RscButtonMenu

    {
      idc = -1;
      text = "START";
      onButtonClick = "";
      x = (0.4) * safezoneW + safezoneX;
      y = (MARGIN_BOTTOM) * safezoneH + safezoneY;
      w = GW_BUTTON_WIDTH * safezoneW;
      h = GW_BUTTON_HEIGHT * safezoneH;

      shadow = 1;

      colorBackground[] = {0,0,0,0.5};
      colorBackgroundFocused[] = {0,0,0,0};
      colorBackground2[] = {0,0,0,0.1};

      color[] = {1,1,1,0.75};
      colorFocused[] = {1,1,1,1};
      color2[] = {1,1,1,1};     
      colorText[] = {1,1,1,1};

      class TextPos
      {
        left = 0;
        top = 0.0135;
        right = 0;
        bottom = 0;
      };


    };

    class ButtonPrev : GW_RscButtonMenu
    {
      idc = -1;
      text = "&#60;";
      onButtonClick = "";
      x = (0.4 - ( (GW_BUTTON_WIDTH / 3) + GW_BUTTON_GAP_X)) * safezoneW + safezoneX;
      y = (MARGIN_BOTTOM) * safezoneH + safezoneY;
      w = (GW_BUTTON_WIDTH / 3) * safezoneW;
      h = GW_BUTTON_HEIGHT * safezoneH;

      class TextPos
      {
        left = 0;
        top = 0.0135;
        right = 0;
        bottom = 0;
      };

    };

    class ButtonNext : GW_RscButtonMenu
    {
      idc = -1;
      text = "&#62;";
      onButtonClick = "";
      x = (0.4 + GW_BUTTON_WIDTH + GW_BUTTON_GAP_X) * safezoneW + safezoneX;
      y = (MARGIN_BOTTOM) * safezoneH + safezoneY;
      w = (GW_BUTTON_WIDTH / 3) * safezoneW;
      h = GW_BUTTON_HEIGHT * safezoneH;

      class TextPos
      {
        left = 0;
        top = 0.0135;
        right = 0;
        bottom = 0;
      };
    };

    class ButtonClear : GW_RscButtonMenu
    {
      idc = 90018;
      text = "CLEAR";
      onButtonClick = "[] spawn clearCurrentRace";
      x = (0.98 - ((GW_BUTTON_WIDTH / 2) * 2) - GW_BUTTON_GAP_X) * safezoneW + safezoneX;
      y = (MARGIN_BOTTOM) * safezoneH + safezoneY;
      w = (GW_BUTTON_WIDTH / 2) * safezoneW;
      h = GW_BUTTON_HEIGHT * safezoneH;

      colorBackgroundFocused[] = {0.99,0.14,0.09,0.65}; 
      colorBackground2[] = {0.99,0.14,0.09,0.85};

      class TextPos
      {
        left = 0;
        top = 0.0135;
        right = 0;
        bottom = 0;
      };

    };

    class ButtonDelete : GW_RscButtonMenu
    {
      idc = -1;
      text = "Delete";
      onButtonClick = "[] spawn removeVehicle";
      x = (0.98 - (GW_BUTTON_WIDTH / 2)) * safezoneW + safezoneX;
      y = (MARGIN_BOTTOM) * safezoneH + safezoneY;
      w = (GW_BUTTON_WIDTH / 2) * safezoneW;
      h = GW_BUTTON_HEIGHT * safezoneH;

      colorBackgroundFocused[] = {0.99,0.14,0.09,0.65}; 
      colorBackground2[] = {0.99,0.14,0.09,0.85};

      class TextPos
      {
        left = 0;
        top = 0.0135;
        right = 0;
        bottom = 0;
      };

    };

     class TooltipLabel : GW_StructuredTextBox
    {
      idc = 90020;
      text = "";
      onButtonClick = "";
      x = (0) * safezoneW + safezoneX;
      y = (0) * safezoneH + safezoneY;
      w = (GW_BUTTON_WIDTH /2) * safezoneW;
      h = (GW_BUTTON_HEIGHT ) * safezoneH;

      colorBackgroundFocused[] = {0.99,0.14,0.09,0.75}; 
      colorBackground2[] = {0.99,0.14,0.09,0.75};

      class TextPos
      {
        left = 0;
        top = 0.015;
        right = 0;
        bottom = 0;
      };

    };

	};

};