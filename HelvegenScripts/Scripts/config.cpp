//Made by Pechyvo, Pechyvo#6299
class CfgPatches
{
	class HelvegenScripts
	{
		requiredAddons[] = { "DZ_Scripts" };
	};
};

class CfgAddons
{
    class PreloadAddons
    {
        class HelvegenScripts
        {
            list[]={};
        };
    };
};

class CfgMods
{
    class HelvegenScripts
    {
        name="HelvegenScripts";
        dir="HelvegenScripts";
        picture="";
        action="";
        author="Pechyvo";
        overview = "";
		inputs = "";
		type = "mod";
        defines[] = {};

        class defs
		{
			class imageSets
			{
				files[]= {};
			};
			class widgetStyles
			{
				files[]= {};
			};

			class engineScriptModule 
			{ 
				files[] = { "HelvegenScripts/Scripts/1_Core"};
			};

			class gameScriptModule
			{
				files[] = { "HelvegenScripts/Scripts/3_Game" };
			};
			class worldScriptModule
			{
				files[] = { "HelvegenScripts/Scripts/4_World" };
			};

			class missionScriptModule 
			{
				files[] = { "HelvegenScripts/Scripts/5_Mission" };
			};
		};
    };
};
